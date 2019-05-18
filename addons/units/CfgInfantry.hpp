class tss_infantry_soldier: B_soldier_F {
    TSSAUTHOR
    INFUNITSETBASE
    EMPTYLOADOUT
    _generalMacro = "B_Soldier_F";
    displayName = "Rifleman";

    tss_primaries[] = {"assault"};
    tss_secondaries[] = {"pistol"};
    tss_launchers[] = {};

    tss_uniforms[] = {"infantry"};
    tss_vests[] = {"assault"};
    tss_backpacks[] = {"small", "medium", "large"};
    tss_uniformsContent[] = {};
    tss_vestsContent[] = {};
    tss_backpacksConent[] = {};

    tss_helmets[] = {"helmets"};
    tss_glasses[] = {"infantry"};
    tss_binoculars[] = {};
    tss_maps[] = {"basic"};
    tss_gps[] = {};
    tss_compass[] = {"basic"};
    tss_watches[] = {"basic"};
    tss_nvgs[] = {"infantry"};
};
class tss_infantry_sc: B_soldier_SL_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_SL_F";
    displayName = "Section Commander (SC)";
};
class tss_infantry_2ic: B_soldier_TL_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_TL_F";
    displayName = "Second In Command (2IC)";
};
class tss_infantry_lmg: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AR_F";
    displayName = "Automatic Rifleman (M249)";
};
class tss_infantry_mmg: B_soldier_AR_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AR_F";
    displayName = "Automatic Rifleman (Mk48 Mod 1)";
};
class tss_infantry_gl: B_soldier_GL_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_GL_F";
    displayName = "Grenadier";
};
class tss_infantry_gat: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AT_F";
    displayName = "AT-Specialist (Titan)";
};
class tss_infantry_at: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AT_F";
    displayName = "Rifleman (AT4)";
};
class tss_infantry_lat: B_soldier_AT_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AT_F";
    displayName = "AT-Specialist (M3)";
};
class tss_infantry_aa: B_soldier_AA_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AA_F";
    displayName = "AA-Specialist (Titan)";
};
class tss_infantry_aar: B_soldier_AAR_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AAR_F";
    displayName = "Assistant Automatic Rifleman (Mk48 Mod 1)";
};
class tss_infantry_dm: B_soldier_M_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_M_F";
    displayName = "Designated Marksman (M14 EBR Ri)";
};
class tss_infantry_cls: B_medic_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_medic_F";
    displayName = "Combat Life Saver";
};
class tss_infantry_exp: B_soldier_exp_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_exp_F";
    displayName = "EOD Breacher";
};
class tss_infantry_paf: B_soldier_exp_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_exp_F";
    displayName = "EOD Path Finder";
};
class tss_infantry_def: B_soldier_exp_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_exp_F";
    displayName = "EOD Technician";
};
class tss_infantry_aat: B_soldier_AAT_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AAT_F";
    displayName = "Assistant AT-Specialist (M3)";
};
class tss_infantry_gaat: B_soldier_AAT_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AAT_F";
    displayName = "Assistant AT-Specialist (Titan)";
};
class tss_infantry_aaa: B_soldier_AAA_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_AAA_F";
    displayName = "Assistant AA-Specialist";
};
class tss_infantry_ptl: B_officer_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_officer_F";
    displayName = "Platoon Leader";
};
class tss_infantry_pts: tss_infantry_ptl {
    displayName = "Platoon Sergeant";
};
class tss_infantry_rto: tss_infantry_soldier {
    displayName = "Platoon RTO";
};
class tss_infantry_fac: tss_infantry_rto {
    displayName = "Platoon FAC";
};
class tss_infantry_ptm: tss_infantry_cls {
    displayName = "Platoon Medic";
};
class tss_infantry_ptd: tss_infantry_ptm {
    displayName = "Platoon Doctor";
    attendant = 2;
};
class tss_infantry_dropn: tss_infantry_pts {
    displayName = "Drone Operator / Term only";
};
class tss_infantry_drop: tss_infantry_dropn {
    displayName = "Drone Operator";
};
class tss_infantry_repair: B_soldier_repair_F {
    TSSAUTHOR
    INFUNITSETBASE
    _generalMacro = "B_soldier_repair_F";
    displayName = "Repair Specialist";
};
