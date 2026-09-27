#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gr7bow_fgwf_main",
            "rhs_main"          // Vydra-3M vest
        };
        units[] = {};
        weapons[] = {
            "FGWF_V_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
