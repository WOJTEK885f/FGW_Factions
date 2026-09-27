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
            "gr7bow_fgwf_vests", // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",   // B_Soldier_F, Man_A3, WhiteHead_01
            "A3_Weapons_F",      // Standard kit, SmokeShell, H_Bandanna_sgg
            "CUP_Creatures_Military_PMC",    // PMC Unit 1 uniform, CIRAS vest
            "CUP_Creatures_Military_Russia", // Altyn helmet, K6-3 helmet
            "CUP_Creatures_Military_USMC",   // Interceptor vests, M1 helmet, ACR backpack
            "CUP_Weapons_NVG",               // NVGs (Special Owl, Special Snowfox)
            "CUP_Weapons_WeaponsCore",       // HK416, M16A4, AA12, Colt1911, M9A1
            "cfp_headgear", // CFP PASGT helmet
            "cfp_uniforms", // CFP M81Tee, TanTee
            "cfp_vests",    // CFP Tactical vest
            "rhs_main",      // M590 shotgun, RHS Vydra vest
            "USP_Gear_Body", // USP G3C uniform (Fighter, Marine)
            "USP_Gear_Face"  // USP balaclava
        };
        units[] = {
            "FGWF_B_VFF_FemaleCivilianFighter",
            "FGWF_B_VFF_FemaleCivilianFighterCaptain",
            "FGWF_B_VFF_Fighter",
            "FGWF_B_VFF_Marine",
            "FGWF_B_VFF_SpecialPolice",
            "FGWF_B_VFF_Companion_Victoria",
            "FGWF_B_VFF_Companion_Oksana"
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
