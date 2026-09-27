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
            "gr7bow_fgwf_vests",     // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",       // B_Soldier_F, Man_A3, WhiteHead_01, Head_Euro
            "A3_Characters_F_Enoch", // Head_Russian, Head_Enoch, LivonianHead_3/10, RussianMen
            "A3_Weapons_F",          // Standard kit, SmokeShell
            "CUP_Creatures_Military_CDF",    // Sniper Elite: Vest
            "CUP_Creatures_Military_Russia", // Fighter: Balaclava
            "CUP_Creatures_Military_USMC",   // Commando: Vest
            "CUP_Weapons_NVG",               // NVGs
            "CUP_Weapons_WeaponsCore",       // Shared base classes for CUP_Weapons_*
            "cfp_headgear", // Commando, Sniper Elite: Helmet
            "cfp_uniforms", // Denis: Uniform
            "cfp_vests",    // Fighter: Vest
            "rhs_main",      // Denis, Tatyana: Vest
            "USP_Gear_Body", // All units: Uniforms
            "USP_Gear_Face"  // Tatuana: Balaclava
        };
        units[] = {
            "FGWF_B_Pozna_Fighter",
            "FGWF_B_Pozna_Commando",
            "FGWF_B_Pozna_SniperElite",
            "FGWF_B_Pozna_Companion_Roman",
            "FGWF_B_Pozna_Companion_Yuriy",
            "FGWF_B_Pozna_Companion_Denis",
            "FGWF_B_Pozna_Companion_Tatyana"
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
