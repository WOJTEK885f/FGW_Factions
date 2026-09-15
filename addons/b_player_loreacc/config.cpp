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
            "CUP_Creatures_Military_USMC", // Interceptor vest
            "CUP_Creatures_Military_SLA",  // Old Helmet
            "cfp_uniforms",              // CFP_GUER_M81, CFP_GUER_M81Tee
            "cfp_vests"                  // CFP_Tactical1_M81
        };
        units[] = {
            "FGWF_B_Player_MilitiaRifleman",
            "FGWF_B_Player_MilitiaSniper",
            "FGWF_B_Player_MilitiaSMGFighter",
            "FGWF_B_Player_MaleVillager"
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
