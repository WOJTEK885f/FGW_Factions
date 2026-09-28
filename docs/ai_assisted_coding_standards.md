# Coding Standards

These rules apply to every config file in this repository. They are strict: if a rule cannot be
met, ask rather than deviate silently.

This document is mod-independent. Placeholders used in examples:

| Placeholder | Meaning |
| --- | --- |
| `my_mod_main` | Your mod's core PBO (macros, CBA glue) |
| `MyMod_Base` | Your mod's shared faction base class |
| `MOD_` | Your mod's class prefix |
| `SomeAddon` | Any other addon folder in the project |

---

## 1. Project structure

- One PBO for core macros, CBA glue and shared definitions. Referenced first by everything else.
- One PBO per faction. A faction PBO never depends on another faction PBO.
- Separate PBOs for shared gear: uniforms, vests, weapons.
- Tools and diagnostic scripts live outside the PBOs, in the project's tools directory.
- Start every new addon from `extras/faction_addon_template`. Do not hand-roll a PBO layout.

---

## 2. `requiredAddons[]`

### 2.1 Block order

List entries in three blocks, in this order. Do **not** separate blocks with blank lines and do
**not** insert label comments — order alone carries the grouping.

1. **Core & Base** — the framework addon, your core PBO, your own gear addons, and base data for
   characters, faces and voices.
2. **Main Content** — one run per mod. A run is every PBO from the same mod, kept contiguous.
   Addons from the same vendor that ship as separate mods stay in separate runs: `CUP_Creatures_*`
   (units) and `CUP_Weapons_*` (weapons) are two different mods and must never be merged or
   interleaved into one run.
3. **Additional / Gap Fillers** — everything that fills a gap rather than defining the addon.

Watch the naming trap: a PBO is classified by **which mod ships it**, not by how its name reads.
CUP's dubbing addons are named `CUP_Dubbing_Radio_<LANG>_c` and ship with **CUP Units**, so they
belong in the `CUP_Creatures_*` run — not alongside the vanilla `A3_Dubbing_*` base data in Core &
Base, which their names suggest. Each language is a separate PBO: `CUP_Dubbing_Radio_RU_c` owns
`CUP_D_Language_RU`, `CUP_Dubbing_Radio_TK_c` owns `CUP_D_Language_TK`.

```cpp
requiredAddons[] = {
    "cba_main",
    "my_mod_main",
    "my_mod_uniforms",              // Ranger: MOD_U_Rifleman, Sniper: MOD_U_Reserve
    "A3_Characters_F",              // Base class (O_Soldier_F)
    "A3_Characters_F_Enoch",        // Vitaly: WhiteHead_01, Sniper: WhiteHead_04
    "A3_Dubbing_Radio_F_Enoch",     // Vitaly, Sniper: Male02RUS, Officer: Male03RUS
    "A3_Weapons_F",                 // Base: ItemCore, ItemInfo
    "CUP_Creatures_Military_PMC",   // Ranger: CUP_V_PMC_IOTV_Black_Empty
    "CUP_Creatures_Military_Russia",// Machinegunner: CUP_H_RUS_Altyn_Shield_Up_black
    "CUP_Dubbing_Radio_RU_c",      // Base: CUP_D_Language_RU
    "CUP_Weapons_M4",               // Ranger: CUP_arifle_M4A1_black, Sniper: CUP_arifle_M16A4_Base
    "CUP_Weapons_Ammunition",       // All units - Ammo
    "cfp_uniforms",                 // All units - Uniform
    "rhs_main",                     // Sniper: rhs_weap_panzerfaust60
    "USP_Gear_Face"                 // Sniper: USP_BEARD_BRN5
};
```

### 2.2 Ordering inside a block

- Your core PBO always comes first.
- Everything else is alphabetical within its run.
- A mod that provides a prerequisite is listed before the mod that consumes it.
- Never list the addon's own PBO.

### 2.3 Comments

- **Never comment** the framework addon or your own core PBO. Their presence is obvious.
- Name the specific class that caused the dependency, always.
- If the class is used by exactly one unit or a specific part of the mod, name that part before a
  colon: `// Ranger: CUP_arifle_M4A1_black`.
- If several parts share it, list them: `// Ranger, Sniper: CUP_NVG_PVS7`.
- If the set is exhaustive and long, collapse it to prose instead of listing every class:
  `// All units - Ammo`.
- Do **not** use the `All units - ` form for base-data addons. Say what they provide instead:
  `// Base class (O_Soldier_F)`, `// LanguageRUS; Vitaly: Male02RUS`.
- Your **own gear addons** are the opposite case: always list the classes they provide, because they
  exist only to be consumed by name — attribute them like any other class:
  `// Ranger: MOD_U_Rifleman, Sniper: MOD_U_Reserve`.

### 2.4 Never guess a dependency

This is the rule that matters most.

- Never add a PBO to `requiredAddons[]` because it looks like it should be there, because the class
  name is a prefix of another you already have, or because a similar mod needed it.
- Never add a classname to a comment you have not read in this addon.
- Derive a comment by reading every file in the addon, not just `CfgVehicles.hpp`. The easiest
  things to miss are class **inheritance parents** (`class MyFace: WhiteHead_04`) and the
  `face` / `glasses` / `speaker` fields in `CfgIdentities` and `CfgFaces`. A comment that names
  one unit for a head or a voice that actually belongs to another is worse than no comment.
- Derive the owning PBO from the **first** `configSourceAddonList` entry for the class. Not the
  highest version, not the alphabetically first, not the one whose name matches the class prefix.
- Verify with the diagnostic scripts in `extras/utils` before writing the line.
- If ownership is unknown, stop and ask. An unverified guess is a bug.

---

## 3. Faction config

### 3.1 Shared base class

- Every faction defines one base class that all its units inherit from.
- Put identity, faces, voices, macros and shared properties on the base class only.
- Keep `scope = 0` / `scopeCurator = 0` on the base class so it never appears in the editor.
- Child classes set `_generalMacro` to their own class name.

### 3.2 Localization

- Every user-visible string goes in `stringtable.xml`.
- Key format: `STR_<MODPREFIX>_<Addon>_<Key>`.
- Reference keys through the CBA string macros, never inline English text.
- Use `ECSTRING` when the string belongs to another addon; `CSTRING` for the current one.

### 3.3 Randomization

- Randomization runs in the unit's own `init`, never in the shared base class.
- Every `init` is guarded by a local check so it runs once, on the machine that owns the unit:

```cpp
init = "if (local (_this select 0)) then { (_this select 0) setUniform ...; }";
```

- Without the guard the code also runs on remote machines, so the roll is discarded and the unit
  gets a different loadout than what was rolled.

### 3.4 Unit map icons

- Set `icon` explicitly on every unit class. Do not rely on the engine default.
- Use the correct Arma token for the role: machine gunner, rifleman, officer, and so on.

### 3.5 Tactical group icons

- Group icons use the NATO marker path with the correct side prefix: `b_`, `o_` or `i_`.
- Example: `\A3\ui_f\data\map\markers\nato\o_inf.paa`.
- Match the icon to the group's role: infantry, recon, support.

### 3.6 Editor subcategory

- Every unit sets `editorSubcategory`.
- Use a category already defined in the core PBO. The template shows the standard personnel one.
- Never invent a subcategory name inline — if the mod needs a new one, add it to the core PBO
  first, then reference it.

---

## 4. Working from the template

`extras/faction_addon_template` is the reference implementation. It demonstrates, in a working
example:

- the PBO layout and `requiredAddons[]` block order
- the shared base class with identity, faces and voices
- `editorSubcategory` on the base class
- a `local`-guarded `init` randomization
- an explicit unit map `icon`

Copy the pattern, substitute your own prefixes and class names, and delete anything the addon does
not use.

---

## 5. Validation

Run all of these before committing:

```bash
python tools/config_style_checker.py
python tools/registration_validator.py
python tools/stringtable_validator.py
hemtt check --error-on-all --pedantic
git diff --check
```

- Config files are CRLF, UTF-8 without BOM.
- A `hemtt` run must exit 0. Warnings about missing editor previews are known and unrelated.
