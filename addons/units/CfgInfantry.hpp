class tss_infantry_soldier: B_soldier_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_Soldier_F";
    displayName = "Rifleman";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_SL_F";
    displayName = "Section Commander (SC)";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        {"primarygrenades",4},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_TL_F";
    displayName = "Second In Command (2IC)";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"teamleader"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        {"primarygrenades",4},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
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
class tss_infantry_ar: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AR_F";
    displayName = "Automatic Rifleman 5.56";

    tss_primaries[] = {"lmg"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AR_F";
    displayName = "Machinegunner 5.56";

    tss_primaries[] = {"lmg"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_mmg: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AR_F";
    displayName = "Machinegunner 7.62";

    tss_primaries[] = {"mmg"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_gl: B_soldier_GL_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_GL_F";
    displayName = "Grenadier";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"grenadier"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "anprc148",
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AT_F";
    displayName = "AT-Specialist Guided";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"gat"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "anprc148",
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"launchermagazines", 2}
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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AT_F";
    displayName = "Rifleman AT";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"singleUse"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "anprc148",
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"launchermagazines", 2}
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
class tss_infantry_lat: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AT_F";
    displayName = "AT-Specialist Unguided";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"at"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "anprc148",
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_aa: B_soldier_AA_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AA_F";
    displayName = "AA-Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {"aa"};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        {"launchermagazines", 2}
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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AAR_F";
    displayName = "Assistant Automatic Rifleman 7.62";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_dm: B_soldier_M_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_M_F";
    displayName = "Designated Marksman";

    tss_primaries[] = {"dmr"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_cls: B_medic_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_medic_F";
    displayName = "Combat Life Saver";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"medic"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"grenades",2},
        "clskit"
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
class tss_infantry_exp: B_soldier_exp_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_exp_F";
    displayName = "EOD Breacher";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_paf: tss_infantry_exp {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_exp_F";
    displayName = "EOD Path Finder";
};
class tss_infantry_def: tss_infantry_exp {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_exp_F";
    displayName = "EOD Technician";
};
class tss_infantry_aat: B_soldier_AAT_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AAT_F";
    displayName = "Assistant AT-Specialist Unguided";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_gaat: B_soldier_AAT_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AAT_F";
    displayName = "Assistant AT-Specialist Guided";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_aaa: B_soldier_AAA_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_AAA_F";
    displayName = "Assistant AA-Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_infantry_jtac: B_recon_jtac_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_recon_jtac_F";
    displayName = "Platoon JTAC";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {"anprc117"};

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
    #include "CfgAttributes.hpp"
    _generalMacro = "B_officer_F";
    displayName = "Platoon Leader";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

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
class tss_infantry_fac: tss_infantry_rto {
    displayName = "Platoon FAC";
    tss_backpacksContent[] = {"anprc117"};
};
class tss_infantry_ptm: tss_infantry_cls {
    displayName = "Platoon Medic";
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        "grenades",
        {"markervest",2}
    };
    tss_backpacksContent[] = {"ptmkit"};
};
class tss_infantry_ptd: tss_infantry_ptm {
    displayName = "Platoon Doctor";
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        "grenades",
        {"markervest",2}
    };
    tss_backpacksContent[] = {"ptdkit"};
    attendant = 2;
};
class tss_infantry_dropn: B_soldier_UAV_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_UAV_F";
    displayName = "Drone Operator / Term only";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

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

    tss_backpacks[] = {"darter"};
};
class tss_infantry_repair: B_soldier_repair_F {
    TSSAUTHOR
    INFUNITSETBASE
    #include "CfgAttributes.hpp"
    _generalMacro = "B_soldier_repair_F";
    displayName = "Repair Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {{"grenades",2}};

    tss_helmets[] = {"infantry"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
