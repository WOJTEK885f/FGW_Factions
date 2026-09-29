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
            "gr7bow_fgwf_uniforms",     // Igor: FGWF_U_PMC_Unit_31
            "gr7bow_fgwf_vests",        // Volodimir: FGWF_V_Flak_Vest_Vydra_3M
            "gr7bow_fgwf_weapons",      // EliteSniper: FGWF_srifle_G22_wdl_sd_lmk4
            "A3_Characters_F",          // Base unit class (O_Soldier_F, Head_NATO)
            "A3_Characters_F_Enoch",    // Igor: LivonianHead_5; Volodimir: WhiteHead_04
            "A3_Characters_F_Heads",    // Face models (Man_A3)
            "A3_Dubbing_Radio_F",       // Base identity class: Language (LanguageENG_F); Volodimir: Male01ENG, Igor: Male02ENG
            "A3_Weapons_F_SMGs_SMG_01", // EliteScout, Igor, Volodimir: SMG_01_F
            "CUP_Creatures_Military_Germany", // Igor: CUP_V_B_JPC_Black_Light
            "CUP_Creatures_Military_Russia",  // EliteStormtrooper: CUP_V_RUS_6B3_4
            "CUP_Creatures_Military_SLA",     // EliteSniper: CUP_H_SLA_Helmet_URB_worn
            "CUP_Creatures_Military_USArmy",  // EliteScout: CUP_H_USArmy_Helmet_Protec
            "CUP_Weapons_Ammunition", // Multiple units - Ammo
            "CUP_Weapons_Deagle",     // EliteSniper, Igor: CUP_hgun_Deagle
            "CUP_Weapons_Grenades",   // EliteScout, EliteStormtrooper, SpecialForce: CUP_HandGrenade_RGD5
            "CUP_Weapons_M240",       // EliteStormtrooper: CUP_lmg_FNMAG_RIS_modern
            "CUP_Weapons_M4",         // SpecialForce: CUP_arifle_HK416_Black
            "CUP_Weapons_NVG",        // EliteScout, EliteSniper, EliteStormtrooper, SpecialForce: CUP_NVG_PVS7
            "cfp_headgear", // EliteStormtrooper: CFP_OPS2017_Helmet_Grey; SpecialForce: SP_PASGTHelmet_Black1
            "cfp_uniforms", // EliteScout, EliteSniper, EliteStormtrooper, SpecialForce: CFP_GUER_PolyDesert
            "cfp_vests",    // EliteSniper: CFP_RAV_Empty_Green; EliteScout: CFP_Tactical1_M81; SpecialForce: SP_Tactical1_Black
            "rhsgref_c_weapons", // EliteScout: rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
            "USP_Gear_Body",     // Volodimir: USP_RUGBY_G3C_BLK_MPW
            "USP_Gear_Face"      // EliteStormtrooper: USP_SOTR; Igor: USP_BEARD_BRN6
        };
        units[] = {
            "FGWF_O_Alpha_SpecialForce",
            "FGWF_O_Alpha_EliteSniper",
            "FGWF_O_Alpha_EliteStormtrooper",
            "FGWF_O_Alpha_EliteScout",
            "FGWF_O_Alpha_Companion_Volodimir",
            "FGWF_O_Alpha_Companion_Igor"
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
