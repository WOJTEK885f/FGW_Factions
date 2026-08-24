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
            "CUP_Weapons_WeaponsCore",
            "CUP_Weapons_AK",          // AK12, AK74M, AKS74U
            "rhsgref_c_weapons",        // Panzerfaust 60
            "CUP_Creatures_Military_USMC", // Terrorist: Vest, Militant: Vest
            "CUP_Creatures_Military_Russia" // Scarf
        };
        units[] = {
            "FGWF_O_Uman_Militant_AK12",
            "FGWF_O_Uman_Militant_AK74M",
            "FGWF_O_Uman_Terrorist_AK74M",
            "FGWF_O_Uman_Terrorist_AKS74U"
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
