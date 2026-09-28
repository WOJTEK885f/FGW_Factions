#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "gr7bow_fgwf_main",
            "A3_Characters_F",    // Supply80
            "A3_Weapons_F_Items", // VestItem
            "rhs_c_troops"  // rhs_vydra_3m
        };
        units[] = {};
        weapons[] = {
            "FGWF_V_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
