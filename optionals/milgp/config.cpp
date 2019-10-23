#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = "brainslush";
        requiredVersion = REQUIRED_VERSION;
        VERSION_CONFIG;
        units[] = {};
        weapons[] = {"milgp_u_fleece_khk_g3_field_pants_rgr"};
        requiredAddons[] = {
            QGVARMAIN(main),
            QGVARMAIN(units),
            "milgp_uniforms_cfg",
            "milgp_vests_cfg"
        };
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgTSSLoadouts.hpp"
