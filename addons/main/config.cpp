#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = CSTRING(url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        units[] = {};
        weapons[] = {
            "FGW_U_USMC_FROG3_WMARPAT",
            "FGW_U_PMC_Unit_35",
            "FGW_U_PMC_Unit_1",
            "FGW_U_USMC_MCCUU_M81_MARPAT_roll_2",
            "FGW_V_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
