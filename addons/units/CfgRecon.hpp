class tss_recon_operator: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Operator";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_gl: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Grendier";

    tss_primaries[] = {"riflegl"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"grenadier"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines",2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",4}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_tl: B_recon_TL_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Teamleader";

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
        {"primarymagazines",5},
        {"primarygrenades",4},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",2}
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_ws: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Weapon Specialist (Unsilenced MG)";

    tss_primaries[] = {"lmg"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"machinegunner"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",3},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_ar: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Weapon Specialist (Silenced AR)";

    tss_primaries[] = {"sar"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",4},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_com: B_recon_JTAC_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Communication Officer";

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
        {"primarymagazines",5},
        {"primarygrenades",4},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {
        {"primarygrenades",2},
        "anprc117"
    };

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_exp: B_recon_exp_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Explosive Specialist";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_drop: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Drone Operator";

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
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"laserdesignator"};
    tss_maps[] = {"map"};
    tss_gps[] = {"uavterminalB"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_cls: B_recon_medic_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Combat Medic";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"medic"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {"clskit"};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_mm: B_Recon_Sharpshooter_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Scout Sniper";

    tss_primaries[] = {"dmr"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"marksman"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",8},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {"clskit"};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
class tss_recon_mec: B_recon_F {
    TSSAUTHOR
    RECUNITSETBASE
    displayName = "Recon Mechanic";

    tss_primaries[] = {"rifle"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {""};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"infantry"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {
        "fak",
        "markers",
        "maptool",
        {"secondarymagazines", 2}
    };
    tss_vestsContent[] = {
        "anprc148",
        {"primarymagazines",5},
        {"grenades",2},
        {"markervest",2}
    };
    tss_backpacksContent[] = {};

    tss_helmets[] = {"recon"};
    tss_glasses[] = {"glasses"};
    tss_binoculars[] = {"rangefinder"};
    tss_maps[] = {"map"};
    tss_gps[] = {"android"};
    tss_compass[] = {"compass"};
    tss_watches[] = {"watch"};
    tss_nvgs[] = {"nvg"};
};
