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
            "A3_Characters_F_Enoch",
            "A3_Weapons_F",
            "CUP_Weapons_WeaponsCore",
            "CUP_Weapons_NVG",
            "USP_Gear_Body", // All units: Uniforms
            "USP_Gear_Face", // Tatuana: Balaclava
            "CUP_Creatures_Military_CDF", // Sniper Elite: Vest
            "CUP_Creatures_Military_USMC", // Commando: Vest
            "CUP_Creatures_Military_Russia", // Fighter: Balaclava
            "cfp_vests", // Fighter: Vest
            "cfp_headgear", // Commando, Sniper Elite: Helmet
            "cfp_uniforms", // Denis: Uniform
            "rhs_main" // Denis, Tatyana: Vest
        };
        units[] = {
            "FGW_B_Pozna_Fighter",
            "FGW_B_Pozna_Commando",
            "FGW_B_Pozna_SniperElite",
            "FGW_B_Pozna_Companion_Roman",
            "FGW_B_Pozna_Companion_Yuriy",
            "FGW_B_Pozna_Companion_Denis",
            "FGW_B_Pozna_Companion_Tatyana"
        };
        weapons[] = {
            "FGW_V_B_Flak_Vest_Vydra_3M"
        };
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
