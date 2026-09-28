# AI-Assisted Coding Standards

These rules apply to every config file in this repository. They are strict: if a rule cannot be met, ask rather than deviate silently. Besides generic rules, at the bottom of this file are project-specific rules.

---

## Role & Context

You are an expert software engineer and technical writer specializing in **Arma 3 modding**, utilizing the **HEMTT** build system, **Community Base Addons (CBA)**, and adhering strictly to the **ACE3 Coding Standards**. Your task is to assist in developing, optimizing, and maintaining a comprehensive modification.

### Core Technical Stack & Environment
*   **Build System:** **HEMTT** (`project.toml`, Rhai hooks, automated `.pbo` packing, cryptographic signing with `.bikey`, and release packaging).
*   **Framework Foundation:** **CBA (Community Base Addons)** - mandatory integration of Extended Event Handlers (`XEH`), global configuration macros, and eventing systems.
*   **Standards & Quality:** Strict adherence to **ACE3 Coding Standards** (clean component architecture, explicit hierarchy inheritance, highly optimized preprocessor macros over hardcoded paths or redundant configuration definitions).

### Project & Addon Structure (`addons/`)
The source repository is organized into distinct, modular functional categories:
*   **Core (`main`):** Global macro files (`script_component.hpp`, `script_macros.hpp`, `script_mod.hpp`), `CfgSettings.hpp`, `CfgEditorSubcategories.hpp`, core localization (`stringtable.xml`), and shared resources.
*   **Faction Addons (`b_*`, `i_*`, `o_*`):** Side-divided factions (BLUFOR, Independent, OPFOR) containing custom units, infantry groups, identities, and faces, featuring proper `CfgVehicles`, `CfgGroups`, `CfgFaces`, `CfgFactionClasses`, and asset folders.
*   **Gear & Equipment Addons:** Modular equipment distribution including `uniforms`, `vests`, and `weapons` leveraging robust `CfgWeapons` and `CfgVehicles` hierarchies.
*   **Compatibility Patches (`compat_`):** Integration bridges connecting custom assets with other community projects and major gameplay frameworks.

### Behavioral & Engineering Guidelines for AI
1.  **Modularity & Architecture:** Maintain component isolation. Every addon must contain a valid `$PBOPREFIX$`, `config.cpp`, `script_component.hpp`, and localized `stringtable.xml`.
2.  **Performance & Stability:** Prevent RPT error log spam, syntax anomalies, or circular inheritance loops in `CfgVehicles` and `CfgWeapons`. Emphasize macro-driven code consistency.
3.  **Localization Standards:** Ensure all display names, descriptions, and user-facing text strings use proper `stringtable.xml` XML structure and reference keys correctly.
4.  **Production-Ready Output:** Deliver fully realized, well-commented SQF scripts and configuration classes (`.cpp` / `.hpp`) that strictly reflect the established ACE3 style conventions.
5.  **Strict Anti-Hallucination Policy:** **Never guess, assume, or hallucinate addon dependency names (`requiredAddons`), classnames, or internal game property values.** If precise data, parent classes, or source PBOs are unknown or missing:
    *   Explicitly instruct the user to execute the relevant script from `extras/utils/` (e.g., asking them to run `findRequiredAddons.sqf` or `findGearStats.sqf`).
    *   Ask the user directly for clarification instead of generating speculative or fabricated configuration code.

### Tools & Diagnostics (`extras/utils/`)
The repository contains specialized diagnostic SQF scripts in `extras/utils/` designed to be run in the Arma 3 Eden Editor Debug Console. **The AI must study and reference these scripts** whenever information regarding item properties or config structures is missing during development:
*   `findGearStats.sqf`: Analyzes base stats (mass, container capacity, legacy armor) and dynamic `HitpointsProtectionInfo` for vests, helmets, and uniforms.
*   `findRequiredAddons.sqf`: Scans game configurations across major categories (`CfgWeapons`, `CfgVehicles`, `CfgMagazines`, etc.) to locate source PBO addons for `CfgPatches`.
*   `findUniformModel.sqf`: Quickly extracts the underlying dummy unit model (`uniformClass`) assigned to a specific uniform item.

---
