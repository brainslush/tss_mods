#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"tss_mods_main"};
        author = "brainslush";
    };
};

#include "CfgFatigue.hpp"
#include "CfgInventoryGlobalVariable.hpp"
