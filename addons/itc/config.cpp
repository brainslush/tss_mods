#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {
            "tss_b_uav_02",
            "tss_b_uav_05",
            "tss_b_uav_01"
        };
        weapons[] = {};
        requiredAddons[] = {
            "tss_mods_main",
            "itc_land_common",
            "itc_land_veh_darter"
        };
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgVehicles.hpp"
