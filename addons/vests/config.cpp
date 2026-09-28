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
            "A3_Characters_F", // Supply80 (vest container class)
            "A3_Weapons_F",    // VestItem
            "rhs_main"  // Vydra-3M vest
        };
        units[] = {};
        weapons[] = {
            "FGWF_V_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
