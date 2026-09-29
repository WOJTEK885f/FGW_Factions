# AI-Assisted Coding Standards

Freeman: Guerrilla Warfare Factions is an Arma 3 mod that brings the factions of Freeman: Guerrilla Warfare game into Arma, providing a range of military, paramilitary, and rebel forces from the fictional world of Cherniv. It tries to recreate all units with game-accurate gear, custom character identities and various other features. It's built based on data extracted from F:GW game files, together with robust documentation of original units and factions.

---

## Role & Context

You are an expert software engineer and technical writer specializing in **Arma 3 modding**, utilizing the **HEMTT** build system, **Community Base Addons (CBA)**, and adhering strictly to the **ACE3 Coding Standards**. Your task is to assist in developing, optimizing, and maintaining a comprehensive modification.

### Core Technical Stack & Environment

* **Build System:** **HEMTT** (`project.toml`, Rhai hooks, automated `.pbo` packing, cryptographic signing with `.bikey`, and release packaging).
* **Framework Foundation:** **CBA (Community Base Addons)** - mandatory integration of Extended Event Handlers (`XEH`), global configuration macros, and eventing systems.
* **Standards & Quality:** Strict adherence to **ACE3 Coding Standards** (clean component architecture, explicit hierarchy inheritance, highly optimized preprocessor macros over hardcoded paths or redundant configuration definitions).

### Project & Addon Structure (`addons/`)

The source repository is organized into distinct, modular functional categories:

* **Core (`main`):** Global macro files (`script_component.hpp`, `script_macros.hpp`, `script_mod.hpp`), `CfgSettings.hpp`, `CfgEditorSubcategories.hpp`, core localization (`stringtable.xml`), and shared resources.
* **Faction Addons (`b_*`, `i_*`, `o_*`):** Side-divided factions (BLUFOR, Independent, OPFOR) containing custom units, infantry groups, identities, and faces, featuring proper `CfgVehicles`, `CfgGroups`, `CfgFaces`, `CfgFactionClasses`, and asset folders.
* **Gear & Equipment Addons:** Modular equipment distribution including `uniforms`, `vests`, and `weapons` leveraging robust `CfgWeapons` and `CfgVehicles` hierarchies.
* **Compatibility Patches (`compat_`):** Integration bridges connecting custom assets with other community projects and major gameplay frameworks.

### Behavioral & Engineering Guidelines for AI

1. **Modularity & Architecture:** Maintain component isolation. Every addon must contain a valid `$PBOPREFIX$`, `config.cpp`, `script_component.hpp`, and localized `stringtable.xml`.
2. **Performance & Stability:** Prevent RPT error log spam, syntax anomalies, or circular inheritance loops in `CfgVehicles` and `CfgWeapons`. Emphasize macro-driven code consistency.
3. **Localization Standards:** Ensure all display names, descriptions, and user-facing text strings use proper `stringtable.xml` XML structure and reference keys correctly.
4. **Production-Ready Output:** Deliver fully realized, well-commented SQF scripts and configuration classes (`.cpp` / `.hpp`) that strictly reflect the established ACE3 style conventions.
5. **Strict Anti-Hallucination Policy:** **Never guess, assume, or hallucinate addon dependency names (`requiredAddons`), classnames, or internal game property values.** If precise data, parent classes, or source PBOs are unknown or missing:
    * Explicitly instruct the user to execute the relevant script from `extras/utils/` (e.g., asking them to run `findRequiredAddons.sqf` or `findGearStats.sqf`).
    * Ask the user directly for clarification instead of generating speculative or fabricated configuration code.

### Tools & Diagnostics (`extras/utils/`)

The repository contains specialized diagnostic SQF scripts in `extras/utils/` designed to be run in the Arma 3 Eden Editor Debug Console. **The AI must study and reference these scripts** whenever information regarding item properties or config structures is missing during development:

* `findGearStats.sqf`: Analyzes base stats (mass, container capacity, legacy armor) and dynamic `HitpointsProtectionInfo` for vests, helmets, and uniforms.
* `findRequiredAddons.sqf`: Scans game configurations across major categories (`CfgWeapons`, `CfgVehicles`, `CfgMagazines`, etc.) to locate source PBO addons for `CfgPatches`.
* `findUniformModel.sqf`: Quickly extracts the underlying dummy unit model (`uniformClass`) assigned to a specific uniform item.

---

## Coding Guidelines

These rules apply to every config file in this repository. They are strict: if a rule cannot be met, ask rather than deviate silently. Besides generic rules, at the bottom of this file are project-specific rules.

### 1. `requiredAddons[]`

The `requiredAddons[]` array must be kept deterministic, readable, and grouped by dependency and content purpose. Its order should make the dependency structure and the reason for each external addon immediately apparent to a human reader.

#### 1.1. Addon blocks

`requiredAddons[]` must be organized into the following logical blocks, in this order:

1. **Framework and project foundation** - CBA and the project's own main addon form a **single foundation block**.
2. **Project addons and Arma 3 base-game addons** - All dependencies on the project's own addons and on vanilla Arma 3 addons belong to a **single block**.
3. **Main content addons** - Each major external mod must have its **own, separate block** and must never be merged with another mod. These are addons that provide a substantial part of the content represented by the current project.
4. **Additional / gap-filler addons** - All secondary or gap-filler dependencies belong to a **single shared block**. These are addons that supplement the main content but do not constitute one of the project's primary content sources.

#### 1.2. Inter-mod ordering

The order of main-content blocks as well as additional-content sections must follow dependency relationships. A mod that extends, patches, or otherwise relies on another mod must appear after that mod. Where no dependency relationship exists, order the mods alphabetically.

> For example, if `CFP` extends `CUP` content, `CUP` must appear before `CFP`.

The same principle applies at every level:

* main-content blocks,
* additional mod groups,
* addons within an additional mod group.

#### 1.3. Intra-block ordering

Within `Additional / gap-filler addons blocks`, addons must be **grouped by mod** (in other blocks it's done by default). For each mod group:

1. The mod's core/base/main addon must appear first.
2. Any remaining addons from that mod must follow in alphabetical order.

Do not split addons belonging to the same mod into multiple unrelated sections within the additional-addons block.

#### 1.4. Comments and content descriptions

Comments inside `requiredAddons[]` describe **what content from the dependency is actually used**. They should progress from the most general information to the most specific.
The framework addon and the project's own core PBO must never be commented. Their presence is self-evident.

> When a dependency provides both shared infrastructure and specific assets, list the shared or general content first and the individual assets afterwards.

1. Content associated with a specific part of the project

    When the dependency is used specifically by a unit, faction, role, or other identifiable part of the project, prefix the content description with that identifier followed by a colon.

    ```cpp
    // Rifleman: M4A1
    ```

2. Classname notation

   Always name the specific classname that caused the dependency when it is known. When a human-readable description is also useful, place the classname in parentheses immediately after it.

    ```cpp
    // Rifleman: M4A1 (CUP_arifle_M4A3_black)
    ```

    For multiple specific classnames belonging to the same logical item group:

    ```cpp
    // Squad Leader, Rifleman: Uniforms (CUP_U_B_USMC_MCCUU_MARPAT_M81, CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2)
    ```

3. Separating multiple pieces of content within a single comment

    * use a **comma** to separate individual items belonging to the same logical group
    * use a **semicolon** to separate distinct groups of items or different consumers

    Keep related items together and introduce a new semicolon-separated group only when the consumer or logical category changes.

    ```cpp
    // Sniper: Uniform, Hat; Soldier: Helmet
    ```

4. Widely shared content

    When a large, common set of content is used by most of the addon's units, it may be collapsed into the form:

    ```cpp
    // Multiple units - Ammo
    // Multiple units - Uniforms
    ```

    This is an accepted approximation. It is not necessary for every unit to be named when a dependency is broadly shared, even if a minority of units does not use that content. Otherwise, name the individual consumers explicitly, as shown before.

5. Base-data dependencies

    For base data, describe the provided class or shared definition rather than pretending it is an item directly consumed by individual units.

   ```cpp
    // Base unit class (O_Soldier_F)
    // Base identity class: Language (LanguageRUS_F)
    ```

#### 1.5. Comment indentation

Comments must be vertically aligned within each block of `requiredAddons[]`.

For each block independently, determine the **longest addon entry in that block** and place the comment delimiter (`//`) **exactly one space after the end of that entry**. All other entries in the same block must be padded with spaces so that their comments start at the same column.

#### 1.6. Addon classification

Addon classification is based on **which mod ships the PBO**, not on what the PBO name appears to represent. The exact addon names and classnames must always be verified from the actual game/mod configuration. Never invent or infer `requiredAddons` entries when their precise names are unknown. Refer to `Role & Context` > `Tools & Diagnostics` section of this document.

---

## Project-Specific: Freeman: Guerrilla Warfare Factions

### 1. `requiredAddons[]` classification

The table below defines how external and project-owned PBOs are classified when building `requiredAddons[]`. This classification determines the block in which an addon belongs, the ordering rules that apply to it, and how dependencies between mods are represented.

**Addon classification is based on the mod that ships the PBO, not on the apparent purpose suggested by its name.** Prefixes are provided as a practical way to identify the most common PBOs belonging to each mod, but they must not be treated as a substitute for verifying the actual source configuration, as they are **not** classname prefixes, even if some classnames use the same prefix.

| Mod                    | Type                              | Addon Name Prefixes              | Extends |
|------------------------|-----------------------------------|----------------------------------|---------|
| CBA3                   | Framework addon                   | `cba_`                           | -       |
| F:GW Factions          | Own mod                           | `gr7bow_fgwf_`                   | -       |
| CUP Units              | Main external content             | `CUP_Creatures_`, `CUP_Dubbing_` | -       |
| CUP Weapons            | Main external content             | `CUP_Weapons_`                   | -       |
| CFP                    | Main external content             | `cfp_`, `CFP_`                   | CUP     |
| USP                    | Additional / gap-filler           | `USP_`                           | -       |
| RHS                    | Additional / gap-filler           | `rhs_`, `rhsusf_`, `rhsgref_`    | -       |
| The Free World Armoury | Additional / gap-filler, Optional | `sp_fwa_`                        | -       |
| Fifty Shades of Female | Additional / gap-filler, Optional | `zee_`                           | -       |

#### Optional dependencies

Mods marked **Optional** are not assumed to be universally required by the project. They should only be added to `requiredAddons[]` when the current config actually consumes content from that mod. This is usually true for compatibility addons, that override other FGWF addons' configs if the optional mod is loaded.
