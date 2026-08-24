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
            "A3_Characters_F",
            "A3_Characters_F_Enoch",
            "A3_Weapons_F",
            "sp_fwa_thompson",
            "CUP_Weapons_WeaponsCore",
            "CUP_Weapons_East_Attachments",
            "CUP_Weapons_NVG",
            "rhsgref_c_weapons", // Panzerfaust 60
            "rhs_main", // Flak Vest (Custom)
            "CUP_Creatures_Military_PMC", // Infantry: Vest, SpecialForce: Uniform(Custom)
            "CUP_Creatures_Military_USMC", // Infantry, Machinegunner: Uniform(Custom), SpecialForce: Vest, Sharpshooter: Headgear
            "CUP_Creatures_Military_Russia", // Infantry: Balaclava, Machinegunner: Helmet
            "CUP_Creatures_People_Civil_Chernarus", // Machinegunner: Vest
            "cfp_uniforms", // Scout, ArmedPolice, Commando, Sharpshooter: Uniform
            "cfp_vests", // Scout, ArmedPolice, Commando, Sharpshooter: Vest
            "cfp_headgear" // Scout, ArmedPolice, Commando, SpecialForce: Helmet
        };
        units[] = {
            "FGWF_O_Atov_Infantry",
            "FGWF_O_Atov_Machinegunner",
            "FGWF_O_Atov_ArmedPolice",
            "FGWF_O_Atov_Scout",
            "FGWF_O_Atov_Commando",
            "FGWF_O_Atov_Sharpshooter",
            "FGWF_O_Atov_SpecialForce",
            "FGWF_O_Atov_Companion_Vitaly",
            "FGWF_O_Atov_Companion_Kostyantin",
            "FGWF_O_Atov_Companion_Oleg",
            "FGWF_O_Atov_Companion_Dimitro"
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
