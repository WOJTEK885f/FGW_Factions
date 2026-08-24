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
            "A3_Weapons_F",
            "CUP_Weapons_WeaponsCore",            // HK416, M16A4, AA12, Colt1911, M9A1
            "CUP_Creatures_Military_USMC",        // Interceptor vests, M1 helmet, ACR backpack
            "CUP_Creatures_Military_Russia",      // Altyn helmet, K6-3 helmet
            "CUP_Creatures_Military_PMC",         // PMC Unit 1 uniform, CIRAS vest
            "rhs_main",                           // M590 shotgun, RHS Vydra vest
            "USP_Gear_Body",                      // USP G3C uniform (Fighter, Marine)
            "USP_Gear_Face",                      // USP balaclava
            "cfp_uniforms",                       // CFP M81Tee, TanTee
            "cfp_vests",                          // CFP Tactical vest
            "cfp_headgear"                        // CFP PASGT helmet
        };
        units[] = {
            "FGW_B_VFF_CivilianFighter",
            "FGW_B_VFF_CivilianFighterCaptain",
            "FGW_B_VFF_Fighter",
            "FGW_B_VFF_Marine",
            "FGW_B_VFF_SpecialPolice",
            "FGW_B_VFF_Companion_Victoria",
            "FGW_B_VFF_Companion_Oksana"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
