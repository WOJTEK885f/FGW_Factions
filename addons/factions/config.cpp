#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "gr7bow_fgw_factions_main",
            "A3_Characters_F"
        };
        units[] = {
            QGVAR(Pozna_Rifleman)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
