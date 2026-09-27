#!/usr/bin/env python3
"""
Author: WOJTEK885
Description:
  Verifies that every unit and piece of equipment an addon defines is properly
  registered in the addon's CfgPatches units[] / weapons[] arrays.
  Checks:
    - Units declared in CfgVehicles with an effective scope of 2 must be listed
      in units[]. Scope is resolved transitively through the addon's own
      inheritance chain, so subclasses that do not redeclare scope are handled.
    - Equipment declared in CfgWeapons must be listed in weapons[] regardless of
      scope, so hidden (scope = 1) arsenal-only items stay registered.
    - Anything listed in units[] / weapons[] without a matching class definition
      is reported, which catches stale entries and typos.
  Configs are located by following the #include directives of config.cpp, so the
  conventional CfgVehicles.hpp / CfgWeapons.hpp filenames are not required:
  a config may live in config.cpp itself or in any other header the addon
  includes, and an addon may open more than one CfgVehicles block since Arma
  merges them. Includes that do not resolve to a local file are skipped, because
  the macro chain uses absolute PBO paths such as \x\cba\addons\main that only
  exist in a built mod and never contain config classes.
  Import/abstract declarations (external parents and empty base classes) are
  skipped, and addons that only re-open other addons' classes (the compat
  addons) require no registration of their own.
"""

import os
import re
import sys
import logger

RE_INCLUDE = re.compile(r'^\s*#include\s+"([^"]+)"', re.M)
RE_UNITS = re.compile(r'units\[\]\s*=\s*\{(.*?)\}\s*;', re.S)
RE_WEAPONS = re.compile(r'weapons\[\]\s*=\s*\{(.*?)\}\s*;', re.S)
RE_QUOTED = re.compile(r'"([^"]+)"')
RE_OUTER = re.compile(r'class\s+(\w+)\s*\{')
RE_CLASS = re.compile(r'class\s+(\w+)\s*(?::\s*([\w:<>]+))?\s*\{')
RE_SCOPE = re.compile(r'^\s*scope\s*=\s*(\d+)\s*;', re.M)
RE_CONTENT = re.compile(r'^\s*(?:author|displayName)\s*=', re.M)


def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='ignore') as file:
        return file.read()


def mask(text, blank_strings=True):
    """Return a copy of `text` with comments blanked out.

    Characters are replaced by spaces rather than removed so that every offset
    still refers to the same position in the original text. Newlines are kept so
    that line-anchored patterns keep working. When `blank_strings` is set the
    contents of string literals are blanked too, which lets braces, quotes and
    keywords that appear inside a string be ignored while scanning structure.
    """
    chars = list(text)
    index = 0
    length = len(text)

    while index < length:
        char = text[index]

        if char == '"' and blank_strings:
            chars[index] = ' '
            index += 1
            while index < length and text[index] != '"':
                if text[index] == '\\' and index + 1 < length:
                    chars[index] = ' '
                    chars[index + 1] = ' '
                    index += 2
                    continue
                chars[index] = ' '
                index += 1
            if index < length:
                chars[index] = ' '
                index += 1
            continue
        if char == '/' and index + 1 < length and text[index + 1] == '/':
            end = text.find('\n', index)
            end = length if end == -1 else end
            for position in range(index, end):
                chars[position] = ' '
            index = end
            continue
        if char == '/' and index + 1 < length and text[index + 1] == '*':
            end = text.find('*/', index + 2)
            end = length if end == -1 else end + 2
            for position in range(index, end):
                chars[position] = ' '
            index = end
            continue

        index += 1

    return ''.join(chars)


def collect_sources(entry_path):
    """Return the addon files that make up its config as (path, text) pairs.

    The entry file is always a source, so configs declared inline in config.cpp
    are covered. Includes are resolved against the directory of the file that
    requested them, and the visited set guards against include cycles. Anything
    that does not resolve to a local file is skipped.
    """
    sources = []
    pending = [entry_path]
    visited = set()

    while pending:
        path = pending.pop(0)
        real = os.path.normcase(os.path.abspath(path))
        if real in visited or not os.path.isfile(path):
            continue

        visited.add(real)
        text = read_file(path)
        sources.append((path, text))

        base = os.path.dirname(path)
        for include in RE_INCLUDE.findall(mask(text, blank_strings=False)):
            target = os.path.join(base, include.replace('\\', os.sep))
            pending.append(os.path.normpath(target))

    return sources


def find_block_end(masked, start):
    """Return the index of the brace closing the one at `start`."""
    depth = 0

    for index in range(start, len(masked)):
        char = masked[index]
        if char == '{':
            depth += 1
        elif char == '}':
            depth -= 1
            if depth == 0:
                return index

    return -1


def scan_children(body):
    """Map every direct child class of an already isolated, masked class body.

    Returns a dict of class name to (parent, body). Forward declarations ending
    in `;` are not matched, and nested classes are skipped because they sit
    below depth 0.
    """
    classes = {}
    depth = 0
    index = 0
    length = len(body)

    while index < length:
        char = body[index]

        if depth == 0 and char == 'c' and body.startswith('class', index):
            declaration = RE_CLASS.match(body, index)
            if declaration:
                brace = body.index('{', index)
                close = find_block_end(body, brace)
                if close == -1:
                    break
                classes[declaration.group(1)] = (
                    declaration.group(2),
                    body[brace + 1:close],
                )
                index = close + 1
                continue
        if char == '{':
            depth += 1
        elif char == '}':
            depth -= 1

        index += 1

    return classes


def parse_blocks(text, outer):
    """Map every direct child of each `class outer { ... }` in `text`.

    Every occurrence is collected, not just the first, because an addon may
    open more than one block for the same config root and Arma merges them.
    """
    masked = mask(text)
    classes = {}

    for match in RE_OUTER.finditer(masked):
        if match.group(1) != outer:
            continue
        start = masked.index('{', match.start())
        end = find_block_end(masked, start)
        if end == -1:
            continue
        classes.update(scan_children(masked[start + 1:end]))

    return classes


def parse_config_section(sources, outer):
    """Merge the `outer` classes declared across every source of a config."""
    classes = {}
    for _, text in sources:
        classes.update(parse_blocks(text, outer))
    return classes


def effective_scope(classes, name, seen=None):
    """Resolve a class' scope, following the addon's own inheritance chain."""
    if seen is None:
        seen = set()
    if name in seen or name not in classes:
        return None

    seen.add(name)
    parent, body = classes[name]

    scope = RE_SCOPE.search(body)
    if scope:
        return int(scope.group(1))

    return effective_scope(classes, parent, seen) if parent else None


def check_addon(addon_dir):
    """Return the registration problems and config sources of a single addon."""
    errors = []
    name = os.path.basename(addon_dir)
    config_path = os.path.join(addon_dir, 'config.cpp')
    raw_config = read_file(config_path)
    config = mask(raw_config)

    # The mask keeps every offset aligned with the raw text, so the arrays are
    # located on the mask (which ignores commented out entries) but read from
    # the original, where the quoted names are still intact.
    units_match = RE_UNITS.search(config)
    listed_units = (
        RE_QUOTED.findall(raw_config[units_match.start(1):units_match.end(1)])
        if units_match else []
    )
    weapons_match = RE_WEAPONS.search(config)
    listed_weapons = (
        RE_QUOTED.findall(
            raw_config[weapons_match.start(1):weapons_match.end(1)]
        )
        if weapons_match else []
    )

    sources = collect_sources(config_path)
    source_names = [
        os.path.relpath(path, logger.project_root()) for path, _ in sources
    ]
    units = parse_config_section(sources, 'CfgVehicles')
    gear = parse_config_section(sources, 'CfgWeapons')

    undeclared = 'no matching class was found in config.cpp or its includes'

    for unit in sorted(units):
        if effective_scope(units, unit) == 2 and unit not in listed_units:
            errors.append(
                f'{name}: unit "{unit}" is not registered in units[]'
            )
    for unit in listed_units:
        if unit not in units:
            errors.append(f'{name}: units[] lists "{unit}" but {undeclared}')

    for item in sorted(gear):
        if RE_CONTENT.search(gear[item][1]) and item not in listed_weapons:
            errors.append(
                f'{name}: equipment "{item}" is not registered in weapons[]'
            )
    for item in listed_weapons:
        if item not in gear:
            errors.append(
                f'{name}: weapons[] lists "{item}" but {undeclared}'
            )

    return errors, source_names


def main():
    addons_dir = os.path.join(logger.project_root(), 'addons')
    addons = sorted(
        os.path.join(addons_dir, entry)
        for entry in os.listdir(addons_dir)
        if os.path.isdir(os.path.join(addons_dir, entry))
        and os.path.exists(os.path.join(addons_dir, entry, 'config.cpp'))
    )

    errors = []
    for addon in addons:
        addon_errors, sources = check_addon(addon)
        if addon_errors:
            logger.log(
                logger.LogLevel.INFO,
                f"{os.path.basename(addon)}: config sources: {', '.join(sources)}"
            )
            errors.extend(addon_errors)

    for error in errors:
        logger.log(logger.LogLevel.ERROR, error)

    logger.log(
        logger.LogLevel.INFO,
        f"Checked {len(addons)} addons, errors detected: {len(errors)}"
    )
    if errors:
        logger.log(
            logger.LogLevel.ERROR, "Addon registration validation FAILED"
        )
    else:
        logger.log(
            logger.LogLevel.INFO, "Addon registration validation PASSED"
        )

    return len(errors)


if __name__ == "__main__":
    sys.exit(main())
