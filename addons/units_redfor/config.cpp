#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "tss_mods_main",
            "tss_mods_units"
        };
    };
};

#include "CfgVehicles.hpp"
#include "CfgTSSLoadouts.hpp"
