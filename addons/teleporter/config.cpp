#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {"TSS_Helper_MissionTeleporter"};
        weapons[] = {};
        requiredAddons[] = {"tss_mods_main"};
        author = "brainslush";
    };
};

#include "CfgEden.hpp"
#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"
