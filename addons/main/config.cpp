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
            "FGW_U_O_USMC_FROG3_WMARPAT_ATOV",
            "FGW_U_O_PMC_Unit_35_ATOV",
            "FGW_U_O_PMC_Unit_1_ATOV",
            "FGW_U_O_USMC_MCCUU_M81_MARPAT_roll_2_UMAN",
            "FGW_V_B_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgSettings.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgFaces.hpp"
#include "CfgWeapons.hpp"
