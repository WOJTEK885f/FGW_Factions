# Coding Conventions

Conventions for this project, written for human coders and coding agents alike.
They describe the *expected* shape of our config, not a style we enforce with a
linter. Where a convention has a good reason behind it, the reason is given, so
you can tell the difference between a rule worth following and a habit worth
breaking when you have a real reason.

Anything that is genuinely project-specific lives in
[Project-specific conventions](#project-specific-conventions) at the end. The
rest of this document is written to be portable to any Arma 3 mod project.

---

## `requiredAddons[]`

### What earns an entry

Declare a PBO if, and only if, some class in this addon **inherits from or
references** a class that PBO owns.

Two consequences people get wrong:

- **It is not only about units.** `addons/vests/config.cpp` declares
  `A3_Weapons_F` because `CfgWeapons.hpp` inherits `class VestItem`, and
  `A3_Characters_F` because the vest sets `containerClass = "Supply80"`. Neither
  is a unit.
- **Unused dependencies are noise.** `addons/compat_fwa/config.cpp` references no
  vanilla A3 class, so it declares no A3 entry. A declared-but-unused PBO still
  forces a load-order dependency for everyone who installs us.

### Direct versus transitive dependencies

Declare a mod's *core* PBO (`rhs_main`, `cba_main`, …) only when you reference
one of **its own** classes. If you only use an extension (`rhsgref_c_weapons`),
you do not need `rhs_main`: Arma resolves that PBO's own `requiredAddons` for
you, transitively, at load time.

This is why `i_fca`, `o_alpha` and `o_uman` list `rhsgref_c_troops` without
`rhs_main`, while `b_player` and `vests` do list it — the latter two reference
`rhs_main` classes directly.

### Block structure

Entries are grouped into four blocks, in this order. **Blocks are optional** —
an addon that uses no main-content mod simply has no main-content block.

| # | Block | Contains | Commented? |
|---|-------|----------|-----------|
| 1 | bootstrap | framework + our own core (`cba_main`, `gr7bow_fgwf_main`) | no |
| 2 | own mod and base game | our other addons, then base-game addons | yes |
| 3 | main content | one block **per contributing mod** | yes |
| 4 | additional | gap-filling mods, all in a single block | yes |

Block 1 is never commented. `cba_main` and our own `*_main` are load-order
scaffolding; a comment saying "CBA" or "main" tells a reader nothing.

Block 3 exists because a project usually has a few mods that supply the bulk of
the content — the units, the clothing, the weapons — and a tail of mods that
only fill gaps. See
[the role table](#mod-roles-in-this-repository) for how this project draws that
line. One block per mod in block 3, because a mod's addons belong together and
its name is the only useful label.

### Separators

Arma's config parser rejects blank lines inside an `[] = { }` array, so blocks
are separated by a label comment instead:

```cpp
requiredAddons[] = {
    "cba_main",
    "gr7bow_fgwf_main",
    // own mod and base game
    "gr7bow_fgwf_uniforms",  // FGWF_U_Marshal
    "A3_Characters_F",       // B_Soldier_F, Man_A3
    "A3_Weapons_F",          // Standard kit, SmokeShell
    // main content: CUP units
    "CUP_Creatures_Military_PMC", // PMC uniforms
    // main content: CUP weapons
    "CUP_Weapons_WeaponsCore", // Shared base classes, M4A1
    "CUP_Weapons_AWM",          // AWM, G22
    // main content: CFP
    "cfp_vests", // CFP_Tactical1_M81
    // additional mods
    "rhs_main", // Vydra-3M vest
    "USP_Gear_Face" // FM-12 gas mask
};
```

### Ordering inside a block

1. **Core PBO first.** The PBO a mod's other addons build on comes before them:
   `CUP_Weapons_WeaponsCore` before `CUP_Weapons_AWM`, `rhs_main` before
   `rhsgref_c_*`.
2. **Then by dependency.** A mod built on another mod comes after it. CFP
   extends CUP, so the CFP block follows the CUP blocks. The same rule inside a
   block: `A3_Characters_F_Enoch` follows `A3_Characters_F`.
3. **Then alphabetically**, case-insensitive.

Block 4 additionally **groups by mod**, so all RHS entries sit together before
all USP entries.

### Alignment

**One comment column per block**, set to the block's longest entry plus one
space. Block 3 gets one column *per mod block*.

The column deliberately restarts at every block, producing a staircase:

```cpp
    "gr7bow_fgwf_uniforms",   // FGWF_U_Marshal
    "A3_Characters_F_Enoch",  // Head_Russian, RussianMen
    "CUP_Creatures_Military_USMC",    // Interceptor vest
    "CUP_Weapons_WeaponsCore",        // M14, SVD
    "rhs_main",         // Vydra-3M vest
    "USP_Gear_Body",    // Rugby G3C
```

Do not pad the whole array to a single column — with 27 entries in one column
the comments would start halfway across the file. Do not align to the
shortest entry either.

The last entry carries no trailing comma. Nothing else in the array omits one.

### Comment grammar

A comment exists to answer one question: **why is this PBO required?** It should
name what we actually consume, not what the PBO happens to contain.

**General before specific.** If an addon gives us both shared scaffolding and
named items, the general part comes first:

```cpp
"CUP_Weapons_WeaponsCore", // Shared base classes, M4A1, M9A1, Stanag magazines
```

**Attribute to a unit when only some units use it.** Prefix with a colon:

```cpp
"cfp_headgear", // Commando: M4A1 helmet
```

If every unit in the addon uses it, say so rather than listing them all:

```cpp
"cfp_vests", // All units: tactical vest
```

**Group with semicolons, list with commas.** A comma separates items; a
semicolon separates per-unit groups:

```cpp
"CUP_Creatures_Military_USMC", // Sniper: Uniform, Hat, G22; Soldier: Helmet, M4
```

**Parentheses are for config class names only** — never for unit names. When a
class name genuinely clarifies an item, put it after the wording:

```cpp
"CUP_Weapons_WeaponsCore", // Shared base classes, M4A1 (CUP_arifle_M4A3_black)
"USP_Gear_Body",            // Rugby G3C (USP_RUGBY_G3C_RGR_AOR1, USP_RUGBY_G3C_RGR_AOR2)
```

A bare class name is fine when it is self-describing and there is nothing more
general to say:

```cpp
"cfp_headgear", // CFP_BoonieHat_M81, SP_Bandana_Black
```

**Base-game entries are always commented.** They are the least obvious
dependencies, because a reader does not think of `A3_Weapons_F` when they
change a vest.

---

## Project-specific conventions

Everything above is portable. This section is not.

### Mod roles in this repository

| Mod family | Block | Addons we use | Why this role |
|---|---|---|---|
| CBA | bootstrap | `cba_main` | Framework; always required. |
| F:GW Factions | own mod and base game | `gr7bow_fgwf_*` | Our own content. |
| Arma 3 | own mod and base game | `A3_Characters_F`, `A3_Characters_F_Enoch`, `A3_Weapons_F` | Base game, ships with Arma. |
| CUP | main content | `CUP_Creatures_Military_*`, `CUP_Creatures_People_*`, `CUP_Weapons_*` | Supplies the units, clothing and weapons the factions are built from. |
| CFP | main content | `cfp_glasses`, `cfp_headgear`, `cfp_uniforms`, `cfp_vests` | Core gear the units wear; extends CUP, so it follows it. |
| RHS | additional | `rhs_main`, `rhsgref_c_troops`, `rhsgref_c_weapons` | Gap filler: a handful of helmets, a vest, the M590 and M3A1. |
| USP | additional | `USP_Gear_Body`, `USP_Gear_Face` | Gap filler: G3C uniforms and face items. |
| F:GW Factions (compat) | additional | `zee_FiftyShadesOfFemale`, `sp_fwa_thompson` | Only used by `compat_fsof` / `compat_fwa`. |

`CUP_Creatures_Military_Germany` was removed from `b_player_loreacc` and
`o_alpha_loreacc`: no `CUP_*_GER_*` class is referenced anywhere in the project,
and the vests that comments had attributed to it are `CUP_V_PMC_IOTV_Black_Empty`
and `CUP_V_B_JPC_Black_Light`, which belong to `CUP_Creatures_Military_PMC` and
`CUP_Creatures_Military_USMC` respectively.

### Verifying a class's owning PBO

The engine will not tell you which PBO a class came from. In order of
reliability:

1. **Read the config.** Grep the addon for the class name and confirm it is
   actually used. This is what catches unused dependencies, and it is the step
   people skip.
2. **Infer from the naming scheme.** CUP encodes the owning addon in the class
   name: `CUP_V_PMC_*` → `CUP_Creatures_Military_PMC`, `CUP_V_B_Interceptor_*` →
   `CUP_Creatures_Military_USMC`, `CUP_V_C_*` → `CUP_Creatures_People_Civil_Chernarus`.
   Inference is good but not proof.
3. **Open the PBO.** Only definitive, and only possible with the mod installed.

If a comment is a guess, treat it as a bug in the comment. Say less rather than
something wrong — `// Interceptor vest` is fine; an invented attribution is not.

---

## Other topics

<!-- Reserved for future conventions: class naming, include order, Cfg file
     layout, stringtable keys, macro usage. -->
