#define COMPONENT units
#define COMPONENT_BEAUTIFIED Units
#include "\x\tss_mods\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_MAIN
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MAIN
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "\x\tss_mods\addons\main\script_macros.hpp"

#define VEHCLASS(var) \
    vehicleClass = var; \
    editorSubcategory = var

#define EMPTYUNIT \
    uniformClass = ""; \
    backpack = ""; \
    weapons[] = {}; \
    magazines[] = {}; \
    items[] = {}; \
    linkedItems[] = {}; \
    respawnWeapons[] = {}; \
    respawnMagazines[] = {}; \
    respawnItems[] = {}; \
    respawnLinkedItems[] = {};

#define INFUNITSETBASE \
    faction = "tss_infantry"; \
    VEHCLASS("tss_infantry"); \
    EMPTYUNIT

#define RECUNITSETBASE \
    faction = "tss_infantry"; \
    VEHCLASS("tss_recon"); \
    EMPTYUNIT

#define DIVERUNITSETBASE \
    faction = "tss_infantry"; \
    VEHCLASS("tss_recondiver"); \
    EMPTYUNIT
