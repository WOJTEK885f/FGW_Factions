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
            "gr7bow_fgwf_uniforms",             // Haaken: FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2
            "gr7bow_fgwf_vests",                // Finn, Haaken: FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",                  // Base unit class (O_Soldier_F, Head_Greek, Head_TK); Multiple units - Uniform (U_C_Uniform_Scientist_02_formal_F); Terrorist_AK74M, Terrorist_AKS74U: G_Bandanna_blk
            "A3_Characters_F_Enoch",            // Haaken: RussianHead_3
            "A3_Characters_F_Heads",            // Face models (Man_A3)
            "A3_Dubbing_Radio_F_ENGB",          // Finn: Male04ENGB
            "A3_Dubbing_Radio_F_PER",           // Base identity class: Language (LanguagePER_F)
            "A3_Weapons_F_LongRangeRifles_EBR", // Haaken: srifle_EBR_F
            "CUP_Creatures_Military_USArmy", // Militant_AK12, Militant_AK74M: CUP_G_Scarf_Face_Red; Terrorist_AK74M, Terrorist_AKS74U: CUP_V_B_Interceptor_Rifleman_M81
            "CUP_Creatures_Military_USMC",   // Militant_AK12, Militant_AK74M: CUP_V_CPC_Fastbelt_rngr
            "CUP_Dubbing_Radio_EN_c",        // Haaken: CUP_D_Male05_EN
            "CUP_Dubbing_Radio_TK_c",        // Base identity class: Language (CUP_D_Language_TK)
            "CUP_Weapons_AK",         // Militant_AK12: CUP_arifle_AK12_black; Militant_AK74M, Terrorist_AK74M: CUP_arifle_AK74M; Terrorist_AKS74U: CUP_arifle_AKS74U_top_rail
            "CUP_Weapons_Ammunition", // Multiple units - Ammo
            "CUP_Weapons_Deagle",     // Terrorist_AK74M, Terrorist_AKS74U: CUP_hgun_Deagle
            "CUP_Weapons_Grenades",   // Terrorist_AK74M, Terrorist_AKS74U: CUP_HandGrenade_RGD5
            "CUP_Weapons_M17",        // Militant_AK12, Militant_AK74M: CUP_hgun_M17_Black
            "CUP_Weapons_M4",         // Finn: CUP_arifle_M16A4_Base
            "CUP_Weapons_M9",         // Finn: CUP_hgun_M9A1
            "cfp_protocols", // Base identity class: Language (Language_Ackbar)
            "cfp_uniforms",  // Finn: CFP_GUER_M81Tee
            "rhsgref_c_weapons"  // Terrorist_AK74M, Terrorist_AKS74U: rhs_panzerfaust60_mag, rhs_weap_panzerfaust60
        };
        units[] = {
            "FGWF_O_Uman_Terrorist_AK74M",
            "FGWF_O_Uman_Terrorist_AKS74U",
            "FGWF_O_Uman_Militant_AK12",
            "FGWF_O_Uman_Militant_AK74M",
            "FGWF_O_Uman_Companion_Finn",
            "FGWF_O_Uman_Companion_Haaken"
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
