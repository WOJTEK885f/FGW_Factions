#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gr7bow_fgw_factions_main",
            "A3_Characters_F",
            "A3_Weapons_F",
            "sp_fwa_thompson",
            "CUP_Weapons_WeaponsCore",
            "CUP_Weapons_East_Attachments",
            "CUP_Weapons_NVG",
            "rhsgref_c_weapons", // Panzerfaust 60
            "CUP_Creatures_Military_PMC", // Infantry: Vest, SpecialForce: Uniform(Custom)
            "CUP_Creatures_Military_USMC", // Infantry, Machinegunner: Uniform(Custom), SpecialForce: Vest, Sharpshooter: Headgear
            "CUP_Creatures_Military_Russia", // Infantry: Balaclava, Machinegunner: Helmet
            "CUP_Creatures_People_Civil_Chernarus", // Machinegunner: Vest
            "cfp_uniforms", // Scout, ArmedPolice, Commando, Sharpshooter: Uniform
            "cfp_vests", // Scout, ArmedPolice, Commando, Sharpshooter: Vest
            "cfp_headgear" // Scout, ArmedPolice, Commando, SpecialForce: Helmet
        };
        units[] = {
            "FGW_O_Atov_Infantry",
            "FGW_O_Atov_Machinegunner",
            "FGW_O_Atov_ArmedPolice",
            "FGW_O_Atov_Scout",
            "FGW_O_Atov_Commando",
            "FGW_O_Atov_Sharpshooter",
            "FGW_O_Atov_SpecialForce",
            "FGW_O_Atov_Companion_Vitaly",
            "FGW_O_Atov_Companion_Kostyantin",
            "FGW_O_Atov_Companion_Oleg",
            "FGW_O_Atov_Companion_Dimitro"
        };
        weapons[] = {
            "FGW_U_O_USMC_FROG3_WMARPAT_ATOV",
            "FGW_U_O_PMC_Unit_35_ATOV"
        };
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
