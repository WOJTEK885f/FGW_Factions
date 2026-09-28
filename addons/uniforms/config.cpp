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
            "A3_Characters_F",    // C_Marshal_F, U_Marshal, Uniform_Base
            "A3_Weapons_F",       // ItemCore, ItemInfo
            "A3_Weapons_F_Items", // InventoryItem_Base_F, UniformItem
            "CUP_Creatures_Military_PMC",           // CUP_I_B_PMC_Unit_1, CUP_I_B_PMC_Unit_31, CUP_I_B_PMC_Unit_35, CUP_I_PMC_Soldier_01, CUP_I_PMC_Soldier_31, CUP_I_PMC_Soldier_35
            "CUP_Creatures_Military_USMC",          // CUP_B_USMC_Soldier_14, CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2, CUP_B_USMC_Soldier_MCCUU_MARPAT_M81, CUP_U_B_USMC_FROG3_WMARPAT, CUP_U_B_USMC_MCCUU, CUP_U_B_USMC_MCCUU_M81_MARPAT, CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2, CUP_U_B_USMC_MCCUU_MARPAT_M81
            "CUP_Creatures_People_Civil_Chernarus"  // CUP_C_UWorker_02, CUP_U_C_Worker_01, CUP_U_C_Worker_02
        };
        units[] = {};
        weapons[] = {
            "FGWF_U_C_Worker_02",
            "FGWF_U_Marshal",
            "FGWF_U_PMC_Unit_1",
            "FGWF_U_PMC_Unit_31",
            "FGWF_U_PMC_Unit_35",
            "FGWF_U_USMC_FROG3_WMARPAT",
            "FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2",
            "FGWF_U_USMC_MCCUU_MARPAT_M81"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
