/*
    ====================================================================
    Script: Uniform Class Checker
    Author: WOJTEK885
    Description: Quickly checks what dummy unit (model) is assigned
                 to a specific uniform item in the config.

    Usage:
    1. Launch Eden Editor in Arma 3.
    2. Open the Debug Console (ESC).
    3. Paste this script.
    4. Click "Local Execute".
    5. The generated string will be copied to your clipboard and sent in the system chat.
    ====================================================================
*/

// Enter the uniform class you want to check here
private _uniformToCheck = "UniformClassname";

private _result = getText (configFile >> "CfgWeapons" >> _uniformToCheck >> "ItemInfo" >> "uniformClass");

// Copy the result to the clipboard and send in the chat
copyToClipboard str _result;
systemChat str _result;
