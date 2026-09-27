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
            "gr7bow_fgwf_uniforms",      // FGWF_U_Marshal, FGWF_U_PMC_Unit_1, FGWF_U_C_Worker_02
            "gr7bow_fgwf_vests",         // FGWF_V_Flak_Vest_Vydra_3M
            "gr7bow_fgwf_weapons",       // FGWF_srifle_AWM_blk_sd
            "A3_Characters_F",
            "A3_Characters_F_Enoch",     // LivonianHead_3, LivonianHead_7, LivonianHead_10, WhiteHead_31
            "A3_Weapons_F",              // EBR, FirstAidKit
            "CUP_Weapons_WeaponsCore",   // M14, Scorpion EVO, Stanag mags, SVD, AUG, M9A1, Glock 17 mags
            "CUP_Weapons_Grenades",      // RGD5 grenades
            "CUP_Weapons_M240",          // FN MAG (Special Rattlesnake)
            "CUP_Weapons_AWM",           // L115A1 AWM (Trained Marksman)
            "CUP_Weapons_NVG",           // NVGs (Special Owl, Special Snowfox)
            "CUP_Creatures_Military_USMC",    // Interceptor vest, Protec helmet (Bike Helmet)
            "CUP_Creatures_Military_SLA",     // Old Helmet
            "CUP_Creatures_Military_Russia",  // K6-3 helmet (Steel Helmet), Altyn helmet
            "CUP_Creatures_Military_PMC",     // PMC uniforms, CIRAS vest, Georgiy: Unit 11 tee
            "CUP_Creatures_Military_Germany", // ArmedBodyguard: Light Black Vest
            "USP_Gear_Body",             // USP PCU uniform (Armed Escort Guard), Rugby G3C (Petro, Sergei)
            "USP_Gear_Face",             // USP FM-12 gas mask, Oakley, SOTR, shemagh
            "rhs_main",                  // M590 shotgun (Yevgen)
            "rhsgref_c_weapons",         // M3A1 placeholder SMG (Armed Escort Guard Thompson)
            "rhsgref_c_troops",          // Patrol cap (Trained Marksman)
            "cfp_uniforms",              // CFP_GUER_M81, CFP_GUER_M81Tee
            "cfp_vests",                 // CFP_Tactical1_M81
            "cfp_headgear",              // SP_M1Helmet M1 helmet (MP Helmet)
            "cfp_glasses"                // CFP Neck gaiters (Trained units)
        };
        units[] = {
            "FGWF_B_Player_ArmedBodyguard",
            "FGWF_B_Player_MilitiaRifleman_Light",
            "FGWF_B_Player_MilitiaRifleman_OldHelmet",
            "FGWF_B_Player_MilitiaRifleman_SteelHelmet",
            "FGWF_B_Player_MilitiaRifleman_BikeHelmet",
            "FGWF_B_Player_MilitiaSniper",
            "FGWF_B_Player_MilitiaSMGFighter",
            "FGWF_B_Player_MaleVillager",
            "FGWF_B_Player_FemaleMilitia_TT33",
            "FGWF_B_Player_FemaleMilitia_M1911",
            "FGWF_B_Player_ArmedEscortGuard_M1A1",
            "FGWF_B_Player_ArmedEscortGuard_MP5",
            "FGWF_B_Player_ArmedEscortGuard_SPAS12",
            "FGWF_B_Player_FemaleVillager",
            "FGWF_B_Player_FemaleCivilianFighter",
            "FGWF_B_Player_FemaleCivilianFighterCaptain",
            "FGWF_B_Player_TrainedInfantry",
            "FGWF_B_Player_TrainedMarksman",
            "FGWF_B_Player_Spetsnaz",
            "FGWF_B_Player_SpecialSealion",
            "FGWF_B_Player_SpecialOwl",
            "FGWF_B_Player_SpecialRattlesnake",
            "FGWF_B_Player_SpecialScorpion",
            "FGWF_B_Player_SpecialCheetah",
            "FGWF_B_Player_SpecialWolf",
            "FGWF_B_Player_SpecialSnowfox",
            "FGWF_B_Player_SpecialVulture",
            "FGWF_B_Player_Companion_Ivan",
            "FGWF_B_Player_Companion_Yevgen",
            "FGWF_B_Player_Companion_Georgiy",
            "FGWF_B_Player_Companion_Petro",
            "FGWF_B_Player_Companion_Sergei"
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
