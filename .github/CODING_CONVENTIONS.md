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
- **Boilerplate is not a dependency.** `FirstAidKit`, `ItemMap`, `ItemCompass`,
  `ItemRadio`, `ItemWatch`, `SmokeShell`, `Binocular`, `Put` and `Throw` are
  inherited by every unit in the game, so an addon that only carries them still
  needs no `A3_Weapons_F` entry. The same goes for identity types such as
  `CivWomen`, `NATOMen`, `RussianMen`, `RussianWomen`, `TakistaniMen` and
  `Ioannou`: they are declared by no single PBO we can name, so leave them out
  rather than guessing an owner.
- **The exception proves the rule.** `SMG_01_F` and `srifle_EBR_F` are also
  inherited everywhere, but each one lives in exactly one PBO
  (`A3_Weapons_F_SMGs_SMG_01` and `A3_Weapons_F_LongRangeRifles_EBR`). Where a
  boilerplate class has a single unambiguous home, declare that PBO; where it
  does not, say nothing.

### Direct versus transitive dependencies

Declare a mod's *core* PBO (`rhs_main`, `CUP_Weapons_WeaponsCore`, `cba_main`, …)
only when you reference one of **its own** classes. If you only use an extension
(`rhsgref_c_weapons`, `CUP_Weapons_M4`), you do not need the core: Arma resolves
that PBO's own `requiredAddons` for you, transitively, at load time.

This is why `vests` lists `rhs_c_troops` without `rhs_main` — it uses
`rhs_vydra_3m`, and the core would add nothing. The same rule removed
`CUP_Weapons_WeaponsCore` from every addon in the project: no config inherits
from a class it alone declares, and every weapon or magazine we use belongs to a
specific `CUP_Weapons_*` addon.

### Block structure

Entries are grouped into four blocks, in this order. **Blocks are optional** —
an addon that uses no main-content mod simply has no main-content block.

| # | Block | Contains | Commented? |
|---|-------|----------|-----------|
| 1 | bootstrap | framework + our own core (`cba_main`, `gr7bow_fgwf_main`) | no |
| 2 | own mod and base game | our other addons, then base-game addons | yes |
| 3 | main content | one block **per contributing mod** | yes |
| 4 | additional | gap-filling mods | yes |

Block 1 is never commented. `cba_main` and our own `*_main` are load-order
scaffolding; a comment saying "CBA" or "main" tells a reader nothing.

Block 3 exists because a project usually has a few mods that supply the bulk of
the content — the units, the clothing, the weapons — and a tail of mods that
only fill gaps. See
[the role table](#mod-roles-in-this-repository) for how this project draws that
line. One block per mod in block 3, because a mod's addons belong together.

Blocks are not marked; their boundaries are visible in the staircase of the
comment column. Each block's column restarts, so the shift in comment position
*is* the separator.

### No separators

Blocks are separated by **ordering, not by a comment**. No `// own mod`, no
`// main content`, no blank-line label. The PBO name in the entry already says
which mod it belongs to, so a label comment only repeats it, and Arma's config
parser rejects blank lines inside an `[] = { }` array anyway.

```cpp
requiredAddons[] = {
    "cba_main",
    "gr7bow_fgwf_main",
    "gr7bow_fgwf_uniforms",  // FGWF_U_Marshal, FGWF_U_PMC_Unit_1
    "A3_Characters_F",       // B_Soldier_F, Head_Euro
    "CUP_Creatures_Military_USMC",   // CUP_U_B_USMC_MCCUU_MARPAT_M81
    "CUP_Weapons_M4",                // CUP_arifle_M4A1_black
    "cfp_vests",                     // CFP_Tactical1_M81
    "rhs_c_troops",                  // rhs_vydra_3m
    "USP_Gear_Face"                  // USP_SOTR
};
```

### Ordering inside a block

1. **Then by dependency.** A mod built on another mod comes after it. CFP
   extends CUP, so the CFP block follows the CUP blocks. The same rule inside a
   block: `A3_Characters_F_Enoch` follows `A3_Characters_F`.
2. **Then alphabetically**, case-insensitive.

Block 4 additionally **groups by mod**, so all RHS entries sit together before
all USP entries.

### Alignment

**One comment column per block**, set to the block's longest entry plus one
space. Block 3 gets one column *per mod*.

The column deliberately restarts at every block, producing a staircase:

```cpp
    "gr7bow_fgwf_uniforms",  // FGWF_U_Marshal
    "A3_Characters_F_Enoch", // Head_Russian, WhiteHead_31
    "CUP_Creatures_Military_USMC",  // Interceptor vest
    "CUP_Weapons_AWM",              // AWM, G22
    "cfp_vests",                    // CFP_Tactical1_M81
    "rhs_c_troops",                 // Vydra-3M vest
    "USP_Gear_Body",                // Rugby G3C
```

Do not pad the whole array to a single column — with 27 entries in one column
the comments would start halfway across the file. Do not align to the
shortest entry either.

### One line per entry

A class list is always a single-line `//` comment, however long it gets. A
`requiredAddons[]` element has to be one quoted string, so a list split across
lines is not a comment at all — the parser reads those class names as array
values and rejects the file:

```
error[L-C01]: property's value could not be parsed
   ╭─ addons/uniforms/config.cpp:17:56
17 │             CUP_I_B_PMC_Unit_1,
   ·              ──────────────── invalid value
   ╰─ help: use quotes `"` around the value
```

Long comment lines are fine; `addons/b_player_loreacc/config.cpp` runs to 160
characters and that is the established style here.

The last entry carries no trailing comma. Nothing else in the array omits one.

### Comment grammar

A comment answers one question: **which classes of this PBO do we use?** Answer
it with the class names, exactly as they are spelled in the config.

**Name classes, not descriptions.** The class name is searchable, unambiguous,
and verifiable. "Standard kit, SmokeShell" tells a reader nothing they can grep
for, and "Standard kit" is not a thing in the config:

```cpp
"A3_Weapons_F",   // ItemMap, ItemRadio, SmokeShell
"cfp_vests",      // CFP_Tactical1_M81
```

**Do not describe; do not paraphrase.** Write `CUP_arifle_M4A1_black`, not "M4A1
variant"; `USP_RUGBY_G3C_RGR_AOR1`, not "Rugby G3C". A reader who wants to change
the M4A1 needs the name to search for.

**Separate with commas.** A comma separates classes. There is no other
punctuation, no unit attribution, and no parentheses:

```cpp
"CUP_Creatures_Military_USMC", // CUP_U_B_USMC_MCCUU_M81_MARPAT, CUP_V_B_Interceptor_Rifleman_M81
```

**List every class, or none.** Half a list is worse than none: it implies the
omitted classes are unused when they are simply not written down. If a PBO
supplies twenty magazines, name all twenty.

**Order classes alphabetically**, case-insensitively, matching the PBO order
above.

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
| Arma 3 | own mod and base game | `A3_Characters_F`, `A3_Characters_F_Enoch`, `A3_Characters_F_Heads`, `A3_Dubbing_Radio_F*`, `A3_Weapons_F`, `A3_Weapons_F_Items`, `A3_Weapons_F_SMGs_SMG_01`, `A3_Weapons_F_LongRangeRifles_EBR` | Base game, ships with Arma. |
| CUP | main content | `CUP_Creatures_Military_*`, `CUP_Creatures_People_*`, `CUP_Weapons_*`, `CUP_Dubbing_Radio_EN_c` | Supplies the units, clothing and weapons the factions are built from. |
| CFP | main content | `cfp_glasses`, `cfp_headgear`, `cfp_uniforms`, `cfp_vests`, `CFP_O_RUMVD` | Core gear the units wear; extends CUP, so it follows it. |
| RHS | additional | `rhs_c_troops`, `rhsgref_c_troops`, `rhsgref_c_weapons`, `rhsusf_c_radio`, `rhsusf_c_weapons` | Gap filler: a handful of helmets, a vest, the M590 and M3A1. |
| USP | additional | `USP_Gear_Body`, `USP_Gear_Face` | Gap filler: G3C uniforms and face items. |
| F:GW Factions (compat) | additional | `zee_FiftyShadesOfFemale`, `sp_fwa_thompson` | Only used by `compat_fsof` / `compat_fwa`. |

`CUP_Weapons_WeaponsCore` and `rhs_main` appear nowhere. Neither PBO is the
first source of any class we reference, so both were removed; the specific
`CUP_Weapons_*` and `rhs*_c_*` addons carry the load order we actually need.

`A3_Weapons_F` appears only in `uniforms`, because that is the one addon
inheriting `class ItemCore`. `addons/vests` inherits `class VestItem` from
`A3_Weapons_F_Items`, not from `A3_Weapons_F`.

### Verifying a class's owning PBO

The engine will not tell you which PBO a class came from. In order of
reliability:

1. **Read the config.** Grep the addon for the class name and confirm it is
   actually used. This is what catches unused dependencies, and it is the step
   people skip.
2. **Ask the engine.** `extras/utils/findRequiredAddons_check.sqf` walks every
   config class in an addon, collects each inherited or referenced name, and
   prints `configSourceAddonList` for it. Keep the first source and treat later
   ones as compatibility. This is the only step that is evidence rather than
   reasoning.
3. **Infer from the naming scheme.** CUP encodes the owning addon in the class
   name: `CUP_V_PMC_*` → `CUP_Creatures_Military_PMC`, `CUP_H_USArmy_*` and
   `CUP_V_B_Interceptor_*` → `CUP_Creatures_Military_USArmy`, `CUP_V_C_*` →
   `CUP_Creatures_People_Civil_Chernarus`. Inference is good but not proof.
4. **Open the PBO.** Only definitive, and only possible with the mod installed.

If a comment is a guess, treat it as a bug. An unowned class is simply left out
of the array — a missing entry is recoverable, a wrong one is not.

---

## Other topics

<!-- Reserved for future conventions: class naming, include order, Cfg file
     layout, stringtable keys, macro usage. -->
