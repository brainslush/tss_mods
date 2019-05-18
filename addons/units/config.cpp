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
        };
    };
};

#include "CfgEden.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgTSSLoadouts.hpp"
#include "CfgVehicles.hpp"
