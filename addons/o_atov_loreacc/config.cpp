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
            "gr7bow_fgwf_uniforms",  // FGWF_U_PMC_Unit_1, FGWF_U_PMC_Unit_35, FGWF_U_USMC_FROG3_WMARPAT
            "A3_Characters_F",       // Man_A3, WhiteHead_04, WhiteHead_01, Head_Euro
            "A3_Characters_F_Enoch", // Head_Russian, LivonianHead_5, RussianMen
            "A3_Weapons_F",          // Standard kit, SmokeShell, SMG_01_F, 30Rnd_45ACP_Mag_SMG_01
            "CUP_Creatures_Military_PMC",    // Infantry: Vest, SpecialForce: Uniform(Custom)
            "CUP_Creatures_Military_Russia", // Infantry: Balaclava, Machinegunner: Helmet
            "CUP_Creatures_Military_USArmy", // Machinegunner: Vest
            "CUP_Creatures_Military_USMC",   // Infantry, Machinegunner: Uniform(Custom), SpecialForce: Vest, Sharpshooter: Headgear
            "CUP_Weapons_WeaponsCore",      // Shared base classes for CUP_Weapons_*
            "CUP_Weapons_East_Attachments", // Weapon attachments
            "CUP_Weapons_NVG",              // NVGs
            "cfp_headgear", // Scout, ArmedPolice, Commando, SpecialForce: Helmet
            "cfp_uniforms", // Scout, ArmedPolice, Commando, Sharpshooter: Uniform
            "cfp_vests",    // Scout, ArmedPolice, Commando, Sharpshooter: Vest
            "rhs_main",         // Flak Vest (Custom)
            "rhsgref_c_weapons" // Panzerfaust 60, M3A1
        };
        units[] = {
            "FGWF_O_Atov_Infantry",
            "FGWF_O_Atov_Machinegunner",
            "FGWF_O_Atov_Sharpshooter",
            "FGWF_O_Atov_SpecialForce",
            "FGWF_O_Atov_ArmedPolice",
            "FGWF_O_Atov_Commando",
            "FGWF_O_Atov_Scout",
            "FGWF_O_Atov_Companion_Dimitro",
            "FGWF_O_Atov_Companion_Kostyantin",
            "FGWF_O_Atov_Companion_Oleg",
            "FGWF_O_Atov_Companion_Vitaly"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"

#include "CfgIdentities.hpp"
#include "CfgFaces.hpp"

#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
