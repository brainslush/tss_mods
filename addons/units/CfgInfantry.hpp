class tss_infantry_soldier: B_soldier_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Rifleman";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_sc: B_soldier_SL_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Section Commander (SC)";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"primarygrenades",4},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarygrenades",4}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_2ic: B_soldier_TL_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Second In Command (2IC)";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"primarygrenades",4},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarygrenades",4}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_ar: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Automatic Rifleman 5.56";

    tss_primaries[] = {"ar"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",3},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarymagazines",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_lmg: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Light Machinegunner";

    tss_primaries[] = {"lmg"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",2},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarymagazines",3}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_mmg: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Medium Machinegunner";

    tss_primaries[] = {"mmg"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",2},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarymagazines",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_gl: B_soldier_GL_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Grenadier";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"grenadier"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"primarygrenades",6},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarygrenades",4}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_gat: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "AT-Specialist Guided";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"gat"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"launchermagazines",1}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_at: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "AT-Specialist Unguided";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"at"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"launchermagazines",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_lat: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Rifleman AT";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"singleUse"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_aa: B_soldier_AA_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "AA-Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"aa"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"launchermagazines",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_aar: B_soldier_AAR_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Assistant AR/MG";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"dummymagazine",20}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs","yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_dm: B_soldier_M_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Designated Marksman";

    tss_primaries[] = {"dmr"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",5},
        {"grenades",1},
        {"markerred",1},
        "dmrkit"
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"primarymagazines",4}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_cls: B_medic_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Combat Life Saver";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"medic"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",3},
        {"smokewhite",3},
        "medkitclsalpha"
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_breacher: B_soldier_exp_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Breacher";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        "breacherkit",
        "detector"
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_exp: tss_infantry_breacher {
    TSSAUTHOR
    INFUNITSETBASE
    displayName = "Explosive Specialist";

    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        "expkit",
        "detector"
    };
};
class tss_infantry_alp: B_soldier_AAT_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Assistant Launcher";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        {"dummymissile",20}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs","yardage"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_fac: B_recon_jtac_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "FAC/JTAC";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerred",4},
        {"markerevac",6},
        "jtackit",
        "anprc117"
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_ptl: B_officer_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Platoon Leader";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"tablet"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_pts: tss_infantry_ptl {
    displayName = "Platoon Sergeant";
};
class tss_infantry_rto: tss_infantry_ptl {
    displayName = "Platoon RTO";
    tss_backpacksContent[] = {"anprc117"};
};
class tss_infantry_ptm: tss_infantry_cls {
    displayName = "Platoon Medic";
    tss_backpacks[] = {"large"};
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"smokewhite",3},
        {"markerevac",2},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        "medkitptm"
    };
};
class tss_infantry_ptd: tss_infantry_ptm {
    displayName = "Platoon Doctor";
    tss_backpacks[] = {"large"};
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",5},
        {"smokewhite",2},
        {"markerevac",3}
    };
    tss_backpacksContent[] = {
        "medkitptd"
    };
    attendant = 2;
};
class tss_infantry_dropn: B_soldier_UAV_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
        #include "attributes\ClassCls.hpp"
    };
    displayName = "Drone Operator / Term only";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2}
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {"uavterminalB"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_drop: tss_infantry_dropn {
    displayName = "Drone Operator";

    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        "darterBlufor"
    };
};
class tss_infantry_engineer: B_soldier_repair_F {
    TSSAUTHOR
    INFUNITSETBASE
    class Attributes {
        #include "attributes\ClassBackpack.hpp"
        #include "attributes\ClassMuzzle.hpp"
        #include "attributes\ClassBipod.hpp"
    };
    displayName = "Engineer Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        UNIFORMCONTENT,
        {"cableties",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",7},
        {"grenades",1},
        {"markerred",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"markerevac",2},
        "engineerkit"
    };

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
