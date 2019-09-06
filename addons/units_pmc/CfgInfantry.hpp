class tss_pmc_soldier: I_G_Soldier_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Rifleman";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {{"grenades",1}};

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_sc: I_G_Soldier_SL_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Section Commander (SC)";

    tss_primaries[] = {"rifleGlPMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
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
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"primarygrenades",4}
    };

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_2ic: I_G_Soldier_TL_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Second In Command (2IC)";

    tss_primaries[] = {"rifleGlPMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
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
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"primarygrenades",4}
    };

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_mg: I_G_Soldier_AR_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "AR / MG";

    tss_primaries[] = {"mgPMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
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
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {{"grenades",1}};

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_cls: I_G_medic_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Combat Life Saver";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
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

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_repair: I_G_engineer_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Repair Specialist";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
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

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_exp: I_G_Soldier_exp_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Explosive Specialist";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
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
        "breacherkit",
        "detector"
    };

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_gl: I_G_Soldier_GL_F {
    displayName = "Grenadier";

    tss_primaries[] = {"rifleGlPMC"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
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
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"primarygrenades",4}
    };

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_dm: I_G_Soldier_M_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Designated Marksman";

    tss_primaries[] = {"dmrPMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_at: I_G_Soldier_LAT_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "AT-Specialist";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {"atPMC"};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"medium", "large"};
    tss_uniformsContent[] = {
        "anprc148",
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        {"primarymagazines",9},
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {
        {"grenades",1},
        {"launchermagazines", 2}
    };

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_lat: I_G_Soldier_LAT_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Rifleman AT";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {"singleUse"};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "anprc148",
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        {"primarymagazines",9},
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {{"grenades",1}};

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_aat: I_G_Soldier_A_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Assistant AT-Specialist";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
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

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_pmc_aar: I_G_Soldier_A_F {
    TSSAUTHOR
    PMCSETBASE
    #include "CfgAttributes.hpp"
    displayName = "Assistant Automatic Rifleman";

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"pmc"};
    tss_vests[] = {"rifleman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",9},
        {"grenades",1},
        {"markervest",1}
    };
    tss_backpacksContent[] = {{"grenades",1}};

    tss_helmets[] = {"pmc"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"binocs"};
    tss_maps[] = {"map"};
    tss_gps[] = {};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
