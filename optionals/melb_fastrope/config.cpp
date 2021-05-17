#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            QGVARMAIN(main),
            "MELB",
            "ace_fastroping"
        };
    };
};

class Mode_FullAuto;

#include "CfgVehicles.hpp"
