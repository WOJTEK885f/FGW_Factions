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
            "CUP_Weapons_WeaponsCore",   // M14, Scorpion EVO
            "CUP_Weapons_Grenades",      // RGD5 grenades
            "CUP_Creatures_Military_USMC", // Interceptor vest, Protec helmet (Bike Helmet)
            "CUP_Creatures_Military_SLA",  // Old Helmet
            "CUP_Creatures_Military_Russia", // K6-3 helmet (Steel Helmet)
            "CUP_Creatures_Military_PMC",   // PMC uniforms, CIRAS vest
            "USP_Gear_Body",             // USP PCU uniform (Armed Escort Guard)
            "rhs_main",                  // M590 shotgun
            "rhsgref_c_weapons",         // M3A1 placeholder SMG (Armed Escort Guard Thompson)
            "cfp_uniforms",              // CFP_GUER_M81, CFP_GUER_M81Tee
            "cfp_vests",                 // CFP_Tactical1_M81
            "cfp_headgear"               // SP_M1Helmet M1 helmet (MP Helmet)
        };
        units[] = {
            "FGWF_B_Player_MilitiaRifleman_Light",
            "FGWF_B_Player_MilitiaRifleman_OldHelmet",
            "FGWF_B_Player_MilitiaRifleman_SteelHelmet",
            "FGWF_B_Player_MilitiaRifleman_BikeHelmet",
            "FGWF_B_Player_MilitiaSniper",
            "FGWF_B_Player_MilitiaSMGFighter",
            "FGWF_B_Player_MaleVillager",
            "FGWF_B_Player_ArmedBodyguard",
            "FGWF_B_Player_ArmedEscortGuard_M1A1",
            "FGWF_B_Player_ArmedEscortGuard_MP5",
            "FGWF_B_Player_ArmedEscortGuard_SPAS12",
            "FGWF_B_Player_FemaleMilitia_TT33",
            "FGWF_B_Player_FemaleMilitia_M1911",
            "FGWF_B_Player_FemaleVillager",
            "FGWF_B_Player_FemaleCivilianFighter",
            "FGWF_B_Player_FemaleCivilianFighterCaptain"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
