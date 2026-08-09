/*
    ====================================================================
    Script: Armor, Load and Mass Stats Checker
    Author: WOJTEK885
    Description: Fetches the 'armor', 'passThrough', 'containerClass' and 'mass'
                 configuration stats for specified item such as uniform / vest / helmet.

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

private _armor = getNumber (configFile >> "CfgWeapons" >> _itemToCheck >> "ItemInfo" >> "armor");
private _passThrough = getNumber (configFile >> "CfgWeapons" >> _itemToCheck >> "ItemInfo" >> "passThrough");
private _containerClass = getText (configFile >> "CfgWeapons" >> _itemToCheck >> "ItemInfo" >> "containerClass");
private _mass = getNumber (configFile >> "CfgWeapons" >> _itemToCheck >> "ItemInfo" >> "mass");

private _result = format ["%1: Armor=%2, Pass Through=%3, Container Class=%4, Mass=%5", _itemToCheck, _armor, _passThrough, _containerClass, _mass];

// Copy the result to the clipboard and send in the chat
copyToClipboard str _result;
systemChat str _result;
