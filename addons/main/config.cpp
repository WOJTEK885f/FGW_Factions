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
            "FGWF_U_USMC_FROG3_WMARPAT",
            "FGWF_U_PMC_Unit_35",
            "FGWF_U_PMC_Unit_1",
            "FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2",
            "FGWF_V_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
