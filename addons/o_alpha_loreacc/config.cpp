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
            "gr7bow_fgwf_uniforms",      // FGWF_U_PMC_Unit_31
            "gr7bow_fgwf_vests",         // FGWF_V_Flak_Vest_Vydra_3M
            "gr7bow_fgwf_weapons",       // FGWF_srifle_G22_wdl_sd_lmk4
            "A3_Characters_F",
            "A3_Characters_F_Enoch",
            "A3_Weapons_F",              // Binocular, Vector, Stanag mags, SmokeShell
            "CUP_Weapons_WeaponsCore",   // HK416, Desert Eagle, Leupold Mk4, Stanag mags
            "CUP_Weapons_AWM",           // G22, AWM silencer (Elite Sniper)
            "CUP_Weapons_M240",          // FN MAG (Elite Stormtrooper)
            "CUP_Weapons_Grenades",      // RGD5 grenades
            "CUP_Weapons_NVG",           // NVGs (all units)
            "rhsgref_c_weapons",         // Panzerfaust 60 (Elite Scouts)
            "CUP_Creatures_Military_Germany", // Igor: Light Black Vest
            "CUP_Creatures_Military_SLA",     // Old Helmet (Elite Sniper)
            "CUP_Creatures_Military_USArmy",  // Bike Helmet (Elite Scouts)
            "CUP_Creatures_Military_USMC",    // Interceptor helmet (Elite Scouts)
            "CUP_Creatures_Military_Russia",  // 6B3-4 vest (Elite Stormtrooper)
            "cfp_uniforms",              // Poly Desert uniform (all units)
            "cfp_vests",                 // RAV vest, M81 tactical vest, heavy tactical vest
            "cfp_headgear",              // OPS 2017 helmet, PASGT helmet
            "USP_Gear_Body",             // Volodimir: Uniform
            "USP_Gear_Face"              // Igor: Beard
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
