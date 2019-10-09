#define SCUBAGEAR \
tss_uniforms[] = {"wetsuit"}; \
tss_vests[] = {"rebreather"}; \
tss_backpacks[] = {"large"}; \
tss_helmets[] = {}; \
tss_glasses[] = {"diver"};

class tss_diver_operator: tss_recon_operator {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] = {
        "anprc148",
        {"primarymagazines",1},
        {"secondarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"grenades",1},
        {"markerred",2}
    };
};
class tss_diver_gl: tss_recon_gl {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1},
        {"primarygrenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"primarygrenades",3},
        {"grenades",1},
        {"markerred",2}
    };
};
class tss_diver_tl: tss_recon_tl {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1},
        {"primarygrenades",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        "anprc152",
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"primarygrenades",3},
        {"grenades",1},
        {"markerred",2}
    };
};
class tss_diver_ar: tss_recon_ar {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"grenades",1},
        {"markerred",2},
        {"secondarymagazines",1},
        {"primarymagazines",3}
    };
};
class tss_diver_com: tss_recon_com {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"primarygrenades",4},
        "anprc152",
        {"grenades",1},
        {"markerred",2}
    };
};
class tss_diver_exp: tss_recon_exp {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"grenades",1},
        {"markerred",2}
    };
};
class tss_diver_cls: tss_recon_cls {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"grenades",1},
        {"markerred",2}
    };
};
class tss_diver_mm: tss_recon_mm {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        "dmrkit",
        {"secondarymagazines",1},
        {"primarymagazines",4},
        {"grenades",1},
        {"markerred",2},
        {"markerevac",2}
    };
};
class tss_diver_engineer: tss_recon_engineer {
    TSSAUTHOR
    DIVERUNITSETBASE
    SCUBAGEAR

    tss_uniformsContent[] += {
        "anprc148",
        {"secondarymagazines",1},
        {"primarymagazines",1}
    };
    tss_vestsContent[] = {};
    tss_backpacksContent[] += {
        {"grenades",1},
        {"markerred",2},
        {"secondarymagazines",1},
        {"primarymagazines",4}
    };
};
