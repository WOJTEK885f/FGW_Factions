<!-- markdownlint-disable-file MD024 -->
<!-- markdownlint-disable-file MD001 -->

# Freeman: Guerrilla Warfare – Units & Equipment Guide

Automatically generated from the game data tables in `StreamingAssets/Native/Table`. Regenerate with `python tools/generate_units_guide.py`.

## Sections

- [Units & Heroes](units-and-heroes.md)
- [Equipment: Weapons](equipment-weapons.md)
- [Equipment: Clothing](equipment-clothing.md)
- [Equipment: Other Items](equipment-other-items.md)

## Overview

- **Units:** 93
- **Factions:** 15
- **Armies:** 35
- **Predefined squads:** 18
- **Heroes:** 31
- **Weapons:** 48
- **Clothing:** 122
- **Other items:** 87

### Roles

- **Assault (near)** – short-range fighters (shotguns, SMGs).
- **Support (middle)** – all-purpose infantry.
- **Sniper (far)** – long-range marksmen.

### Weapon skills

Every unit has a skill level per weapon category (`Skills` line). A higher
skill lets the unit make full use of heavier weapons in that category:

- **Pistol** – handguns (Beretta, Makarova, ...).
- **Rifle** – bolt-action / DMR rifles (MK14, SVD, ...).
- **SMG** – submachine guns (AKS76, UMP9, ...).
- **Shotgun** – shotguns (Remington, Striker12, ...).
- **AR** – assault rifles (AKM, M16A5, ...).
- **MG** – machine guns (HMG, PKM74, ...).
- **Launcher** – RPG launchers.
- **Throwing** – grenades.
- **Armor** – body armor level (max armor the soldier can wear).

### Loadout slots

The `Equipment` block lists every item the unit can spawn with. IDs in parentheses match the Equipment Catalog (`equipment-weapons.md`, `equipment-clothing.md`, `equipment-other-items.md`). A trailing `· none` means that slot may also be empty — the unit can spawn without that item.
