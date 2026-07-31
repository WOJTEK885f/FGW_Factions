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
            "CUP_Weapons_WeaponsCore",
            "CUP_Weapons_NVG",
            "CUP_Creatures_Military_CDF", // Sniper Elite: Vest
            "CUP_Creatures_Military_USMC", // Commando: Vest
            "USP_Gear_Body", // All units: Uniforms
            "cfp_vests", // Fighter: Vest
            "cfp_headgear" // Commando: Helmet
        };
        units[] = {
            "FGW_B_Pozna_Fighter",
            "FGW_B_Pozna_Commando",
            "FGW_B_Pozna_SniperElite"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
