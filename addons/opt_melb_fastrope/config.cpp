#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
        requiredAddons[] = {
            QGVARMAIN(main),
            "MELB",
            "ace_fastroping"
        };
    };
};

class Mode_FullAuto;

#include "CfgVehicles.hpp"
