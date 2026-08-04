#!/usr/bin/env python3
"""
Author: WOJTEK885
Description:
  Generates a Markdown guide listing every unit available in Freeman: Guerrilla
  Warfare together with their possible equipment, organised by faction.
  Source data comes from the game's JSON tables under:
    .../StreamingAssets/Native/Table

  Usage:
    python tools/generate_units_guide.py [--tables <dir>] [--output <path>]
"""

import json
import os
import sys
from pathlib import Path

import logger

DEFAULT_TABLES = Path(
    r"D:\Steam\steamapps\common\Freeman Guerrilla Warfare\Freeman Guerrilla Warfare"
    r"\Freeman Guerrilla Warfare_Data\StreamingAssets\Native\Table"
)
DEFAULT_OUTPUT = Path("docs/units-equipment-guide.md")

ROLE_LABEL = {"NEAR": "Assault (near)", "MIDDLE": "Support (middle)", "FAR": "Sniper (far)"}

SKILL_TOKENS = [
    ("Pistol", "PistolPoint"),
    ("Rifle", "RiflePoint"),
    ("SMG", "SmgPoint"),
    ("Shotgun", "ShotGunPoint"),
    ("AR", "AssaultRiflePoint"),
    ("MG", "MachineGunPoint"),
    ("Launcher", "LauncherPoint"),
    ("Throwing", "ThrowingPoint"),
    ("Armor", "ArmorPoint"),
]

SKILL_LEGEND = [
    "**Pistol** – handguns (Beretta, Makarova, ...).",
    "**Rifle** – bolt-action / DMR rifles (MK14, SVD, ...).",
    "**SMG** – submachine guns (AKS76, UMP9, ...).",
    "**Shotgun** – shotguns (Remington, Striker12, ...).",
    "**AR** – assault rifles (AKM, M16A5, ...).",
    "**MG** – machine guns (HMG, PKM74, ...).",
    "**Launcher** – RPG launchers.",
    "**Throwing** – grenades.",
    "**Armor** – body armor level (max armor the soldier can wear).",
]

FACTION_SQUAD_ORDER = [
    "1", "101", "102", "103", "104", "201", "202", "203", "301", "302", "303", "402", "403", "501",
]


def fmt(value) -> str:
    """Formats a value as a compact string for the guide."""
    if value is None:
        return ""
    if isinstance(value, float) and value.is_integer():
        return str(int(value))
    return str(value)


def load_tables(tables_dir: Path) -> dict[str, dict]:
    """Loads all game tables into a dict keyed by table name."""
    tables = {}
    for filename in ("Soldier", "Weapon", "Clothes", "Item", "Faction", "Squad", "Hero"):
        path = tables_dir / f"{filename}.json"
        with open(path, encoding="utf-8-sig") as f:
            tables[filename] = json.load(f)
        logger.log(logger.LogLevel.INFO, f"Loaded {filename}.json ({len(tables[filename])} entries)")
    return tables


def resolve(table: dict, item_id) -> str:
    """Returns 'Name (ID)' for a referenced table entry, or 'Unknown (ID)'."""
    key = str(item_id)
    entry = table.get(key)
    if entry is None:
        return f"Unknown ({item_id})"
    name = entry.get("Name")
    return f"{name} ({item_id})"


def resolve_list(table: dict, id_list) -> str:
    """Resolves a list of IDs, skipping 0/None placeholders."""
    if not id_list:
        return "none"
    names = []
    for item_id in id_list:
        if item_id in (0, None, "0", ""):
            continue
        names.append(resolve(table, item_id))
    return " · ".join(names) if names else "none"


def resolve_scalar(table: dict, item_id) -> str:
    """Resolves a single ID, returning 'none' for 0/None."""
    if item_id in (0, None, "0", ""):
        return "none"
    return resolve(table, item_id)


def skill_line(soldier: dict) -> str:
    """Renders the weapon-skill values as a compact fraction string."""
    values = []
    for label, key in SKILL_TOKENS:
        values.append(f"{label} {fmt(soldier.get(key, 0))}")
    return " · ".join(values)


def equipment_lines(soldier: dict, weapon_table: dict, clothes_table: dict, item_table: dict) -> list[str]:
    """Renders the soldier's resolved equipment as a bullet list."""
    lines = []
    slots = [
        ("Helmet", "HelmetId", clothes_table),
        ("Shirt", "ShirtId", clothes_table),
        ("Armor", "ArmorId", clothes_table),
        ("Pants", "PantsId", clothes_table),
        ("Mask", "MaskId", clothes_table),
        ("Pistol", "PistolId", weapon_table),
        ("Rifle", "RifleId", weapon_table),
    ]
    for label, key, table in slots:
        lines.append(f"  - **{label}:** {resolve_list(table, soldier.get(key, []))}")
    misc = [soldier.get("misc1Id", 0), soldier.get("misc2Id", 0), soldier.get("misc3Id", 0)]
    misc_items = []
    for item_id in misc:
        name = resolve_scalar(item_table, item_id)
        if name != "none":
            misc_items.append(name)
    lines.append(f"  - **Misc:** {' · '.join(misc_items) if misc_items else 'none'}")
    return lines


def soldier_profile(soldier: dict, weapon_table: dict, clothes_table: dict, item_table: dict) -> list[str]:
    """Renders the full profile for one soldier/unit."""
    lines = [f"#### {soldier['Name']} (ID {soldier['ID']})"]
    stats = [
        f"Role: {ROLE_LABEL.get(soldier.get('Type', ''), soldier.get('Type', ''))}",
        f"Sex: {'Male' if soldier.get('Sex') == 'MALE' else 'Female'}",
        f"Cost: {fmt(soldier.get('Cost'))}",
        f"Health: {fmt(soldier.get('Health'))}",
        f"Marksmanship: {fmt(soldier.get('Marksmanship'))}",
        f"Sight: {fmt(soldier.get('SightBonus'))}",
        f"Speed: {fmt(soldier.get('Speed'))}",
        f"MaxMisc: {fmt(soldier.get('MaxMISCNum'))}",
    ]
    lines.append("")
    lines.append("  " + " · ".join(stats))
    lines.append("")
    lines.append(f"  Skills: `{skill_line(soldier)}`")
    lines.append("")
    lines.extend(equipment_lines(soldier, weapon_table, clothes_table, item_table))
    lines.append("")
    return lines


def faction_soldiers(faction: dict) -> list[str]:
    """Deduplicated list of soldier IDs for a faction, preserving order."""
    soldiers = []
    for soldier_id in faction.get("PossibleSoldiers", []):
        if str(soldier_id) not in soldiers:
            soldiers.append(str(soldier_id))
    return soldiers


def factions_for_soldier(soldier_id: str, factions: dict) -> list[str]:
    """Returns faction IDs that can field the given soldier."""
    result = []
    for faction_id, faction in factions.items():
        if soldier_id in faction_soldiers(faction):
            result.append(faction_id)
    return result


def squad_faction(squad: dict, factions: dict, soldiers: dict) -> str:
    """Best-effort mapping of a squad to a faction based on its members."""
    members = [str(s) for s in squad.get("OriginalUnits", [])]
    if not members:
        return None

    candidates = []
    for faction_id, faction in factions.items():
        available = set(faction_soldiers(faction))
        if all(member in available for member in members):
            overlap = len(set(members) & available)
            candidates.append((overlap, faction_id, faction))

    if not candidates:
        return None

    best = max(candidates, key=lambda c: (c[0], -int(c[1])))
    overlap, faction_id, faction = best

    if len(candidates) > 1:
        squad_name = squad.get("Name", "").lower()
        faction_name = faction.get("Name", "").lower()
        if squad_name and (squad_name in faction_name or faction_name in squad_name):
            return faction_id

    return faction_id


def weapon_section_lines(weapons: dict, item_table: dict) -> list[str]:
    """Renders the weapon catalog grouped by weapon type."""
    order = ["PISTOL", "SMG", "SHOTGUN", "RIFLE", "ASSAULTRIFLE", "MACHINEGUN", "LAUNCHER"]
    labels = {
        "PISTOL": "Pistols",
        "SMG": "Submachine Guns",
        "SHOTGUN": "Shotguns",
        "RIFLE": "Rifles",
        "ASSAULTRIFLE": "Assault Rifles",
        "MACHINEGUN": "Machine Guns",
        "LAUNCHER": "Launchers",
    }
    mode_labels = {0: "Semi", 1: "Burst", 2: "Auto"}
    lines = []
    for weapon_type in order:
        entries = [w for w in weapons.values() if w.get("WeaponType") == weapon_type]
        if not entries:
            continue
        entries.sort(key=lambda w: int(w["ID"]))
        lines.append(f"#### {labels[weapon_type]}")
        lines.append("")
        lines.append("| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |")
        lines.append("| --- | --- | --- | --- | --- | --- | --- |")
        for w in entries:
            modes = " / ".join(mode_labels.get(m, fmt(m)) for m in w.get("FiringMode", [])) or "-"
            attachments = resolve_list(item_table, w.get("Attachments", []))
            ammo = f"{w.get('AmmoName', '')} ({w.get('AmmoType', '')})"
            lines.append(
                f"| {w['ID']} | {w.get('Name', '')} | {fmt(w.get('Damage'))} | {fmt(w.get('MagSize'))} "
                f"| {ammo} | {modes} | {attachments} |"
            )
        lines.append("")
    return lines


def clothes_section_lines(clothes: dict, item_table: dict) -> list[str]:
    """Renders the clothing catalog grouped by equipment slot."""
    slot_order = ["HELMET", "SHIRT", "ARMOR", "PANTS", "MASK"]
    slot_label = {"HELMET": "Helmets", "SHIRT": "Shirts", "ARMOR": "Body Armor", "PANTS": "Pants", "MASK": "Masks"}
    lines = []
    for slot in slot_order:
        entries = []
        for item_id, item in item_table.items():
            if item.get("ItemType") == "CLOTHES" and item.get("SlotType") == slot:
                clothes_entry = clothes.get(item_id)
                if clothes_entry is not None:
                    entries.append((item_id, clothes_entry))
        if not entries:
            continue
        entries.sort(key=lambda e: int(e[0]))
        lines.append(f"#### {slot_label[slot]}")
        lines.append("")
        lines.append("| ID | Name | Armor | Camouflage |")
        lines.append("| --- | --- | --- | --- |")
        for item_id, c in entries:
            lines.append(
                f"| {item_id} | {c.get('Name', '')} | {fmt(c.get('ArmorValue'))} | {fmt(c.get('Camouflage'))} |"
            )
        lines.append("")
    return lines


def item_section_lines(items: dict) -> list[str]:
    """Renders the non-clothing item catalog (ammo, attachments, items, gifts, food)."""
    order = ["AMMO", "ATTACHMENT", "ITEM", "GIFT", "FOOD"]
    label = {"AMMO": "Ammunition & Explosives", "ATTACHMENT": "Attachments", "ITEM": "Equipment", "GIFT": "Gifts", "FOOD": "Food"}
    lines = []
    for item_type in order:
        entries = [i for i in items.values() if i.get("ItemType") == item_type]
        if not entries:
            continue
        entries.sort(key=lambda i: int(i["ID"]))
        lines.append(f"#### {label[item_type]}")
        lines.append("")
        lines.append("| ID | Name | Slot | Cost |")
        lines.append("| --- | --- | --- | --- |")
        for i in entries:
            lines.append(
                f"| {i['ID']} | {i.get('Name', '')} | {i.get('SlotType', '')} | {fmt(i.get('Cost'))} |"
            )
        lines.append("")
    return lines


def render_guide(tables: dict[str, dict]) -> str:
    """Renders the full guide document."""
    soldiers, weapons = tables["Soldier"], tables["Weapon"]
    clothes, items = tables["Clothes"], tables["Item"]
    factions, squads, heroes = tables["Faction"], tables["Squad"], tables["Hero"]

    lines = []
    lines.append("# Freeman: Guerrilla Warfare – Units & Equipment Guide")
    lines.append("")
    lines.append(
        "Automatically generated from the game data tables in "
        "`StreamingAssets/Native/Table`. Regenerate with "
        "`python tools/generate_units_guide.py`."
    )
    lines.append("")

    lines.append("## Overview")
    lines.append("")
    lines.append(f"- **Units:** {len(soldiers)}")
    lines.append(f"- **Factions:** {len(factions)}")
    lines.append(f"- **Predefined squads:** {len(squads)}")
    lines.append(f"- **Heroes:** {len(heroes)}")
    lines.append(f"- **Weapons:** {len(weapons)}")
    lines.append(f"- **Clothing:** {len(clothes)}")
    lines.append(f"- **Other items:** {len([i for i in items.values() if i.get('ItemType') != 'CLOTHES' and i.get('ItemType') != 'GUN'])}")
    lines.append("")
    lines.append("### Roles")
    lines.append("")
    lines.append("- **Assault (near)** – short-range fighters (shotguns, SMGs).")
    lines.append("- **Support (middle)** – all-purpose infantry.")
    lines.append("- **Sniper (far)** – long-range marksmen.")
    lines.append("")
    lines.append("### Weapon skills")
    lines.append("")
    lines.append("Every unit has a skill level per weapon category (`Skills` line). A higher")
    lines.append("skill lets the unit make full use of heavier weapons in that category:")
    lines.append("")
    lines.extend(f"- {legend}" for legend in SKILL_LEGEND)
    lines.append("")
    lines.append("### Loadout slots")
    lines.append("")
    lines.append(
        "The `Equipment` block lists every item the unit can spawn with. IDs in parentheses "
        "match the catalog appendix at the bottom of this document."
    )
    lines.append("")

    used_faction_soldiers = {}
    for faction_id in sorted(factions, key=int):
        used_faction_soldiers[faction_id] = faction_soldiers(factions[faction_id])

    lines.append("## Units by Faction")
    lines.append("")
    for faction_id in sorted(factions, key=int):
        faction = factions[faction_id]
        name = faction.get("Name", "")
        lines.append(f"### {name} (faction {faction_id})")
        lines.append("")
        lines.append(f"- **Relationship with player:** {fmt(faction.get('RelationshipWithPlayer'))}")
        lines.append(f"- **Enemy factions:** {faction.get('EnemyFactions', '-')}")
        lines.append(f"- **Init money:** {fmt(faction.get('InitMoney'))}")
        if faction.get("Description"):
            lines.append(f"- **Description:** {faction['Description']}")
        lines.append("")

        soldier_ids = used_faction_soldiers[faction_id]
        if soldier_ids:
            lines.append(f"**Units ({len(soldier_ids)}):**")
            lines.append("")
            for soldier_id in soldier_ids:
                lines.extend(soldier_profile(soldiers[soldier_id], weapons, clothes, items))
        else:
            lines.append("*No units defined in this faction's roster.*")
            lines.append("")

        faction_squads = [s for s in squads.values() if squad_faction(s, factions, soldiers) == faction_id]
        faction_squads.sort(key=lambda s: int(s["ID"]))
        if faction_squads:
            lines.append(f"**Squads ({len(faction_squads)}):**")
            lines.append("")
            lines.append("| Name | Composition |")
            lines.append("| --- | --- |")
            for squad in faction_squads:
                members = [soldiers.get(str(m), {}).get("Name", str(m)) for m in squad.get("OriginalUnits", [])]
                lines.append(f"| {squad.get('Name', '')} | {', '.join(members)} |")
            lines.append("")

    lines.append("## Special Units")
    lines.append("")
    for soldier_id in sorted(soldiers, key=int):
        if not factions_for_soldier(soldier_id, factions) and 1001 <= int(soldier_id) <= 1008:
            lines.extend(soldier_profile(soldiers[soldier_id], weapons, clothes, items))

    lines.append("## Trained Units")
    lines.append("")
    for soldier_id in [s for s in sorted(soldiers, key=int) if not factions_for_soldier(s, factions) and 801 <= int(s) <= 803]:
        lines.extend(soldier_profile(soldiers[soldier_id], weapons, clothes, items))

    other_ids = [
        s for s in sorted(soldiers, key=int)
        if not factions_for_soldier(s, factions)
        and not (1001 <= int(s) <= 1008)
        and not (801 <= int(s) <= 803)
        and int(s) < 10000
    ]
    if other_ids:
        lines.append("## Other Units")
        lines.append("")
        for soldier_id in other_ids:
            lines.extend(soldier_profile(soldiers[soldier_id], weapons, clothes, items))

    lines.append("## Heroes")
    lines.append("")
    hero_soldier_ids = [str(h["SoldierID"]) for h in heroes.values()]
    lines.append(f"{len(heroes)} recruitable characters. `Faction` is the faction they belong to (Independent = no faction).")
    lines.append("")
    lines.append("| Hero | Soldier ID | Faction | Leadership | Tactics | Medical | Financial | Governing | Navigation |")
    lines.append("| --- | --- | --- | --- | --- | --- | --- | --- | --- |")
    faction_names = {fid: factions[fid].get("Name", fid) for fid in factions}
    for hero_id in sorted(heroes, key=int):
        hero = heroes[hero_id]
        faction_id = fmt(hero.get("Faction"))
        faction_name = faction_names.get(faction_id, "Independent" if faction_id == "0" else faction_id)
        soldier_id = fmt(hero.get("SoldierID"))
        hero_name = soldiers.get(soldier_id, {}).get("Name", soldier_id)
        lines.append(
            f"| {hero_name} | {soldier_id} | {faction_name} "
            f"| {fmt(hero.get('Leadership'))} | {fmt(hero.get('Tactics'))} | {fmt(hero.get('Medical'))} "
            f"| {fmt(hero.get('Financial'))} | {fmt(hero.get('Governing'))} | {fmt(hero.get('NavigationSpeed'))} |"
        )
    lines.append("")
    lines.append("Full profiles for the hero soldier bodies (stats + equipment):")
    lines.append("")
    for soldier_id in hero_soldier_ids:
        if soldier_id in soldiers:
            lines.extend(soldier_profile(soldiers[soldier_id], weapons, clothes, items))

    lines.append("## Equipment Catalog")
    lines.append("")
    lines.append("### Weapons")
    lines.append("")
    lines.append("Fire modes: `Semi` = semi-automatic, `Burst` = burst fire, `Auto` = fully automatic.")
    lines.append("Ammo column shows the ammo type name and its catalog ID.")
    lines.append("")
    lines.extend(weapon_section_lines(weapons, items))
    lines.append("### Clothing")
    lines.append("")
    lines.extend(clothes_section_lines(clothes, items))
    lines.append("### Other Items")
    lines.append("")
    lines.extend(item_section_lines(items))

    return "\n".join(lines)


def main() -> None:
    if os.getcwd().endswith("tools"):
        os.chdir("..")

    tables_dir = DEFAULT_TABLES
    output_path = DEFAULT_OUTPUT

    args = sys.argv[1:]
    if "--tables" in args:
        tables_dir = Path(args[args.index("--tables") + 1])
    if "--output" in args:
        output_path = Path(args[args.index("--output") + 1])

    if not tables_dir.exists():
        logger.log(logger.LogLevel.ERROR, f"Tables directory not found: {tables_dir}")
        sys.exit(1)

    logger.log(logger.LogLevel.INFO, f"Reading tables from {tables_dir}")
    tables = load_tables(tables_dir)

    logger.log(logger.LogLevel.INFO, "Rendering guide")
    document = render_guide(tables)

    output_path.parent.mkdir(parents=True, exist_ok=True)
    with open(output_path, "w", encoding="utf-8") as f:
        f.write(document)
        f.write("\n")
    logger.log(logger.LogLevel.INFO, f"Guide written to {output_path}")


if __name__ == "__main__":
    main()
