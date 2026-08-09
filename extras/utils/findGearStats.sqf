/*
    ====================================================================
    Script: Gear Stats Checker
    Author: WOJTEK885
    Description: Fetches base stats (mass, container, legacy armor) as well
                 as dynamic hitpoint protections (HitpointsProtectionInfo)
                 for items like vests, helmets, and uniforms.

    Usage:
    1. Launch Eden Editor in Arma 3.
    2. Open the Debug Console (ESC).
    3. Paste this script.
    4. Click "Local Execute".
    5. The generated string will be copied to your clipboard and sent in the system chat.
    ====================================================================
*/

// Enter the item class you want to check here
private _itemToCheck = "ItemClassname";

private _itemConfig = configFile >> "CfgWeapons" >> _itemToCheck >> "ItemInfo";

// Base stats fetch
private _armor = getNumber (_itemConfig >> "armor");
private _passThrough = getNumber (_itemConfig >> "passThrough");
private _containerClass = getText (_itemConfig >> "containerClass");
private _mass = getNumber (_itemConfig >> "mass");

// Dynamic HitpointsProtectionInfo fetch (Chest, Abdomen, Neck, etc.)
private _hitpointsStats = [];
private _hitpointsConfig = _itemConfig >> "HitpointsProtectionInfo";

if (isClass _hitpointsConfig) then {
    {
        private _hpName = configName _x;
        private _hpArmor = getNumber (_x >> "armor");
        private _hpPass = getNumber (_x >> "passThrough");
        _hitpointsStats pushBack (format ["%1: Armor=%2; PassThrough=%3", _hpName, _hpArmor, _hpPass]);
    } forEach ("true" configClasses _hitpointsConfig);
};

private _hitpointsFormatted = if (count _hitpointsStats > 0) then {
    _hitpointsStats joinString "]["
} else {
    "No HitpointsProtectionInfo"
};

// Final formatted text string
private _result = format [
    "%1: Mass=%2; Container=%3; Armor=%4; PassThrough=%5; Hitpoints=[[%6]]",
    _itemToCheck,
    _mass,
    _containerClass,
    _armor,
    _passThrough,
    _hitpointsFormatted
];

// Copy the result to the clipboard and send in the chat
copyToClipboard str _result;
systemChat str _result;
