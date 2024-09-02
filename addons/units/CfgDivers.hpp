class tss_diver_operator: tss_recon_operator {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Operator";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"rebreather"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",1},
        {"markerred",1},
        {"primarymagazines",{"weight", 60}},
        {"grenades",2},
        {"markerevac",1}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_gl: tss_recon_gl {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Grendier";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"grenadier"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT    
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",1},
        {"markerred",1},
        {"primarymagazines",{"weight", 60}},
        {"grenades",2},
        {"markerevac",1},
        {"primarygrenades",16},
        {"huntirmonitor",1},
        {"huntirgrenade",3},
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_tl: tss_recon_tl {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassCls.hpp"
    };

    displayName = "Recon Diver Teamleader";
    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",1},
        {"markerred",1},
        {"primarymagazines",{"weight", 60}},
        {"grenades",2},
        {"markerevac",1},
        "anprc152",
        laserbatteries,
        {"primarygrenades",16},
        {"huntirmonitor",1},
        {"huntirgrenade",3},
        "eplrs"
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_ar: tss_recon_ar {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Automatic Rifleman";

    tss_primaries[] = {"ar"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"rebreather"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",1},
        {"markerred",1},
        {"grenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 140}},
        {"markerevac",1}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_com: tss_recon_com {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Communication Officer";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",2},
        {"markerred",1},
        {"grenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 60}},
        {"grenades",2},
        {"markerevac",1},
        "anprc152",
        {"primarygrenades",10},
        "anprc117",
        {"huntirmonitor",1},
        {"huntirgrenade",3}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_exp: tss_recon_exp {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Explosive Specialist";
    
    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"rebreather"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",1},
        {"markerred",1},
        {"grenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 60}},
        {"grenades",2},
        {"markerevac",1},
        "expkit"
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_drop: tss_recon_drop {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Drone Operator";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"rebreather"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",2},
        {"markerred",1},
        {"grenades",1},
        {"markerevac",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 80}},
        {"grenades",1},
        "anprc152",
        "darterBlufor"
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"uavterminalB"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_cls: tss_recon_cls {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Combat Medic";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"medic"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",2},
        {"markerred",1},
        {"grenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 60}},
        {"grenades",1},
        {"markerevac",1},
        "medkitclsbravo",
        {"smokewhite",4}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_mm: tss_recon_mm {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Marksman";

    tss_primaries[] = {"dmr"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",2},
        {"markerred",1},
        {"grenades",1},
        "dmrkit"
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 80}},
        {"grenades",2},
        {"markerevac",1}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_sniper: tss_recon_sniper {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Sniper";

    tss_primaries[] = {"sniper"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",2},
        {"markerred",1},
        {"grenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        "sniperkit",
        {"primarymagazines",{"weight", 80}},
        {"grenades",2},
        {"markerevac",1}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_diver_engineer: tss_recon_engineer {
    TSSAUTHOR
    DIVERUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Recon Diver Engineer";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"wetsuit"};
    tss_vests[] = {"rebreather"};
    tss_backpacks[] = {"large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2},
        "anprc148",
        {"secondarymagazines",2},
        {"markerred",1},
        {"grenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] = {
        {"primarymagazines",{"weight", 60}},
        {"grenades",2},
        {"markerevac",1},
        "engineerkit"
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"diver"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
