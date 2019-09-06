#define COMPONENT units
#define COMPONENT_BEAUTIFIED Units
#include "\x\tss_mods\addons\main\script_mod.hpp"

#define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE
#define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MAIN
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MAIN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "\x\tss_mods\addons\main\script_macros.hpp"

#ifdef DEBUG_MODE_FULL
    #define IGNOREVERSIONCHECK true
#else
    #define IGNOREVERSIONCHECK false
#endif

#define VERSIONCHECK \
(getText(configFile >> "CfgPatches" >> QUOTE(ADDON) >> "version") != GETPRVAR(GVAR(gearVersion),"") || {IGNOREVERSIONCHECK})

#define INFUNITSETBASE \
faction = "tss_infantry"; \
VEHCLASS("tss_infantry"); \
EMPTYUNIT

#define RECUNITSETBASE \
faction = "tss_infantry"; \
VEHCLASS("tss_recon"); \
EMPTYUNIT

#define SNIPERSETBASE \
faction = "tss_infantry"; \
VEHCLASS("tss_sniper"); \
EMPTYUNIT

#define DIVERUNITSETBASE \
faction = "tss_infantry"; \
VEHCLASS("tss_diver"); \
EMPTYUNIT

#define PILOTSETBASE \
faction = "tss_flightdivision"; \
VEHCLASS("tss_fd"); \
EMPTYUNIT

#define MODSET \
(parsingNamespace getVariable [QGVARMAIN(Modset),""])

#define SAVEVAR(property,var,type) \
"TSS_Savevar_" + \
MODSET + "_" + \
(property) + "_" + (var) + "_" + (type)

#define LOADGEARITEM(property,var,type,default) \
profileNamespace getVariable [ \
    SAVEVAR(property,var,type), \
    default \
]

#define SAVEGEARITEM(property,var,type,data) \
profileNamespace setVariable [ \
    SAVEVAR(property,var,type), \
    data \
]

#define GETITEMGROUP(class) \
profileNamespace getVariable [ \
    "TSS_ItemGroup_" + \
    MODSET + "_" + \
    class, \
    "" \
]
