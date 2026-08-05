<!-- markdownlint-disable-file MD024 -->
<!-- markdownlint-disable-file MD001 -->

# Freeman: Guerrilla Warfare – Units & Equipment Guide

Automatically generated from the game data tables in `StreamingAssets/Native/Table`. Regenerate with `python tools/generate_units_guide.py`.

## Overview

- **Units:** 93
- **Factions:** 15
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

The `Equipment` block lists every item the unit can spawn with. IDs in parentheses match the catalog appendix at the bottom of this document. A trailing `· none` means that slot may also be empty — the unit can spawn without that item.

## Units by Faction

### Player (faction 1)

- **Relationship with player:** 0
- **Enemy factions:** [2, 3, 7, 10, 11, 12, 13, 14]
- **Init money:** 20000

**Units (7):**

#### Armed Bodyguard (ID 101)

  Role: Assault (near) · Sex: Male · Cost: 1000 · Health: 123 · Marksmanship: 6 · Sight: 0.9 · Speed: 1.3 · MaxMisc: 3

  Skills: `Pistol 25 · Rifle 0 · SMG 50 · Shotgun 0 · AR 0 · MG 0 · Launcher 10 · Throwing 40 · Armor 45`

- **Helmet:** none
- **Shirt:** White Stylish Blouse (1018)
- **Armor:** Police Vest (1406)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** Sunglasses (1636)
- **Pistol:** Makarova (2805) · none
- **Rifle:** UMP9 (2207)
- **Misc:** none

#### Militia Rifleman (ID 110)

  Role: Support (middle) · Sex: Male · Cost: 230 · Health: 117 · Marksmanship: 5 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 10 · Rifle 40 · SMG 0 · Shotgun 15 · AR 12 · MG 0 · Launcher 10 · Throwing 25 · Armor 30`

- **Helmet:** Old Helmet (1603) · Steel Helmet (1602) · Bike Helmet (1601) · none
- **Shirt:** Brown T-Shirt (1004) · Black Tank Top (1007) · Green Layered Shirt (1015) · Orange Layered Shirt (1014) · Black T-Shirt (1003) · Red Bandit Shirt (1029) · Freeman T-Shirt (1005) · Brown Tank Top (1008) · Brown Layered Shirt (1027) · Square Stylish Shirt (1019)
- **Armor:** Flak Vest (1401)
- **Pants:** Old Fashioned Jeans (1208) · Ripped Jeans (1210) · Old Red Pants (1212) · Biker Pants (1214) · Blue Jeans (1209)
- **Mask:** Black Mask (1610) · none
- **Pistol:** none
- **Rifle:** MK14 (2401)
- **Misc:** none

#### Militia Sniper (ID 111)

  Role: Sniper (far) · Sex: Male · Cost: 1200 · Health: 100 · Marksmanship: 8 · Sight: 1.6 · Speed: 0.8 · MaxMisc: 3

  Skills: `Pistol 35 · Rifle 60 · SMG 0 · Shotgun 0 · AR 0 · MG 0 · Launcher 0 · Throwing 20 · Armor 22`

- **Helmet:** Camouflage Panama (1612)
- **Shirt:** Brown T-Shirt (1004)
- **Armor:** Militia Vest (1411)
- **Pants:** Camo Pants (1215)
- **Mask:** Camo Mask (1633)
- **Pistol:** P250 (2809) · none
- **Rifle:** MK14 (2401)
- **Misc:** SmokeGrenades (514)

#### Militia SMG Fighter (ID 112)

  Role: Assault (near) · Sex: Male · Cost: 200 · Health: 120 · Marksmanship: 5 · Sight: 0.8 · Speed: 1.3 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 0 · SMG 55 · Shotgun 0 · AR 10 · MG 0 · Launcher 10 · Throwing 35 · Armor 35`

- **Helmet:** Black Military Bandana (1617)
- **Shirt:** Camo Turtleneck (1011)
- **Armor:** Light Combat Vest (1404)
- **Pants:** Camo Pants (1215)
- **Mask:** Camo Mask (1633)
- **Pistol:** none
- **Rifle:** CQRifle (2203)
- **Misc:** RGD6 Grenade (508)

#### Female Militia (ID 115)

  Role: Support (middle) · Sex: Female · Cost: 170 · Health: 110 · Marksmanship: 5 · Sight: 1.1 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 45 · Rifle 12 · SMG 12 · Shotgun 12 · AR 12 · MG 6 · Launcher 10 · Throwing 20 · Armor 35`

- **Helmet:** none
- **Shirt:** Camo Turtleneck (1011)
- **Armor:** Flak Vest (1401)
- **Pants:** Camo Pants (1215) · Black Jeans (1207) · Biker Pants (1214)
- **Mask:** none
- **Pistol:** TT56 (2808) · P1911 (2806)
- **Rifle:** none
- **Misc:** RGD6 Grenade (508)

#### Female Civilian Fighter2 (ID 503)

  Role: Support (middle) · Sex: Female · Cost: 190 · Health: 102 · Marksmanship: 5 · Sight: 0.85 · Speed: 0.9 · MaxMisc: 3

  Skills: `Pistol 15 · Rifle 12 · SMG 0 · Shotgun 25 · AR 0 · MG 0 · Launcher 0 · Throwing 0 · Armor 25`

- **Helmet:** Green Military Bandana (1620)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Flak Vest (1401)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** none
- **Rifle:** Remington (2601)
- **Misc:** none

#### Female Civilian Fighter3 (ID 504)

  Role: Support (middle) · Sex: Female · Cost: 330 · Health: 105 · Marksmanship: 7 · Sight: 0.85 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 26 · Rifle 18 · SMG 0 · Shotgun 45 · AR 0 · MG 0 · Launcher 0 · Throwing 0 · Armor 40`

- **Helmet:** Steel Helmet (1602)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Light Black Vest (1416)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** P1911 (2806)
- **Rifle:** Remington (2601)
- **Misc:** none

**Squads (3):**

| Name | Composition |
| --- | --- |
| Militia Infantry Squad | Militia Rifleman, Militia Rifleman, Militia Rifleman, Militia Rifleman, Militia Rifleman |
| Militia Sniper Team | Militia Sniper, Militia Sniper, Militia Sniper |
| GSS Security Fireteam | Armed Bodyguard, Armed Bodyguard, Armed Bodyguard, Armed Bodyguard, Armed Bodyguard |

### REBEL (faction 2)

- **Relationship with player:** 0
- **Enemy factions:** [1]
- **Init money:** 8000000

**Units (2):**

#### Armed Bodyguard (ID 101)

  Role: Assault (near) · Sex: Male · Cost: 1000 · Health: 123 · Marksmanship: 6 · Sight: 0.9 · Speed: 1.3 · MaxMisc: 3

  Skills: `Pistol 25 · Rifle 0 · SMG 50 · Shotgun 0 · AR 0 · MG 0 · Launcher 10 · Throwing 40 · Armor 45`

- **Helmet:** none
- **Shirt:** White Stylish Blouse (1018)
- **Armor:** Police Vest (1406)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** Sunglasses (1636)
- **Pistol:** Makarova (2805) · none
- **Rifle:** UMP9 (2207)
- **Misc:** none

#### Gangster (ID 102)

  Role: Assault (near) · Sex: Male · Cost: 140 · Health: 110 · Marksmanship: 4 · Sight: 0.8 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 8 · Rifle 12 · SMG 18 · Shotgun 12 · AR 12 · MG 5 · Launcher 5 · Throwing 5 · Armor 25`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** none
- **Pants:** Biker Pants (1214)
- **Mask:** Black Mask (1610)
- **Pistol:** none
- **Rifle:** MPS5 (2206)
- **Misc:** none

**Squads (1):**

| Name | Composition |
| --- | --- |
| Hitman Team | Gangster, Gangster, Gangster |

### Terrorists (faction 3)

- **Relationship with player:** -50
- **Enemy factions:** [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
- **Init money:** 8000000

**Units (3):**

#### Bandit (ID 2)

  Role: Support (middle) · Sex: Male · Cost: 450 · Health: 100 · Marksmanship: 4 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 25 · SMG 8 · Shotgun 0 · AR 0 · MG 0 · Launcher 5 · Throwing 8 · Armor 25`

- **Helmet:** none
- **Shirt:** Brown Leather Jacket (1002) · Old Black Leather Jacket (1001)
- **Armor:** Militia Vest (1411) · Flak Vest (1401)
- **Pants:** Old Red Pants (1212) · Old Grey Pants (1211) · Biker Pants (1214)
- **Mask:** Black Shemagh (1629)
- **Pistol:** none
- **Rifle:** MK14 (2401) · VT14 (2011)
- **Misc:** none

#### Armored Marauder (ID 3)

  Role: Support (middle) · Sex: Male · Cost: 1500 · Health: 123 · Marksmanship: 9 · Sight: 1 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 25 · Rifle 15 · SMG 0 · Shotgun 0 · AR 55 · MG 0 · Launcher 10 · Throwing 30 · Armor 45`

- **Helmet:** none
- **Shirt:** Black T-Shirt (1003)
- **Armor:** Police Vest (1406)
- **Pants:** Black Jeans (1207)
- **Mask:** Gas Mask (1624)
- **Pistol:** P250 (2809) · none
- **Rifle:** AKM74 (2004) · AKS76 (2201)
- **Misc:** RGD6 Grenade (508)

#### Terrorist (ID 4)

  Role: Sniper (far) · Sex: Male · Cost: 1200 · Health: 127 · Marksmanship: 8 · Sight: 1.1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 0 · SMG 15 · Shotgun 0 · AR 0 · MG 55 · Launcher 20 · Throwing 20 · Armor 65`

- **Helmet:** none
- **Shirt:** Black Turtleneck (1010)
- **Armor:** Heavy Tactical Vest (1409)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** Black Shemagh (1629)
- **Pistol:** none
- **Rifle:** PKM74 (2903)
- **Misc:** RGD6 Grenade (508) · RGD6 Grenade (508)

**Squads (3):**

| Name | Composition |
| --- | --- |
| Armoured Marauders | Armored Marauder, Armored Marauder, Armored Marauder, Armored Marauder, Armored Marauder |
| Bandits Squad | Bandit, Bandit, Bandit, Bandit, Bandit |
| Uman Terrorists Squad | Terrorist, Terrorist, Terrorist, Terrorist, Terrorist |

### Atov Revolution Forces (faction 4)

- **Relationship with player:** -30
- **Enemy factions:** [5, 6, 9]
- **Init money:** 13000000

**Units (7):**

#### Federal Infantry (ID 301)

  Role: Support (middle) · Sex: Male · Cost: 1100 · Health: 117 · Marksmanship: 8 · Sight: 1.1 · Speed: 0.8 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 0 · SMG 18 · Shotgun 0 · AR 32 · MG 0 · Launcher 10 · Throwing 22 · Armor 40`

- **Helmet:** Pilot Helmet (1604)
- **Shirt:** Military Shirt Forest (1022)
- **Armor:** Police Vest (1406)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** Black Balaclava (1609)
- **Pistol:** none
- **Rifle:** M16A5 (2007)
- **Misc:** RGD6 Grenade (508) · RGD6 Grenade (508)

#### Federal Machinegunner (ID 302)

  Role: Support (middle) · Sex: Male · Cost: 1550 · Health: 127 · Marksmanship: 6 · Sight: 1.2 · Speed: 0.7 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 12 · SMG 25 · Shotgun 0 · AR 18 · MG 58 · Launcher 10 · Throwing 36 · Armor 60`

- **Helmet:** Spetsnaz Helmet (1608)
- **Shirt:** Military Shirt Forest (1022)
- **Armor:** Military Battle Vest (1407)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** Mini24 (2902)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · First Aid Kit (13)

#### Federal Sharpshooter (ID 303)

  Role: Sniper (far) · Sex: Male · Cost: 2100 · Health: 110 · Marksmanship: 11 · Sight: 2 · Speed: 0.85 · MaxMisc: 3

  Skills: `Pistol 35 · Rifle 68 · SMG 0 · Shotgun 0 · AR 0 · MG 0 · Launcher 5 · Throwing 8 · Armor 33`

- **Helmet:** Camo Military Bandana (1619)
- **Shirt:** Camo Shirt (1031)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** Eagle80 (2802) · none
- **Rifle:** VA Val (2405)
- **Misc:** Night Vision Goggles (44) · First Aid Kit (13) · SmokeGrenades (514)

#### Federal Special Force (ID 304)

  Role: Assault (near) · Sex: Male · Cost: 2500 · Health: 140 · Marksmanship: 8 · Sight: 1 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 15 · SMG 60 · Shotgun 0 · AR 45 · MG 22 · Launcher 22 · Throwing 38 · Armor 50`

- **Helmet:** Combat Helmet (1605)
- **Shirt:** Black Turtleneck (1010)
- **Armor:** Desert Assault Armor (1413)
- **Pants:** Marine Combat Pants (1205)
- **Mask:** none
- **Pistol:** none
- **Rifle:** VECTOR (2208)
- **Misc:** Night Vision Goggles (44) · First Aid Kit (13) · Grenade Launcher (515)

#### Federal Armed Police (ID 305)

  Role: Assault (near) · Sex: Male · Cost: 550 · Health: 113 · Marksmanship: 7 · Sight: 0.9 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 45 · Rifle 12 · SMG 0 · Shotgun 40 · AR 18 · MG 0 · Launcher 5 · Throwing 10 · Armor 45`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Marine Military Shirt (1041)
- **Armor:** Heavy Tactical Vest (1409)
- **Pants:** Navy Military Pants (1217)
- **Mask:** Black Balaclava (1609)
- **Pistol:** P250 (2809) · none
- **Rifle:** Shot12 (2602)
- **Misc:** Night Vision Goggles (44) · RGD6 Grenade (508) · Grenade Launcher (515)

#### Federal Commando (ID 306)

  Role: Assault (near) · Sex: Male · Cost: 1350 · Health: 117 · Marksmanship: 9 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 5 · Rifle 35 · SMG 10 · Shotgun 25 · AR 55 · MG 12 · Launcher 15 · Throwing 35 · Armor 40`

- **Helmet:** Combat Helmet (1605)
- **Shirt:** Marine Military Shirt (1041)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Navy Military Pants (1217)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M4A (2015)
- **Misc:** Night Vision Goggles (44) · RGD6 Grenade (508) · Grenade Launcher (515)

#### Federal Scout (ID 307)

  Role: Assault (near) · Sex: Male · Cost: 1200 · Health: 108 · Marksmanship: 8 · Sight: 1 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 42 · Rifle 18 · SMG 65 · Shotgun 15 · AR 35 · MG 0 · Launcher 20 · Throwing 20 · Armor 35`

- **Helmet:** Combat Helmet (1605)
- **Shirt:** Marine Military Shirt (1041)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Navy Military Pants (1217)
- **Mask:** none
- **Pistol:** P250 (2809) · none
- **Rifle:** Thompson (2209)
- **Misc:** Night Vision Goggles (44) · RGD6 Grenade (508) · Grenade Launcher (515)

**Squads (3):**

| Name | Composition |
| --- | --- |
| Atov Infantry Fireteam | Federal Infantry, Federal Machinegunner, Federal Sharpshooter, Federal Infantry, Federal Infantry |
| Atov Weapon Team | Federal Machinegunner, Federal Machinegunner, Federal Machinegunner |
| Atov Special Force Team | Federal Special Force, Federal Special Force, Federal Special Force, Federal Special Force, Federal Special Force |

### Pozna Battalion (faction 5)

- **Relationship with player:** 0
- **Enemy factions:** [4, 7]
- **Init money:** 6500000

**Units (3):**

#### Pozna Fighter (ID 401)

  Role: Support (middle) · Sex: Male · Cost: 750 · Health: 110 · Marksmanship: 7 · Sight: 1.1 · Speed: 0.9 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 30 · SMG 24 · Shotgun 0 · AR 10 · MG 0 · Launcher 5 · Throwing 30 · Armor 40`

- **Helmet:** none
- **Shirt:** Military Shirt Desert (1025)
- **Armor:** Scout Vest Desert (1403)
- **Pants:** Desert Military Pants (1206)
- **Mask:** Black Balaclava (1609)
- **Pistol:** none
- **Rifle:** VT14 (2011)
- **Misc:** RGD6 Grenade (508)

#### Pozna Sniper (ID 402)

  Role: Sniper (far) · Sex: Male · Cost: 2400 · Health: 102 · Marksmanship: 13 · Sight: 1.85 · Speed: 0.88 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 72 · SMG 10 · Shotgun 0 · AR 5 · MG 5 · Launcher 5 · Throwing 10 · Armor 30`

- **Helmet:** White Panama (1627)
- **Shirt:** Military Shirt Desert (1025)
- **Armor:** none
- **Pants:** Desert Military Pants (1206)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SVD (2404)
- **Misc:** SmokeGrenades (514) · Night Vision Goggles (44)

#### Pozna Commando (ID 403)

  Role: Assault (near) · Sex: Male · Cost: 950 · Health: 123 · Marksmanship: 9 · Sight: 1.3 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 0 · SMG 33 · Shotgun 0 · AR 58 · MG 0 · Launcher 15 · Throwing 50 · Armor 50`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Brown T-Shirt (1004)
- **Armor:** Desert Assault Armor (1413)
- **Pants:** Desert Military Pants (1206)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M4A (2015)
- **Misc:** RGD6 Grenade (508) · RGD6 Grenade (508) · Night Vision Goggles (44)

**Squads (2):**

| Name | Composition |
| --- | --- |
| Pozna Rifle Squad | Pozna Commando, Pozna Commando, Pozna Fighter, Pozna Fighter, Pozna Fighter, Pozna Fighter, Pozna Fighter |
| Pozna Marksman Team | Pozna Sniper, Pozna Sniper, Pozna Sniper |

### Free Cossacks Army (faction 6)

- **Relationship with player:** 0
- **Enemy factions:** [4]
- **Init money:** 7800000

**Units (4):**

#### FCA Militia (ID 201)

  Role: Assault (near) · Sex: Male · Cost: 750 · Health: 117 · Marksmanship: 6 · Sight: 1 · Speed: 1.25 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 18 · SMG 32 · Shotgun 0 · AR 10 · MG 5 · Launcher 5 · Throwing 18 · Armor 30`

- **Helmet:** Jungle Cap (1622)
- **Shirt:** Military Shirt Jungle (1023)
- **Armor:** Scout Vest Forest (1402)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** none
- **Pistol:** none
- **Rifle:** AKS76 (2201)
- **Misc:** RGD6 Grenade (508)

#### FCA Rifleman (ID 202)

  Role: Support (middle) · Sex: Male · Cost: 1050 · Health: 123 · Marksmanship: 10 · Sight: 1 · Speed: 0.95 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 45 · SMG 35 · Shotgun 0 · AR 15 · MG 8 · Launcher 10 · Throwing 20 · Armor 40`

- **Helmet:** Steel Helmet (1602)
- **Shirt:** Military Shirt Jungle (1023)
- **Armor:** Scout Vest Forest (1402)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SKKS (2402)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13)

#### FCA Grenadier (ID 203)

  Role: Sniper (far) · Sex: Male · Cost: 2300 · Health: 133 · Marksmanship: 7 · Sight: 1.1 · Speed: 0.8 · MaxMisc: 3

  Skills: `Pistol 32 · Rifle 20 · SMG 10 · Shotgun 0 · AR 30 · MG 10 · Launcher 45 · Throwing 50 · Armor 55`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Military Shirt Jungle (1023)
- **Armor:** Heavy Kevlar Vest (1408)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** AM Mask (1615)
- **Pistol:** TT56 (2808) · none
- **Rifle:** ARX160 (2014)
- **Misc:** RGD6 Grenade (508) · Grenade Launcher (515) · Night Vision Goggles (44)

#### FCA Shock Troop (ID 204)

  Role: Support (middle) · Sex: Male · Cost: 3300 · Health: 167 · Marksmanship: 9 · Sight: 1 · Speed: 0.75 · MaxMisc: 3

  Skills: `Pistol 5 · Rifle 10 · SMG 35 · Shotgun 0 · AR 42 · MG 45 · Launcher 22 · Throwing 25 · Armor 70`

- **Helmet:** Spetsnaz Helmet (1608)
- **Shirt:** Military Shirt Jungle (1023)
- **Armor:** Desert Assault Armor (1413)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** Navy Military Bandana (1621)
- **Pistol:** none
- **Rifle:** HMG (2901)
- **Misc:** RGD6 Grenade (508) · RGD6 Grenade (508) · RGD6 Grenade (508)

**Squads (3):**

| Name | Composition |
| --- | --- |
| FCA Militia Squad | FCA Militia, FCA Militia, FCA Militia, FCA Militia, FCA Militia, FCA Militia, FCA Militia |
| FCA Infantry Squad | FCA Grenadier, FCA Rifleman, FCA Grenadier, FCA Grenadier, FCA Rifleman, FCA Rifleman, FCA Rifleman |
| FCA Shock Squad | FCA Shock Troop, FCA Shock Troop, FCA Shock Troop, FCA Shock Troop, FCA Shock Troop |

### Uman Brotherhood (faction 7)

- **Relationship with player:** -10
- **Enemy factions:** [5, 8, 9]
- **Init money:** 5700000

**Units (2):**

#### Uman Terrorist (ID 601)

  Role: Support (middle) · Sex: Male · Cost: 880 · Health: 113 · Marksmanship: 8 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 24 · Rifle 6 · SMG 42 · Shotgun 5 · AR 58 · MG 15 · Launcher 65 · Throwing 62 · Armor 60`

- **Helmet:** none
- **Shirt:** Red T-Shirt (1032)
- **Armor:** Heavy Kevlar Vest (1408)
- **Pants:** Black Jeans (1207)
- **Mask:** Ski Mask (1625)
- **Pistol:** Eagle80 (2802) · none
- **Rifle:** AKS76 (2201) · AKM74 (2004)
- **Misc:** RGD6 Grenade (508) · Grenade Launcher (515)

#### Uman Militant (ID 602)

  Role: Support (middle) · Sex: Male · Cost: 1350 · Health: 118 · Marksmanship: 9 · Sight: 1 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 36 · Rifle 12 · SMG 20 · Shotgun 15 · AR 68 · MG 15 · Launcher 30 · Throwing 32 · Armor 60`

- **Helmet:** none
- **Shirt:** Red T-Shirt (1032)
- **Armor:** Desert Assault Armor (1413)
- **Pants:** Black Jeans (1207)
- **Mask:** Red Mask (1634)
- **Pistol:** P250 (2809) · none
- **Rifle:** AK12 (2002) · AKM74 (2004)
- **Misc:** SmokeGrenades (514)

### Valkerie Female Fighters (faction 8)

- **Relationship with player:** 0
- **Enemy factions:** [7]
- **Init money:** 5000000

**Units (5):**

#### Female Civilian Fighter2 (ID 503)

  Role: Support (middle) · Sex: Female · Cost: 190 · Health: 102 · Marksmanship: 5 · Sight: 0.85 · Speed: 0.9 · MaxMisc: 3

  Skills: `Pistol 15 · Rifle 12 · SMG 0 · Shotgun 25 · AR 0 · MG 0 · Launcher 0 · Throwing 0 · Armor 25`

- **Helmet:** Green Military Bandana (1620)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Flak Vest (1401)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** none
- **Rifle:** Remington (2601)
- **Misc:** none

#### Female Civilian Fighter3 (ID 504)

  Role: Support (middle) · Sex: Female · Cost: 330 · Health: 105 · Marksmanship: 7 · Sight: 0.85 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 26 · Rifle 18 · SMG 0 · Shotgun 45 · AR 0 · MG 0 · Launcher 0 · Throwing 0 · Armor 40`

- **Helmet:** Steel Helmet (1602)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Light Black Vest (1416)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** P1911 (2806)
- **Rifle:** Remington (2601)
- **Misc:** none

#### VFA Fighter (ID 505)

  Role: Support (middle) · Sex: Female · Cost: 1300 · Health: 112 · Marksmanship: 11 · Sight: 1.32 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 30 · Rifle 60 · SMG 42 · Shotgun 33 · AR 50 · MG 12 · Launcher 30 · Throwing 40 · Armor 50`

- **Helmet:** Camo Kelver Helmet (1613)
- **Shirt:** Camo Shirt (1031)
- **Armor:** Police Camo Vest (1415)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M416 (2008)
- **Misc:** RGD6 Grenade (508) · Night Vision Goggles (44) · SmokeGrenades (514)

#### VFA Women Marine (ID 506)

  Role: Support (middle) · Sex: Female · Cost: 1700 · Health: 120 · Marksmanship: 9 · Sight: 1 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 12 · SMG 35 · Shotgun 5 · AR 66 · MG 25 · Launcher 25 · Throwing 30 · Armor 45`

- **Helmet:** Spetsnaz Helmet (1608)
- **Shirt:** Camo Shirt (1031)
- **Armor:** Military Battle Vest (1407)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M16A5 (2007)
- **Misc:** SmokeGrenades (514) · First Aid Kit (13)

#### VFA Women Special Police (ID 507)

  Role: Support (middle) · Sex: Female · Cost: 660 · Health: 103 · Marksmanship: 8 · Sight: 0.8 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 45 · Rifle 12 · SMG 15 · Shotgun 55 · AR 0 · MG 5 · Launcher 5 · Throwing 12 · Armor 35`

- **Helmet:** Old Camo Helmet (1637)
- **Shirt:** Camo Tank Top (1009)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** P1911 (2806)
- **Rifle:** Striker12 (2603)
- **Misc:** RGD6 Grenade (508)

**Squads (1):**

| Name | Composition |
| --- | --- |
| VFA Fighters | VFA Women Marine, VFA Women Marine, VFA Women Marine, VFA Women Marine, VFA Women Marine |

### Chernivkan Front (faction 9)

- **Relationship with player:** 0
- **Enemy factions:** [4, 7]
- **Init money:** 2500000

**Units (3):**

#### CFR Rebel Fighter (ID 701)

  Role: Assault (near) · Sex: Male · Cost: 650 · Health: 125 · Marksmanship: 6 · Sight: 0.8 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 42 · SMG 0 · Shotgun 12 · AR 10 · MG 10 · Launcher 10 · Throwing 20 · Armor 35`

- **Helmet:** Old Camo Helmet (1637)
- **Shirt:** Olive T-Shirt (1040)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Green Combat Pants (1218)
- **Mask:** Camo Mask (1633)
- **Pistol:** none
- **Rifle:** VT14 (2011)
- **Misc:** none

#### CFR Rebel Grenadier (ID 702)

  Role: Support (middle) · Sex: Male · Cost: 1100 · Health: 103 · Marksmanship: 6 · Sight: 1 · Speed: 0.9 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 52 · Shotgun 0 · AR 20 · MG 10 · Launcher 36 · Throwing 42 · Armor 50`

- **Helmet:** Old Helmet (1603)
- **Shirt:** Green Camouflage T-Shirt (1026)
- **Armor:** Police Camo Vest (1415)
- **Pants:** Green Combat Pants (1218)
- **Mask:** Ski Mask (1625)
- **Pistol:** none
- **Rifle:** CORAL (2202)
- **Misc:** RGD6 Grenade (508) · Grenade Launcher (515)

#### CFR Rebel DM (ID 703)

  Role: Sniper (far) · Sex: Male · Cost: 1300 · Health: 108 · Marksmanship: 10 · Sight: 1.25 · Speed: 0.85 · MaxMisc: 3

  Skills: `Pistol 35 · Rifle 58 · SMG 20 · Shotgun 0 · AR 10 · MG 10 · Launcher 10 · Throwing 10 · Armor 30`

- **Helmet:** Camo Military Bandana (1619)
- **Shirt:** Green Camouflage T-Shirt (1026)
- **Armor:** Flak Vest (1401)
- **Pants:** Green Combat Pants (1218)
- **Mask:** none
- **Pistol:** Eagle80 (2802) · none
- **Rifle:** SKKS (2402)
- **Misc:** RGD6 Grenade (508) · Grenade Launcher (515)

### Desert Marauders (faction 10)

- **Relationship with player:** -50
- **Enemy factions:** [1, 4, 5, 6, 7, 8, 9, 11, 12, 13]
- **Init money:** 3700000

**Units (2):**

#### Desert Bandit (ID 5)

  Role: Assault (near) · Sex: Male · Cost: 850 · Health: 107 · Marksmanship: 6 · Sight: 0.8 · Speed: 1.45 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 0 · SMG 42 · Shotgun 0 · AR 35 · MG 0 · Launcher 45 · Throwing 30 · Armor 65`

- **Helmet:** Sand Shemagh (1628)
- **Shirt:** Sand Camo T-Shirt (1039) · Brown Tank Top (1008) · Brown T-Shirt (1004) · Olive T-Shirt (1040)
- **Armor:** Police Camo Vest (1415)
- **Pants:** Sand Combat Pants (1219) · Desert Military Pants (1206) · Old Red Pants (1212) · Sand Military Pants (1216)
- **Mask:** none
- **Pistol:** none
- **Rifle:** AKS76 (2201) · AKM (2003)
- **Misc:** RGD6 Grenade (508)

#### Desert Armed Bandit (ID 10)

  Role: Assault (near) · Sex: Male · Cost: 1400 · Health: 120 · Marksmanship: 8 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 0 · SMG 15 · Shotgun 0 · AR 55 · MG 0 · Launcher 20 · Throwing 20 · Armor 60`

- **Helmet:** none
- **Shirt:** Sand Camo T-Shirt (1039)
- **Armor:** Desert Assault Armor (1413)
- **Pants:** Sand Military Pants (1216)
- **Mask:** Sand Shemagh (1628)
- **Pistol:** none
- **Rifle:** SCAR-L (2010)
- **Misc:** SmokeGrenades (514)

**Squads (1):**

| Name | Composition |
| --- | --- |
| Terrorists | Desert Bandit, Desert Bandit, Desert Bandit, Desert Bandit, Desert Bandit |

### Mountain Bandits (faction 11)

- **Relationship with player:** -50
- **Enemy factions:** [1, 4, 5, 6, 7, 8, 9, 10, 12, 13]
- **Init money:** 2700000

**Units (3):**

#### Mountain Bandit (ID 6)

  Role: Sniper (far) · Sex: Male · Cost: 550 · Health: 107 · Marksmanship: 5 · Sight: 1 · Speed: 0.8 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 30 · SMG 0 · Shotgun 12 · AR 0 · MG 0 · Launcher 5 · Throwing 30 · Armor 50`

- **Helmet:** Dark Shemagh (1614)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Light Black Vest (1416)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** none
- **Rifle:** VT14 (2011) · MK14 (2401)
- **Misc:** RGD6 Grenade (508) · SmokeGrenades (514)

#### Female Bandit3 (ID 501)

  Role: Support (middle) · Sex: Female · Cost: 320 · Health: 95 · Marksmanship: 6 · Sight: 1 · Speed: 0.9 · MaxMisc: 3

  Skills: `Pistol 36 · Rifle 36 · SMG 0 · Shotgun 0 · AR 0 · MG 0 · Launcher 0 · Throwing 0 · Armor 35`

- **Helmet:** Old Helmet (1603)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Scout Vest Forest (1402)
- **Pants:** Skinny Jeans (1213)
- **Mask:** none
- **Pistol:** P1911 (2806)
- **Rifle:** VT14 (2011)
- **Misc:** none

#### Female Bandit2 (ID 502)

  Role: Support (middle) · Sex: Female · Cost: 180 · Health: 85 · Marksmanship: 5 · Sight: 1 · Speed: 0.75 · MaxMisc: 3

  Skills: `Pistol 12 · Rifle 24 · SMG 0 · Shotgun 0 · AR 0 · MG 0 · Launcher 0 · Throwing 0 · Armor 25`

- **Helmet:** none
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Flak Vest (1401)
- **Pants:** Old Red Pants (1212)
- **Mask:** none
- **Pistol:** none
- **Rifle:** MK14 (2401)
- **Misc:** none

### Pirates (faction 12)

- **Relationship with player:** -50
- **Enemy factions:** [1, 4, 5, 6, 7, 8, 9, 10, 11, 13]
- **Init money:** 3500000

**Units (2):**

#### Pirate (ID 7)

  Role: Support (middle) · Sex: Male · Cost: 1050 · Health: 117 · Marksmanship: 7 · Sight: 1.1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 12 · SMG 0 · Shotgun 0 · AR 45 · MG 0 · Launcher 5 · Throwing 25 · Armor 45`

- **Helmet:** Black Military Bandana (1617)
- **Shirt:** Blue Layered Shirt (1013)
- **Armor:** Police Vest (1406)
- **Pants:** Marine Combat Pants (1205)
- **Mask:** Skull Mask (1635)
- **Pistol:** none
- **Rifle:** AKM74 (2004) · PDR (2009)
- **Misc:** SmokeGrenades (514)

#### Pirate Leader (ID 11)

  Role: Support (middle) · Sex: Male · Cost: 1200 · Health: 122 · Marksmanship: 8 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 30 · Rifle 0 · SMG 0 · Shotgun 0 · AR 55 · MG 0 · Launcher 20 · Throwing 25 · Armor 45`

- **Helmet:** Old Camo Helmet (1637)
- **Shirt:** Blue Layered Shirt (1013)
- **Armor:** Military Battle Vest (1407)
- **Pants:** Marine Combat Pants (1205)
- **Mask:** Skull Mask (1635)
- **Pistol:** TT56 (2808) · none
- **Rifle:** AK12 (2002)
- **Misc:** SmokeGrenades (514)

### Cossacks Rebels (faction 13)

- **Relationship with player:** -50
- **Enemy factions:** [1, 4, 5, 6, 7, 8, 9, 10, 11, 12]
- **Init money:** 3500000

**Units (2):**

#### Cossack Rebel Fighter (ID 8)

  Role: Support (middle) · Sex: Male · Cost: 1020 · Health: 133 · Marksmanship: 6 · Sight: 1 · Speed: 0.95 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 20 · SMG 0 · Shotgun 0 · AR 45 · MG 0 · Launcher 55 · Throwing 40 · Armor 60`

- **Helmet:** Old Helmet (1603)
- **Shirt:** Olive T-Shirt (1040)
- **Armor:** Heavy Kevlar Vest (1408)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** Camo Mask (1633)
- **Pistol:** none
- **Rifle:** AKM (2003) · AKM74 (2004) · AK12 (2002)
- **Misc:** RGD6 Grenade (508)

#### Cossack Rebel Women Sniper (ID 12)

  Role: Support (middle) · Sex: Female · Cost: 1350 · Health: 107 · Marksmanship: 9 · Sight: 1.2 · Speed: 0.95 · MaxMisc: 3

  Skills: `Pistol 35 · Rifle 58 · SMG 0 · Shotgun 0 · AR 0 · MG 0 · Launcher 5 · Throwing 5 · Armor 25`

- **Helmet:** Camo Military Bandana (1619)
- **Shirt:** Camo Shirt (1031)
- **Armor:** Militia Vest (1411)
- **Pants:** Old Red Pants (1212)
- **Mask:** Camo Mask (1633)
- **Pistol:** TT56 (2808)
- **Rifle:** AWR (2406)
- **Misc:** RGD6 Grenade (508)

### Bandits (faction 14)

- **Relationship with player:** -50
- **Enemy factions:** [1, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
- **Init money:** 3500000

**Units (3):**

#### Looter (ID 1)

  Role: Assault (near) · Sex: Male · Cost: 380 · Health: 80 · Marksmanship: 3 · Sight: 0.8 · Speed: 0.9 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 17 · SMG 0 · Shotgun 0 · AR 5 · MG 0 · Launcher 5 · Throwing 8 · Armor 25`

- **Helmet:** none
- **Shirt:** Brown Layered Shirt (1027) · Black Tank Top (1007) · Red Layered Shirt (1028)
- **Armor:** none
- **Pants:** Old Red Pants (1212) · Old Grey Pants (1211) · Biker Pants (1214)
- **Mask:** Black Mask (1610)
- **Pistol:** none
- **Rifle:** MK14 (2401)
- **Misc:** none

#### Bandit (ID 2)

  Role: Support (middle) · Sex: Male · Cost: 450 · Health: 100 · Marksmanship: 4 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 25 · SMG 8 · Shotgun 0 · AR 0 · MG 0 · Launcher 5 · Throwing 8 · Armor 25`

- **Helmet:** none
- **Shirt:** Brown Leather Jacket (1002) · Old Black Leather Jacket (1001)
- **Armor:** Militia Vest (1411) · Flak Vest (1401)
- **Pants:** Old Red Pants (1212) · Old Grey Pants (1211) · Biker Pants (1214)
- **Mask:** Black Shemagh (1629)
- **Pistol:** none
- **Rifle:** MK14 (2401) · VT14 (2011)
- **Misc:** none

#### Raider (ID 9)

  Role: Assault (near) · Sex: Male · Cost: 350 · Health: 90 · Marksmanship: 6 · Sight: 0.8 · Speed: 1.35 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 12 · SMG 38 · Shotgun 0 · AR 0 · MG 0 · Launcher 5 · Throwing 5 · Armor 35`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** none
- **Pants:** Ripped Jeans (1210)
- **Mask:** none
- **Pistol:** none
- **Rifle:** MPS5 (2206) · UMP9 (2207)
- **Misc:** none

**Squads (1):**

| Name | Composition |
| --- | --- |
| Looters Squad | Looter, Looter, Looter, Looter, Looter |

### Alpha Forces (faction 999)

- **Relationship with player:** -999
- **Enemy factions:** [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14]
- **Init money:** 60000000

**Units (4):**

#### ALPHA SPECIAL FORCE (ID 901)

  Role: Support (middle) · Sex: Male · Cost: 999 · Health: 153 · Marksmanship: 14 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 40 · SMG 0 · Shotgun 0 · AR 70 · MG 0 · Launcher 30 · Throwing 60 · Armor 60`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Sand Camo T-Shirt (1039)
- **Armor:** Heavy Tactical Vest (1409)
- **Pants:** Sand Military Pants (1216)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M416 (2008)
- **Misc:** First Aid Kit (13) · RGD6 Grenade (508) · Night Vision Goggles (44)

#### ALPHA ELITE SNIPER (ID 902)

  Role: Sniper (far) · Sex: Male · Cost: 999 · Health: 117 · Marksmanship: 15 · Sight: 1.2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 55 · Rifle 78 · SMG 0 · Shotgun 0 · AR 0 · MG 0 · Launcher 0 · Throwing 30 · Armor 40`

- **Helmet:** Old Helmet (1603)
- **Shirt:** Sand Camo T-Shirt (1039)
- **Armor:** Light Combat Vest (1404)
- **Pants:** Sand Military Pants (1216)
- **Mask:** none
- **Pistol:** Eagle80 (2802) · none
- **Rifle:** SV98m (2408)
- **Misc:** Binocular (52) · Night Vision Goggles (44) · First Aid Kit (13)

#### ALPHA ELITE STORMTROOPER (ID 903)

  Role: Assault (near) · Sex: Male · Cost: 999 · Health: 137 · Marksmanship: 12 · Sight: 0.9 · Speed: 0.8 · MaxMisc: 3

  Skills: `Pistol 10 · Rifle 5 · SMG 36 · Shotgun 2 · AR 0 · MG 58 · Launcher 0 · Throwing 64 · Armor 80`

- **Helmet:** Marauder Helmet (1606)
- **Shirt:** Sand Camo T-Shirt (1039)
- **Armor:** Heavy Assault Armor (1410)
- **Pants:** Sand Military Pants (1216)
- **Mask:** none
- **Pistol:** none
- **Rifle:** HMG (2901)
- **Misc:** First Aid Kit (13) · RGD6 Grenade (508) · SmokeGrenades (514)

#### ALPHA ELITE SCOUTS (ID 904)

  Role: Assault (near) · Sex: Male · Cost: 999 · Health: 127 · Marksmanship: 10 · Sight: 1 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 20 · Rifle 3 · SMG 82 · Shotgun 41 · AR 10 · MG 2 · Launcher 0 · Throwing 23 · Armor 36`

- **Helmet:** Bike Helmet (1601)
- **Shirt:** Sand Camo T-Shirt (1039)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Sand Military Pants (1216)
- **Mask:** none
- **Pistol:** none
- **Rifle:** VECTOR (2208)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · Grenade Launcher (515)

## Special Units

#### Special Sealion (ID 1001)

  Role: Support (middle) · Sex: Male · Cost: 2300 · Health: 125 · Marksmanship: 8 · Sight: 1.1 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 8 · Rifle 28 · SMG 15 · Shotgun 15 · AR 75 · MG 15 · Launcher 35 · Throwing 20 · Armor 50`

- **Helmet:** Marauder Helmet (1606)
- **Shirt:** Navy T-Shirt (1033)
- **Armor:** Marine Vest (1405)
- **Pants:** Navy Military Pants (1217)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M16A5 (2007)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · Grenade Launcher (515)

#### Special Owl (ID 1002)

  Role: Sniper (far) · Sex: Male · Cost: 3000 · Health: 105 · Marksmanship: 12 · Sight: 1.6 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 56 · Rifle 80 · SMG 12 · Shotgun 12 · AR 18 · MG 8 · Launcher 8 · Throwing 10 · Armor 60`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Black Turtleneck (1010)
- **Armor:** Heavy Tactical Vest (1409)
- **Pants:** Black Jeans (1207)
- **Mask:** Tactical Glasses (1631)
- **Pistol:** G19 (2804)
- **Rifle:** SVD (2404)
- **Misc:** Night Vision Goggles (44) · Grenade Launcher (515) · SmokeGrenades (514)

#### Special Rattlesnake (ID 1003)

  Role: Support (middle) · Sex: Male · Cost: 2300 · Health: 118 · Marksmanship: 8 · Sight: 1.1 · Speed: 1.05 · MaxMisc: 3

  Skills: `Pistol 12 · Rifle 24 · SMG 26 · Shotgun 10 · AR 36 · MG 66 · Launcher 15 · Throwing 35 · Armor 38`

- **Helmet:** Bike Helmet (1601)
- **Shirt:** Brown T-Shirt (1004)
- **Armor:** Light Combat Vest (1404)
- **Pants:** Desert Military Pants (1206)
- **Mask:** Black Mask (1610)
- **Pistol:** none
- **Rifle:** HMG (2901)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · RGD6 Grenade (508)

#### Special Scorpion (ID 1004)

  Role: Assault (near) · Sex: Male · Cost: 2400 · Health: 117 · Marksmanship: 9 · Sight: 1.2 · Speed: 1.3 · MaxMisc: 3

  Skills: `Pistol 5 · Rifle 28 · SMG 10 · Shotgun 45 · AR 72 · MG 18 · Launcher 20 · Throwing 35 · Armor 45`

- **Helmet:** Combat Helmet (1605)
- **Shirt:** Brown Tank Top (1008)
- **Armor:** Military Battle Vest (1407)
- **Pants:** Sand Military Pants (1216)
- **Mask:** Desert Mask (1639)
- **Pistol:** none
- **Rifle:** M4A (2015)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · Grenade Launcher (515)

#### Special Cheetah (ID 1005)

  Role: Assault (near) · Sex: Male · Cost: 3100 · Health: 125 · Marksmanship: 12 · Sight: 1.2 · Speed: 1.35 · MaxMisc: 3

  Skills: `Pistol 12 · Rifle 30 · SMG 45 · Shotgun 10 · AR 65 · MG 10 · Launcher 20 · Throwing 20 · Armor 45`

- **Helmet:** Old Camo Helmet (1637)
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Scout Vest Forest (1402)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** Camo Mask (1633)
- **Pistol:** none
- **Rifle:** AUG (2005)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · Grenade Launcher (515)

#### Special Wolf (ID 1006)

  Role: Support (middle) · Sex: Male · Cost: 2200 · Health: 128 · Marksmanship: 8 · Sight: 1.3 · Speed: 1.5 · MaxMisc: 3

  Skills: `Pistol 18 · Rifle 30 · SMG 72 · Shotgun 10 · AR 66 · MG 45 · Launcher 45 · Throwing 10 · Armor 60`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Black Turtleneck (1010)
- **Armor:** Heavy Tactical Vest (1409)
- **Pants:** Old Grey Pants (1211)
- **Mask:** Black Shemagh (1629)
- **Pistol:** none
- **Rifle:** UMP9 (2207)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · SmokeGrenades (514)

#### Special Snowfox (ID 1007)

  Role: Sniper (far) · Sex: Female · Cost: 3200 · Health: 108 · Marksmanship: 13 · Sight: 1.4 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 66 · Rifle 75 · SMG 10 · Shotgun 10 · AR 10 · MG 10 · Launcher 5 · Throwing 8 · Armor 45`

- **Helmet:** Combat Helmet (1605)
- **Shirt:** Coyote T-Shirt (1037)
- **Armor:** Flak Vest (1401)
- **Pants:** Blue Skirt (1201)
- **Mask:** Sunglasses (1636)
- **Pistol:** R1895 (2807)
- **Rifle:** VT14 (2011)
- **Misc:** Night Vision Goggles (44) · Grenade Launcher (515) · RGD6 Grenade (508)

#### Special Vulture (ID 1008)

  Role: Assault (near) · Sex: Female · Cost: 2500 · Health: 133 · Marksmanship: 10 · Sight: 1.05 · Speed: 1.05 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 30 · SMG 56 · Shotgun 80 · AR 10 · MG 36 · Launcher 5 · Throwing 45 · Armor 65`

- **Helmet:** Spetsnaz Helmet (1608)
- **Shirt:** Square Stylish Shirt (1019)
- **Armor:** Heavy Tactical Vest (1409)
- **Pants:** Sand Skirt (1220)
- **Mask:** none
- **Pistol:** none
- **Rifle:** Remington (2601)
- **Misc:** RGD6 Grenade (508) · First Aid Kit (13) · Grenade Launcher (515)

## Trained Units

#### Trained Infantry (ID 801)

  Role: Support (middle) · Sex: Male · Cost: 300 · Health: 127 · Marksmanship: 6 · Sight: 1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 10 · Rifle 20 · SMG 36 · Shotgun 25 · AR 52 · MG 5 · Launcher 15 · Throwing 40 · Armor 40`

- **Helmet:** Camo Kelver Helmet (1613)
- **Shirt:** Camo Turtleneck (1011)
- **Armor:** Police Camo Vest (1415)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M4A (2015)
- **Misc:** First Aid Kit (13) · SmokeGrenades (514) · RGD6 Grenade (508)

#### Trained Marksman (ID 802)

  Role: Sniper (far) · Sex: Male · Cost: 600 · Health: 107 · Marksmanship: 10 · Sight: 1.25 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 12 · Rifle 52 · SMG 32 · Shotgun 0 · AR 0 · MG 0 · Launcher 25 · Throwing 30 · Armor 30`

- **Helmet:** Jungle Cap (1622)
- **Shirt:** Camo Turtleneck (1011)
- **Armor:** Scout Vest Forest (1402)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** none
- **Pistol:** none
- **Rifle:** AWR (2406)
- **Misc:** RGD6 Grenade (508) · Grenade Launcher (515) · SmokeGrenades (514)

#### Spetsnaz (ID 803)

  Role: Assault (near) · Sex: Male · Cost: 1500 · Health: 140 · Marksmanship: 9 · Sight: 1.1 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 5 · Rifle 12 · SMG 42 · Shotgun 24 · AR 62 · MG 12 · Launcher 20 · Throwing 40 · Armor 75`

- **Helmet:** Tactical Kevlar Helmet (1607)
- **Shirt:** Navy Turtleneck (1042)
- **Armor:** Special Force Armor (1412)
- **Pants:** Navy Military Pants (1217)
- **Mask:** Gas Mask (1624)
- **Pistol:** none
- **Rifle:** M416 (2008)
- **Misc:** RGD6 Grenade (508) · Grenade Launcher (515) · First Aid Kit (13)

## Other Units

#### Male Villager (ID 113)

  Role: Support (middle) · Sex: Male · Cost: 90 · Health: 100 · Marksmanship: 4 · Sight: 0.7 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 10 · Rifle 25 · SMG 8 · Shotgun 12 · AR 10 · MG 8 · Launcher 10 · Throwing 15 · Armor 25`

- **Helmet:** White Panama (1627) · Beret (1616) · Sand Military Bandana (1618) · none
- **Shirt:** Red Bandit Shirt (1029) · Red Layered Shirt (1028) · Brown Tank Top (1008) · Grey Tank Top (1034) · Blue Bandit Shirt (1030)
- **Armor:** none
- **Pants:** Old Fashioned Jeans (1208) · Old Grey Pants (1211)
- **Mask:** none
- **Pistol:** none
- **Rifle:** MK14 (2401)
- **Misc:** none

#### Female Villager (ID 114)

  Role: Support (middle) · Sex: Female · Cost: 80 · Health: 103 · Marksmanship: 4 · Sight: 0.8 · Speed: 0.95 · MaxMisc: 3

  Skills: `Pistol 35 · Rifle 15 · SMG 5 · Shotgun 5 · AR 5 · MG 5 · Launcher 10 · Throwing 15 · Armor 25`

- **Helmet:** none
- **Shirt:** Brown Dress (1012)
- **Armor:** none
- **Pants:** none
- **Mask:** none
- **Pistol:** Makarova (2805)
- **Rifle:** none
- **Misc:** none

#### Armed Escort Guard (ID 116)

  Role: Support (middle) · Sex: Male · Cost: 500 · Health: 120 · Marksmanship: 7 · Sight: 1.1 · Speed: 1.25 · MaxMisc: 3

  Skills: `Pistol 65 · Rifle 10 · SMG 35 · Shotgun 30 · AR 5 · MG 5 · Launcher 10 · Throwing 22 · Armor 40`

- **Helmet:** MP Helmet (1638)
- **Shirt:** Black Turtleneck (1010)
- **Armor:** Light Black Vest (1416)
- **Pants:** Black Jeans (1207)
- **Mask:** none
- **Pistol:** R1895 (2807) · FS7 (2803) · G19 (2804) · none
- **Rifle:** Thompson (2209) · UMP9 (2207) · Shot12 (2602)
- **Misc:** RGD6 Grenade (508)

## Heroes

31 recruitable characters. `Faction` is the faction they belong to (Independent = no faction).

| Hero | Soldier ID | Faction | Leadership | Tactics | Medical | Financial | Governing | Navigation |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| Anna | 10001 | Independent | 1 | 1 | 1 | 5 | 0 | 3 |
| Volodimir | 10002 | Independent | 5 | 4 | 2 | 6 | 1 | 4 |
| Ivan | 10003 | Independent | 4 | 1 | 0 | 1 | 0 | 1 |
| Igor | 10004 | Independent | 5 | 1 | 0 | 1 | 0 | 1 |
| Maria | 10005 | Independent | 1 | 1 | 9 | 1 | 0 | 1 |
| Anastasia | 10006 | Independent | 3 | 1 | 0 | 1 | 1 | 1 |
| Ludmila | 10007 | Independent | 2 | 1 | 1 | 9 | 2 | 1 |
| Yevgen | 10008 | Independent | 5 | 1 | 0 | 1 | 1 | 1 |
| Georgiy | 10009 | Independent | 4 | 3 | 0 | 1 | 1 | 1 |
| Leonid | 10010 | Independent | 2 | 1 | 0 | 1 | 0 | 1 |
| Maxim | 10011 | Independent | 1 | 1 | 0 | 1 | 0 | 1 |
| Miroslava | 10012 | Independent | 1 | 1 | 4 | 1 | 0 | 1 |
| Olga | 10013 | Chernivkan Front | 8 | 5 | 0 | 1 | 0 | 1 |
| Victoria | 10014 | Valkerie Female Fighters | 7 | 9 | 3 | 1 | 0 | 1 |
| Oksana | 10015 | Valkerie Female Fighters | 3 | 3 | 0 | 1 | 0 | 1 |
| Ostap | 10016 | Free Cossacks Army | 7 | 3 | 0 | 1 | 0 | 1 |
| Stepan | 10017 | Free Cossacks Army | 6 | 4 | 0 | 1 | 5 | 1 |
| Bohdan | 10018 | Free Cossacks Army | 6 | 5 | 0 | 1 | 0 | 1 |
| Dimitro | 10019 | Atov Revolution Forces | 7 | 3 | 5 | 2 | 6 | 3 |
| Kostyantin | 10020 | Atov Revolution Forces | 9 | 10 | 0 | 5 | 7 | 1 |
| Oleg | 10021 | Atov Revolution Forces | 5 | 5 | 0 | 1 | 1 | 1 |
| Vitaly | 10022 | Atov Revolution Forces | 6 | 6 | 0 | 5 | 6 | 1 |
| Roman | 10023 | Pozna Battalion | 5 | 5 | 0 | 6 | 3 | 1 |
| Yuriy | 10024 | Pozna Battalion | 4 | 8 | 3 | 3 | 6 | 1 |
| Denis | 10025 | Pozna Battalion | 4 | 7 | 0 | 1 | 0 | 1 |
| Tatyana | 10026 | Pozna Battalion | 1 | 3 | 1 | 1 | 0 | 2 |
| Finn | 10027 | Uman Brotherhood | 1 | 1 | 1 | 2 | 0 | 2 |
| Haaken | 10028 | Uman Brotherhood | 2 | 1 | 0 | 1 | 0 | 1 |
| Pedro | 10029 | Independent | 1 | 1 | 2 | 2 | 0 | 1 |
| Sergei | 10030 | Independent | 2 | 1 | 1 | 3 | 0 | 1 |
| Irina | 10031 | Independent | 1 | 3 | 2 | 4 | 0 | 1 |

Full profiles for the hero soldier bodies (stats + equipment):

#### Anna (ID 10001)

  Role: Support (middle) · Sex: Female · Cost: 1700 · Health: 127 · Marksmanship: 5 · Sight: 1.2 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 20 · SMG 10 · Shotgun 10 · AR 20 · MG 5 · Launcher 18 · Throwing 20 · Armor 25`

- **Helmet:** none
- **Shirt:** Brown Dress (1012)
- **Armor:** none
- **Pants:** none
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Volodimir (ID 10002)

  Role: Support (middle) · Sex: Male · Cost: 3700 · Health: 173 · Marksmanship: 6 · Sight: 1.2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 30 · Shotgun 10 · AR 40 · MG 50 · Launcher 20 · Throwing 40 · Armor 30`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** VECTOR (2208)
- **Misc:** none

#### Ivan (ID 10003)

  Role: Support (middle) · Sex: Male · Cost: 2500 · Health: 167 · Marksmanship: 6 · Sight: 1.4 · Speed: 1.05 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 70 · Shotgun 30 · AR 40 · MG 10 · Launcher 10 · Throwing 26 · Armor 30`

- **Helmet:** none
- **Shirt:** White Tank Top (1036)
- **Armor:** none
- **Pants:** Blue Jeans (1209)
- **Mask:** none
- **Pistol:** Beretta (2801)
- **Rifle:** none
- **Misc:** none

#### Igor (ID 10004)

  Role: Support (middle) · Sex: Male · Cost: 2500 · Health: 177 · Marksmanship: 6 · Sight: 1.2 · Speed: 1.12 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 20 · SMG 70 · Shotgun 10 · AR 30 · MG 20 · Launcher 20 · Throwing 30 · Armor 40`

- **Helmet:** none
- **Shirt:** Coyote T-Shirt (1037)
- **Armor:** Light Black Vest (1416)
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** Eagle80 (2802)
- **Rifle:** VECTOR (2208)
- **Misc:** none

#### Maria (ID 10005)

  Role: Support (middle) · Sex: Female · Cost: 2400 · Health: 150 · Marksmanship: 4 · Sight: 1.2 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 30 · SMG 20 · Shotgun 10 · AR 10 · MG 10 · Launcher 10 · Throwing 20 · Armor 30`

- **Helmet:** none
- **Shirt:** White Tank Top (1036)
- **Armor:** none
- **Pants:** Black Jeans (1207)
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Anastasia (ID 10006)

  Role: Support (middle) · Sex: Female · Cost: 1600 · Health: 150 · Marksmanship: 4 · Sight: 1.2 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 10 · Shotgun 10 · AR 10 · MG 10 · Launcher 10 · Throwing 21 · Armor 25`

- **Helmet:** none
- **Shirt:** Orange Camisole (1020)
- **Armor:** none
- **Pants:** Blue Skirt (1201)
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Ludmila (ID 10007)

  Role: Support (middle) · Sex: Female · Cost: 2400 · Health: 140 · Marksmanship: 5 · Sight: 1.2 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 40 · Shotgun 30 · AR 30 · MG 10 · Launcher 10 · Throwing 28 · Armor 23`

- **Helmet:** none
- **Shirt:** Blue Dress (1043)
- **Armor:** none
- **Pants:** none
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Yevgen (ID 10008)

  Role: Support (middle) · Sex: Male · Cost: 2500 · Health: 187 · Marksmanship: 6 · Sight: 1.2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 35 · SMG 35 · Shotgun 22 · AR 22 · MG 15 · Launcher 5 · Throwing 25 · Armor 26`

- **Helmet:** none
- **Shirt:** Brown Tank Top (1008)
- **Armor:** none
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** none
- **Rifle:** Remington (2601)
- **Misc:** none

#### Georgiy (ID 10009)

  Role: Support (middle) · Sex: Male · Cost: 2400 · Health: 190 · Marksmanship: 7 · Sight: 1.2 · Speed: 1.12 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 15 · SMG 15 · Shotgun 22 · AR 35 · MG 35 · Launcher 40 · Throwing 25 · Armor 23`

- **Helmet:** none
- **Shirt:** Green Layered Shirt (1015)
- **Armor:** none
- **Pants:** Biker Pants (1214)
- **Mask:** none
- **Pistol:** G19 (2804)
- **Rifle:** none
- **Misc:** none

#### Leonid (ID 10010)

  Role: Support (middle) · Sex: Male · Cost: 2500 · Health: 193 · Marksmanship: 9 · Sight: 1.4 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 12 · SMG 35 · Shotgun 35 · AR 48 · MG 52 · Launcher 33 · Throwing 23 · Armor 25`

- **Helmet:** none
- **Shirt:** Red T-Shirt (1032)
- **Armor:** none
- **Pants:** Blue Jeans (1209)
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Maxim (ID 10011)

  Role: Support (middle) · Sex: Male · Cost: 2400 · Health: 167 · Marksmanship: 5 · Sight: 1.4 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 35 · SMG 32 · Shotgun 12 · AR 18 · MG 20 · Launcher 5 · Throwing 22 · Armor 22`

- **Helmet:** none
- **Shirt:** Square Stylish Shirt (1019)
- **Armor:** none
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Miroslava (ID 10012)

  Role: Support (middle) · Sex: Female · Cost: 2500 · Health: 160 · Marksmanship: 4 · Sight: 1.4 · Speed: 1.22 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 20 · SMG 10 · Shotgun 20 · AR 20 · MG 30 · Launcher 42 · Throwing 38 · Armor 21`

- **Helmet:** none
- **Shirt:** Short Camisole (1021)
- **Armor:** none
- **Pants:** Blue Jeans (1209)
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Olga (ID 10013)

  Role: Support (middle) · Sex: Female · Cost: 4400 · Health: 167 · Marksmanship: 11 · Sight: 1.8 · Speed: 1.3 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 60 · SMG 30 · Shotgun 10 · AR 60 · MG 10 · Launcher 10 · Throwing 20 · Armor 40`

- **Helmet:** none
- **Shirt:** Olive T-Shirt (1040)
- **Armor:** none
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** VT14 (2011)
- **Misc:** none

#### Victoria (ID 10014)

  Role: Support (middle) · Sex: Female · Cost: 4000 · Health: 183 · Marksmanship: 12 · Sight: 1.2 · Speed: 1.35 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 40 · SMG 10 · Shotgun 10 · AR 50 · MG 20 · Launcher 30 · Throwing 40 · Armor 40`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** Beretta (2801)
- **Rifle:** M16A5 (2007)
- **Misc:** none

#### Oksana (ID 10015)

  Role: Support (middle) · Sex: Female · Cost: 3700 · Health: 177 · Marksmanship: 10 · Sight: 1.2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 35 · SMG 32 · Shotgun 30 · AR 58 · MG 22 · Launcher 15 · Throwing 26 · Armor 35`

- **Helmet:** none
- **Shirt:** White Tank Top (1036)
- **Armor:** Flak Vest (1401)
- **Pants:** Sand Combat Pants (1219)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M416 (2008)
- **Misc:** none

#### Ostap (ID 10016)

  Role: Support (middle) · Sex: Male · Cost: 3300 · Health: 190 · Marksmanship: 12 · Sight: 2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 60 · SMG 45 · Shotgun 55 · AR 35 · MG 27 · Launcher 18 · Throwing 23 · Armor 25`

- **Helmet:** none
- **Shirt:** Green T-Shirt (1038)
- **Armor:** Heavy Kevlar Vest (1408)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** none
- **Pistol:** none
- **Rifle:** AKM (2003)
- **Misc:** none

#### Stepan (ID 10017)

  Role: Support (middle) · Sex: Male · Cost: 4700 · Health: 193 · Marksmanship: 12 · Sight: 1.2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 55 · SMG 35 · Shotgun 45 · AR 52 · MG 5 · Launcher 15 · Throwing 31 · Armor 12`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Police Camo Vest (1415)
- **Pants:** Jungle Combat Pants (1204)
- **Mask:** none
- **Pistol:** none
- **Rifle:** Shot12 (2602)
- **Misc:** none

#### Bohdan (ID 10018)

  Role: Support (middle) · Sex: Male · Cost: 4000 · Health: 150 · Marksmanship: 12 · Sight: 1.2 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 36 · SMG 22 · Shotgun 31 · AR 24 · MG 41 · Launcher 36 · Throwing 20 · Armor 40`

- **Helmet:** none
- **Shirt:** Olive T-Shirt (1040)
- **Armor:** Military Battle Vest (1407)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** AKS76 (2201)
- **Misc:** none

#### Dimitro (ID 10019)

  Role: Support (middle) · Sex: Male · Cost: 4300 · Health: 193 · Marksmanship: 12 · Sight: 1.2 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 45 · SMG 45 · Shotgun 48 · AR 60 · MG 35 · Launcher 33 · Throwing 55 · Armor 45`

- **Helmet:** none
- **Shirt:** Square Stylish Shirt (1019)
- **Armor:** none
- **Pants:** Old Fashioned Jeans (1208)
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

#### Kostyantin (ID 10020)

  Role: Support (middle) · Sex: Male · Cost: 5300 · Health: 195 · Marksmanship: 11 · Sight: 1.6 · Speed: 1.25 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 70 · SMG 45 · Shotgun 65 · AR 51 · MG 35 · Launcher 55 · Throwing 35 · Armor 45`

- **Helmet:** none
- **Shirt:** Military Shirt Forest (1022)
- **Armor:** none
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** Makarova (2805)
- **Rifle:** none
- **Misc:** none

#### Oleg (ID 10021)

  Role: Support (middle) · Sex: Male · Cost: 3600 · Health: 192 · Marksmanship: 13 · Sight: 1.5 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 55 · Shotgun 45 · AR 35 · MG 30 · Launcher 20 · Throwing 25 · Armor 15`

- **Helmet:** none
- **Shirt:** Military Shirt Forest (1022)
- **Armor:** Scout Vest Forest (1402)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** M416 (2008)
- **Misc:** none

#### Vitaly (ID 10022)

  Role: Support (middle) · Sex: Male · Cost: 3700 · Health: 150 · Marksmanship: 10 · Sight: 1.5 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 35 · Shotgun 5 · AR 33 · MG 35 · Launcher 36 · Throwing 21 · Armor 19`

- **Helmet:** none
- **Shirt:** Military Shirt Forest (1022)
- **Armor:** none
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** G19 (2804)
- **Rifle:** none
- **Misc:** none

#### Roman (ID 10023)

  Role: Support (middle) · Sex: Male · Cost: 3200 · Health: 197 · Marksmanship: 12 · Sight: 1.9 · Speed: 1.1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 60 · SMG 42 · Shotgun 5 · AR 42 · MG 35 · Launcher 35 · Throwing 20 · Armor 20`

- **Helmet:** none
- **Shirt:** Olive T-Shirt (1040)
- **Armor:** Scout Vest Desert (1403)
- **Pants:** Desert Military Pants (1206)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SVD (2404)
- **Misc:** none

#### Yuriy (ID 10024)

  Role: Support (middle) · Sex: Male · Cost: 2500 · Health: 170 · Marksmanship: 11 · Sight: 1.5 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 30 · SMG 45 · Shotgun 46 · AR 49 · MG 52 · Launcher 32 · Throwing 33 · Armor 25`

- **Helmet:** none
- **Shirt:** Camo Turtleneck (1011)
- **Armor:** Scout Vest Camo (1414)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** none
- **Rifle:** AKS76 (2201)
- **Misc:** none

#### Denis (ID 10025)

  Role: Support (middle) · Sex: Male · Cost: 2500 · Health: 182 · Marksmanship: 14 · Sight: 1.5 · Speed: 1 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 50 · SMG 23 · Shotgun 23 · AR 43 · MG 23 · Launcher 28 · Throwing 35 · Armor 35`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** Beretta (2801)
- **Rifle:** M16A5 (2007)
- **Misc:** none

#### Tatyana (ID 10026)

  Role: Sniper (far) · Sex: Female · Cost: 2400 · Health: 183 · Marksmanship: 12 · Sight: 2.5 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 90 · SMG 20 · Shotgun 10 · AR 65 · MG 10 · Launcher 10 · Throwing 20 · Armor 20`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SKKS (2402)
- **Misc:** none

#### Finn (ID 10027)

  Role: Support (middle) · Sex: Male · Cost: 4000 · Health: 168 · Marksmanship: 11 · Sight: 1.2 · Speed: 1.15 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 20 · SMG 50 · Shotgun 10 · AR 52 · MG 36 · Launcher 40 · Throwing 60 · Armor 40`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Camo Pants (1215)
- **Mask:** none
- **Pistol:** Beretta (2801)
- **Rifle:** M16A5 (2007)
- **Misc:** none

#### Haaken (ID 10028)

  Role: Support (middle) · Sex: Male · Cost: 3600 · Health: 198 · Marksmanship: 10 · Sight: 1.2 · Speed: 1.2 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 10 · SMG 40 · Shotgun 8 · AR 63 · MG 30 · Launcher 60 · Throwing 40 · Armor 50`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SKKS (2402)
- **Misc:** none

#### Pedro (ID 10029)

  Role: Support (middle) · Sex: Male · Cost: 2400 · Health: 140 · Marksmanship: 6 · Sight: 1.2 · Speed: 1.12 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 26 · SMG 25 · Shotgun 8 · AR 11 · MG 3 · Launcher 19 · Throwing 18 · Armor 20`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SKKS (2402)
- **Misc:** none

#### Sergei (ID 10030)

  Role: Support (middle) · Sex: Male · Cost: 2100 · Health: 147 · Marksmanship: 7 · Sight: 1.2 · Speed: 1.11 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 24 · SMG 30 · Shotgun 5 · AR 35 · MG 3 · Launcher 17 · Throwing 18 · Armor 24`

- **Helmet:** none
- **Shirt:** Black Tank Top (1007)
- **Armor:** Flak Vest (1401)
- **Pants:** Forest Combat Pants (1203)
- **Mask:** none
- **Pistol:** none
- **Rifle:** SKKS (2402)
- **Misc:** none

#### Irina (ID 10031)

  Role: Support (middle) · Sex: Female · Cost: 1700 · Health: 133 · Marksmanship: 5 · Sight: 1.4 · Speed: 1.25 · MaxMisc: 3

  Skills: `Pistol 0 · Rifle 20 · SMG 45 · Shotgun 10 · AR 20 · MG 3 · Launcher 15 · Throwing 15 · Armor 25`

- **Helmet:** none
- **Shirt:** Brown Dress (1012)
- **Armor:** none
- **Pants:** none
- **Mask:** none
- **Pistol:** none
- **Rifle:** none
- **Misc:** none

## Equipment Catalog

### Weapons

Fire modes: `Semi` = semi-automatic, `Burst` = burst fire, `Auto` = fully automatic.
Ammo column shows the ammo type name and its catalog ID.

#### Pistols

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2205 | MAC | 20 | 32 | 9mm (502) | Auto | none |
| 2801 | Beretta | 20 | 9 | 9mm (502) | Semi | Pistol Silencer (607) |
| 2802 | Eagle80 | 28 | 8 | 357 Magnum (507) | Semi | Pistol Silencer (607) |
| 2803 | FS7 | 30 | 20 | 5.7mm (513) | Semi | Pistol Silencer (607) |
| 2804 | G19 | 21 | 19 | 9mm (502) | Semi / Burst | Pistol Silencer (607) |
| 2805 | Makarova | 22 | 8 | 9mm (502) | Semi | Pistol Silencer (607) |
| 2806 | P1911 | 22 | 7 | 9mm (502) | Semi | Pistol Silencer (607) |
| 2807 | R1895 | 33 | 6 | 357 Magnum (507) | Semi | none |
| 2808 | TT56 | 44 | 8 | Tokarev (510) | Semi | Pistol Silencer (607) |
| 2809 | P250 | 44 | 8 | Tokarev (510) | Semi | Pistol Silencer (607) |
| 2810 | UZI | 22 | 25 | 9mm (502) | Auto | none |

#### Submachine Guns

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2201 | AKS76 | 58 | 30 | 7.62mm (501) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Rifle Silencer (608) |
| 2202 | CORAL | 26 | 30 | 45ACP (505) | Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) |
| 2203 | CQRifle | 28 | 30 | 45ACP (505) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Rifle Silencer (608) |
| 2204 | Gustiv Smg | 24 | 32 | 45ACP (505) | Auto | none |
| 2206 | MPS5 | 23 | 30 | 9mm (502) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Rifle Silencer (608) |
| 2207 | UMP9 | 21 | 25 | 9mm (502) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) |
| 2208 | VECTOR | 27 | 25 | 45ACP (505) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Rifle Silencer (608) |
| 2209 | Thompson | 26 | 50 | 45ACP (505) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) |

#### Shotguns

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2601 | Remington | 39 | 8 | 12 Gauge (504) | Semi | none |
| 2602 | Shot12 | 40 | 10 | 12 Gauge (504) | Semi / Auto | none |
| 2603 | Striker12 | 40 | 12 | 12 Gauge (504) | Semi / Auto | none |

#### Rifles

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2011 | VT14 | 65 | 10 | 7.62mm (501) | Semi | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2401 | MK14 | 60 | 20 | 7.62mm (501) | Semi | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2402 | SKKS | 70 | 10 | 7.62mm (501) | Semi | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2403 | SR100 | 105 | 5 | 11.43mm (503) | Semi | Rifle Silencer (608) |
| 2404 | SVD | 75 | 10 | 7.62mm (501) | Semi | Rifle Silencer (608) |
| 2405 | VA Val | 45 | 20 | 45ACP (505) | Semi / Auto | none |
| 2406 | AWR | 80 | 5 | 7.62mm (501) | Semi | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2407 | SSG08 | 75 | 10 | 7.62mm (501) | Semi | Rifle Silencer (608) |
| 2408 | SV98m | 95 | 10 | 7.62mm (501) | Semi | none |

#### Assault Rifles

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2001 | AK5C | 48 | 30 | 5.56mm (511) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2002 | AK12 | 61 | 30 | 7.62mm (501) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2003 | AKM | 56 | 30 | 7.62mm (501) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2004 | AKM74 | 58 | 30 | 7.62mm (501) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2005 | AUG | 46 | 42 | 5.56mm (511) | Semi / Auto | Rifle Silencer (608) |
| 2006 | Groza | 61 | 30 | 7.62mm (501) | Semi / Auto | Rifle Silencer (608) |
| 2007 | M16A5 | 50 | 30 | 5.56mm (511) | Semi / Burst | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2008 | M416 | 48 | 30 | 5.56mm (511) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2009 | PDR | 45 | 40 | 5.56mm (511) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2010 | SCAR-L | 50 | 30 | 5.56mm (511) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2012 | L85 | 48 | 30 | 5.56mm (511) | Semi / Auto | Rifle Silencer (608) |
| 2014 | ARX160 | 48 | 30 | 5.56mm (511) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |
| 2015 | M4A | 48 | 30 | 5.56mm (511) | Semi / Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · Spectre (605) · M145 (606) · Rifle Silencer (608) |

#### Machine Guns

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2901 | HMG | 69 | 70 | 50Cal (506) | Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · M145 (606) |
| 2902 | Mini24 | 42 | 100 | 5.56mm (511) | Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · M145 (606) |
| 2903 | PKM74 | 58 | 45 | 7.62mm (501) | Auto | SP133 Reddot Sight (601) · EOT52 Holographic Sight (602) · AMT Reddot Sight (603) · TAC 4x (604) · M145 (606) |

#### Launchers

| ID | Name | Damage | Magazine | Ammo | Modes | Attachments |
| --- | --- | --- | --- | --- | --- | --- |
| 2951 | RPG | 500 | 1 | RPG AP Warhead (509) | Semi | none |

### Clothing

#### Helmets

| ID | Name | Armor | Camouflage |
| --- | --- | --- | --- |
| 1601 | Bike Helmet | 20 | 0 |
| 1602 | Steel Helmet | 25 | 0 |
| 1603 | Old Helmet | 30 | 0 |
| 1604 | Pilot Helmet | 35 | 0 |
| 1605 | Combat Helmet | 45 | 0 |
| 1606 | Marauder Helmet | 50 | 0 |
| 1607 | Tactical Kevlar Helmet | 55 | 0 |
| 1608 | Spetsnaz Helmet | 65 | 0 |
| 1612 | Camouflage Panama | 5 | 15 |
| 1613 | Camo Kelver Helmet | 41 | 15 |
| 1614 | Dark Shemagh | 6 | 15 |
| 1616 | Beret | 3 | 0 |
| 1617 | Black Military Bandana | 5 | 15 |
| 1618 | Sand Military Bandana | 5 | 15 |
| 1619 | Camo Military Bandana | 5 | 15 |
| 1620 | Green Military Bandana | 5 | 12 |
| 1621 | Navy Military Bandana | 5 | 12 |
| 1622 | Jungle Cap | 5 | 15 |
| 1623 | Navy Cap | 5 | 12 |
| 1626 | Black Panama | 5 | 15 |
| 1627 | White Panama | 5 | 15 |
| 1637 | Old Camo Helmet | 25 | 15 |
| 1638 | MP Helmet | 32 | 0 |

#### Shirts

| ID | Name | Armor | Camouflage |
| --- | --- | --- | --- |
| 1001 | Old Black Leather Jacket | 9 | 15 |
| 1002 | Brown Leather Jacket | 9 | 15 |
| 1003 | Black T-Shirt | 3 | 15 |
| 1004 | Brown T-Shirt | 3 | 11 |
| 1005 | Freeman T-Shirt | 3 | 11 |
| 1006 | Skull T-Shirt | 3 | 7 |
| 1007 | Black Tank Top | 3 | 13 |
| 1008 | Brown Tank Top | 3 | 10 |
| 1009 | Camo Tank Top | 4 | 13 |
| 1010 | Black Turtleneck | 4 | 15 |
| 1011 | Camo Turtleneck | 4 | 15 |
| 1012 | Brown Dress | 4 | 0 |
| 1013 | Blue Layered Shirt | 5 | 8 |
| 1014 | Orange Layered Shirt | 5 | 0 |
| 1015 | Green Layered Shirt | 5 | 12 |
| 1016 | Blue Hoodie | 5 | 0 |
| 1017 | Purple Hoodie | 5 | 0 |
| 1018 | White Stylish Blouse | 3 | 10 |
| 1019 | Square Stylish Shirt | 3 | 0 |
| 1020 | Orange Camisole | 3 | 0 |
| 1021 | Short Camisole | 3 | 0 |
| 1022 | Military Shirt Forest | 7 | 20 |
| 1023 | Military Shirt Jungle | 7 | 22 |
| 1024 | Military Shirt Navy | 7 | 20 |
| 1025 | Military Shirt Desert | 7 | 20 |
| 1026 | Green Camouflage T-Shirt | 4 | 17 |
| 1027 | Brown Layered Shirt | 4 | 8 |
| 1028 | Red Layered Shirt | 4 | 0 |
| 1029 | Red Bandit Shirt | 4 | 0 |
| 1030 | Blue Bandit Shirt | 5 | 0 |
| 1031 | Camo Shirt | 5 | 11 |
| 1032 | Red T-Shirt | 5 | 0 |
| 1033 | Navy T-Shirt | 6 | 15 |
| 1034 | Grey Tank Top | 4 | 12 |
| 1035 | Red Tank Top | 4 | 0 |
| 1036 | White Tank Top | 4 | 0 |
| 1037 | Coyote T-Shirt | 4 | 0 |
| 1038 | Green T-Shirt | 4 | 12 |
| 1039 | Sand Camo T-Shirt | 5 | 17 |
| 1040 | Olive T-Shirt | 5 | 11 |
| 1041 | Marine Military Shirt | 7 | 17 |
| 1042 | Navy Turtleneck | 7 | 18 |
| 1043 | Blue Dress | 3 | 0 |
| 1044 | Green Dress | 3 | 0 |
| 1045 | White Hoodie | 5 | 0 |
| 1046 | Sport Hoodie | 5 | 0 |

#### Body Armor

| ID | Name | Armor | Camouflage |
| --- | --- | --- | --- |
| 1401 | Flak Vest | 22 | 15 |
| 1402 | Scout Vest Forest | 26 | 20 |
| 1403 | Scout Vest Desert | 30 | 20 |
| 1404 | Light Combat Vest | 35 | 15 |
| 1405 | Marine Vest | 38 | 13 |
| 1406 | Police Vest | 42 | 20 |
| 1407 | Military Battle Vest | 45 | 15 |
| 1408 | Heavy Kevlar Vest | 55 | 18 |
| 1409 | Heavy Tactical Vest | 60 | 18 |
| 1410 | Heavy Assault Armor | 68 | 15 |
| 1411 | Militia Vest | 22 | 12 |
| 1412 | Special Force Armor | 75 | 15 |
| 1413 | Desert Assault Armor | 57 | 20 |
| 1414 | Scout Vest Camo | 33 | 20 |
| 1415 | Police Camo Vest | 42 | 17 |
| 1416 | Light Black Vest | 30 | 15 |
| 1417 | Desert Militia Vest | 24 | 17 |

#### Pants

| ID | Name | Armor | Camouflage |
| --- | --- | --- | --- |
| 1201 | Blue Skirt | 5 | 0 |
| 1202 | Camo Skirt | 6 | 17 |
| 1203 | Forest Combat Pants | 9 | 20 |
| 1204 | Jungle Combat Pants | 9 | 20 |
| 1205 | Marine Combat Pants | 9 | 18 |
| 1206 | Desert Military Pants | 9 | 20 |
| 1207 | Black Jeans | 6 | 20 |
| 1208 | Old Fashioned Jeans | 5 | 11 |
| 1209 | Blue Jeans | 5 | 8 |
| 1210 | Ripped Jeans | 7 | 8 |
| 1211 | Old Grey Pants | 8 | 8 |
| 1212 | Old Red Pants | 6 | 0 |
| 1213 | Skinny Jeans | 3 | 0 |
| 1214 | Biker Pants | 7 | 0 |
| 1215 | Camo Pants | 8 | 15 |
| 1216 | Sand Military Pants | 8 | 20 |
| 1217 | Navy Military Pants | 8 | 20 |
| 1218 | Green Combat Pants | 10 | 20 |
| 1219 | Sand Combat Pants | 10 | 20 |
| 1220 | Sand Skirt | 6 | 18 |

#### Masks

| ID | Name | Armor | Camouflage |
| --- | --- | --- | --- |
| 1609 | Black Balaclava | 6 | 15 |
| 1610 | Black Mask | 5 | 13 |
| 1611 | Orange Shemagh | 5 | 0 |
| 1615 | AM Mask | 9 | 0 |
| 1624 | Gas Mask | 5 | 0 |
| 1625 | Ski Mask | 3 | 10 |
| 1628 | Sand Shemagh | 6 | 18 |
| 1629 | Black Shemagh | 6 | 15 |
| 1630 | Khaki Balaclava | 6 | 0 |
| 1631 | Tactical Glasses | 6 | 0 |
| 1632 | Green Balaclava | 2 | 13 |
| 1633 | Camo Mask | 3 | 15 |
| 1634 | Red Mask | 3 | 0 |
| 1635 | Skull Mask | 3 | 13 |
| 1636 | Sunglasses | 3 | 0 |
| 1639 | Desert Mask | 3 | 15 |

### Other Items

#### Ammunition & Explosives

| ID | Name | Slot | Cost |
| --- | --- | --- | --- |
| 501 | 7.62mm | MISC | 75 |
| 502 | 9mm | PA | 50 |
| 503 | 11.43mm | MISC | 225 |
| 504 | 12 Gauge | MISC | 125 |
| 505 | 45ACP | PA | 30 |
| 506 | 50Cal | MISC | 200 |
| 507 | 357 Magnum | PA | 105 |
| 508 | RGD6 Grenade | MISC | 200 |
| 509 | RPG AP Warhead | MISC | 500 |
| 510 | Tokarev | PA | 35 |
| 511 | 5.56mm | MISC | 60 |
| 512 | 5.45mm | MISC | 55 |
| 513 | 5.7mm | PA | 55 |
| 514 | SmokeGrenades | MISC | 180 |
| 515 | Grenade Launcher | MISC | 3000 |

#### Attachments

| ID | Name | Slot | Cost |
| --- | --- | --- | --- |
| 44 | Night Vision Goggles | MISC | 2500 |
| 52 | Binocular | MISC | 800 |
| 601 | SP133 Reddot Sight | RIFLESCOPE | 3300 |
| 602 | EOT52 Holographic Sight | RIFLESCOPE | 4500 |
| 603 | AMT Reddot Sight | RIFLESCOPE | 5600 |
| 604 | TAC 4x | RIFLESCOPE | 8800 |
| 605 | Spectre | RIFLESCOPE | 18000 |
| 606 | M145 | RIFLESCOPE | 8800 |
| 607 | Pistol Silencer | PISTOLSILENCER | 3000 |
| 608 | Rifle Silencer | RIFLESILENCER | 6000 |

#### Equipment

| ID | Name | Slot | Cost |
| --- | --- | --- | --- |
| 1 | Battery | NONE | 150 |
| 3 | Beer | NONE | 80 |
| 5 | Canteen | NONE | 60 |
| 6 | Chemical | NONE | 280 |
| 7 | Cigarette | NONE | 75 |
| 8 | Coffee Beans | NONE | 220 |
| 9 | Compass | NONE | 88 |
| 11 | Electronic Parts | NONE | 130 |
| 12 | Energy Drink | NONE | 60 |
| 13 | First Aid Kit | MISC | 250 |
| 14 | Flash Light | NONE | 88 |
| 18 | Garbage | NONE | 8 |
| 19 | Gasoline | NONE | 320 |
| 20 | Gold Ore | NONE | 760 |
| 21 | Hatchet | NONE | 65 |
| 22 | Iron | NONE | 175 |
| 23 | Iron Ore | NONE | 150 |
| 24 | Leather | NONE | 230 |
| 25 | Lighter | NONE | 88 |
| 26 | Linen | NONE | 180 |
| 27 | ItemMap | NONE | 200 |
| 28 | Match | NONE | 35 |
| 29 | Mecanical Parts | NONE | 250 |
| 30 | Pills | NONE | 99 |
| 31 | Pottery | NONE | 450 |
| 32 | Raw Amber | NONE | 668 |
| 33 | Shovel | NONE | 55 |
| 34 | Tea | NONE | 220 |
| 35 | Tent | NONE | 120 |
| 36 | Tools | NONE | 175 |
| 38 | Walkie Talkie | NONE | 360 |
| 39 | Water | NONE | 50 |
| 40 | Wheat | NONE | 75 |
| 41 | Wire Cutter | NONE | 88 |
| 42 | Wood | NONE | 180 |
| 43 | Important File | NONE | 200 |
| 46 | asphalt | NONE | 300 |
| 47 | crystal | NONE | 850 |
| 48 | pearl | NONE | 450 |
| 49 | fur | NONE | 250 |
| 50 | salt | NONE | 160 |
| 51 | herbs | NONE | 360 |
| 53 | Photographic apparatus | NONE | 3500 |

#### Gifts

| ID | Name | Slot | Cost |
| --- | --- | --- | --- |
| 301 | Luxury Wine | NONE | 1400 |
| 302 | Jewelry | NONE | 4000 |
| 303 | Flower Bouquet | NONE | 500 |
| 304 | Vodka | NONE | 400 |
| 305 | Luxury Dress | NONE | 2300 |
| 306 | Famous Painting | NONE | 6000 |
| 307 | Famous Cigar | NONE | 350 |
| 308 | Branded Watch | NONE | 5000 |
| 309 | Classic Novel | NONE | 200 |
| 310 | Branded Outfit | NONE | 1800 |
| 311 | Tasty Dessert | NONE | 100 |

#### Food

| ID | Name | Slot | Cost |
| --- | --- | --- | --- |
| 2 | Beef | NONE | 100 |
| 4 | Bread | NONE | 60 |
| 10 | Dried Fish | NONE | 100 |
| 15 | Flour | NONE | 150 |
| 16 | Canned fish | NONE | 115 |
| 17 | Fruits | NONE | 50 |
| 37 | Vegetable | NONE | 40 |
| 45 | Rice | NONE | 70 |
