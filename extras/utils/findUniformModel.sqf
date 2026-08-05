/*
    ====================================================================
    Script: Uniform Class Checker
    Author: WOJTEK885
    Description: Quickly checks what dummy unit (model) is assigned
                 to a specific uniform item in the config.
    ====================================================================
*/

// Enter the uniform class you want to check here
private _uniformToCheck = "CUP_I_B_PMC_Unit_35";

private _result = getText (configFile >> "CfgWeapons" >> _uniformToCheck >> "ItemInfo" >> "uniformClass");

// Copy the result to the clipboard and send in the chat
copyToClipboard str _result;
systemChat str _result;
