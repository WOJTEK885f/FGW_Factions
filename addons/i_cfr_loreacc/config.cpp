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
            "gr7bow_fgwf_uniforms",  // FGWF_U_C_Worker_02, FGWF_U_USMC_MCCUU_MARPAT_M81
            "gr7bow_fgwf_vests",     // FGWF_V_Flak_Vest_Vydra_3M
            "A3_Characters_F",       // Man_A3, WhiteHead_01
            "A3_Characters_F_Enoch", // Head_Russian, Head_Enoch, RussianMen
            "A3_Weapons_F",          // Standard kit, SmokeShell
            "CUP_Creatures_Military_PMC",           // PMC uniforms (Riflemen/SMG), CIRAS vest (Sniper)
            "CUP_Creatures_Military_Russia",        // K6-3 (Steel Helmet)
            "CUP_Creatures_Military_SLA",           // SLA helmet (Old Helmet)
            "CUP_Creatures_Military_USMC",          // Interceptor vest, M1 helmet, Protec (Bike Helmet), MCCUU
            "CUP_Creatures_People_Civil_Chernarus", // Worker_02 uniform, Police_Holster vest (Villager, Olga)
            "CUP_Weapons_Grenades",                 // RGD5 grenades
            "CUP_Weapons_M3A1",                     // M3A1 SMG (Coral)
            "CUP_Weapons_WeaponsCore",              // Saiga MK03, DMR mag, Desert Eagle
            "cfp_headgear", // CFP_BoonieHat_M81, SP_Bandana_Black, SP_BoonieHat_Tan
            "cfp_uniforms", // CFP_GUER_M81, CFP_GUER_M81Tee
            "cfp_vests",    // CFP_Tactical1_M81
            "rhs_main",         // Flak Vest (Custom)
            "rhsgref_c_weapons" // Panzerfaust 60
        };
        units[] = {
            "FGWF_I_CFR_Fighter",
            "FGWF_I_CFR_Grenadier",
            "FGWF_I_CFR_DM",
            "FGWF_I_CFR_MilitiaRifleman_Light",
            "FGWF_I_CFR_MilitiaRifleman_OldHelmet",
            "FGWF_I_CFR_MilitiaRifleman_SteelHelmet",
            "FGWF_I_CFR_MilitiaRifleman_BikeHelmet",
            "FGWF_I_CFR_MilitiaSMGFighter",
            "FGWF_I_CFR_MilitiaSniper",
            "FGWF_I_CFR_MaleVillager",
            "FGWF_I_CFR_Companion_Olga"
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
