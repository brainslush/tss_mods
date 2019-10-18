#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {
            "TSS_Radio_Rack",
            "tss_acre_antenna"
        };
        weapons[] = {};
        requiredAddons[] = {
            "tss_mods_main",
            "acre_main",
            "acre_api"
        };
    };
};

//#include "CfgVehicles.hpp"
