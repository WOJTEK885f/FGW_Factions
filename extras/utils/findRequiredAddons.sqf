/*
    ====================================================================
    Script: Required Addons List Generator
    Author: WOJTEK885
    Description: Searches the game's config for specified classes (weapons,
                 uniforms, etc.) and returns a list of addons (PBOs) they
                 originate from. Perfect for filling out the CfgPatches
                 section in your mod.

    Usage:
    1. Launch Eden Editor in Arma 3.
    2. Open the Debug Console (ESC).
    3. Paste this script.
    4. Fill the _myClasses array with your classes.
    5. Click "Local Execute".
    6. The generated array will be copied to your clipboard and sent in the system chat.
    ====================================================================
*/

// Enter anything here: weapons, uniforms, balaclavas, voices, magazines
private _myClasses = [
    "Item1",
    "Item2",
    "Item3",
    "Item4"
];

private _requiredAddons = [];
// List of config sections the script will search through
private _categories = ["CfgWeapons", "CfgVehicles", "CfgMagazines", "CfgGlasses", "CfgVoice"];

{
    private _targetClass = _x;
    {
        // Check if the given class exists in this specific category
        if (isClass (configFile >> _x >> _targetClass)) exitWith {
            private _addon = configSourceAddonList (configFile >> _x >> _targetClass);
            if (count _addon > 0) then {
                _requiredAddons pushBackUnique (_addon select 0);
            };
        };
    } forEach _categories;
} forEach _myClasses;

// Copy the result to the clipboard and send in the chat
copyToClipboard str _requiredAddons;
systemChat str _requiredAddons;
