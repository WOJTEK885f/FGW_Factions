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
            "A3_Characters_F",           // WhiteHead_01 (Olga), G_Bandanna goggles
            "A3_Weapons_F",              // EBR, FirstAidKit
            "CUP_Weapons_WeaponsCore",   // Saiga MK03, DMR mag, Desert Eagle
            "CUP_Weapons_Grenades",      // RGD5 grenades
            "CUP_Weapons_M3A1",          // M3A1 SMG (Coral)
            "rhsgref_c_weapons",         // Panzerfaust 60
            "rhs_main",                  // Flak Vest (Custom)
            "CUP_Creatures_Military_USMC", // Interceptor vest, M1 helmet
            "CUP_Creatures_Military_SLA",  // SLA helmet (Old Helmet)
            "cfp_uniforms",              // CFP_GUER_M81, CFP_GUER_M81Tee
            "cfp_vests"                  // CFP_Tactical1_M81
        };
        units[] = {
            "FGWF_I_CFR_Fighter",
            "FGWF_I_CFR_Grenadier",
            "FGWF_I_CFR_DM",
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
