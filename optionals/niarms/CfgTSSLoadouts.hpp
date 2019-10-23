class CfgTSSLoadouts {
    class CfgPrimaries {
        class rifle {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_RU556",
                        "hlc_rifle_RU5562",
                        "hlc_rifle_bcmjack",
                        "hlc_rifle_bcmblackjack",
                        "hlc_rifle_M4",
                        "hlc_rifle_CQBR",
                        "hlc_rifle_416D10",
                        "hlc_rifle_416D10_st6",
                        "hlc_rifle_416D10_ptato",
                        "hlc_rifle_416D10_RAHG",
                        "hlc_rifle_416D10_geissele",
                        "hlc_rifle_416D10C",
                        "hlc_rifle_416D145",
                        "hlc_rifle_416D145_CAG",
                        "hlc_rifle_416D145C",
                        "hlc_rifle_416D165",
                        "hlc_rifle_416C",
                        "hlc_rifle_416N",
                        "hlc_rifle_mk18mod0",
                        "hlc_rifle_SAMR",
                        "hlc_rifle_samr2",
                        "hlc_rifleACR_SBR_cliffhanger",
                        "hlc_rifle_ACR_carb_black",
                        "hlc_rifle_ACR_carb_green",
                        "hlc_rifle_ACR_carb_tan",
                        "hlc_rifle_ACR_SBR_black",
                        "hlc_rifle_ACR_SBR_green",
                        "hlc_rifle_ACR_SBR_tan",
                        "hlc_rifle_ACR_Full_black",
                        "hlc_rifle_ACR_Full_green",
                        "hlc_rifle_ACR_Full_tan",
                        "hlc_rifle_ACR_MID_black",
                        "hlc_rifle_ACR_MID_green",
                        "hlc_rifle_ACR_MID_tan"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG"};
                    magazineRange[] = {{0,30},{0,0}};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "hlc_rifle_416D10_tan",
                        "hlc_rifle_416D145_tan",
                        "hlc_rifle_416D165_tan",
                        "hlc_rifle_ACR_GL_SBR_cliffhanger",
                        "hlc_rifle_ACR_GL_Carb_black",
                        "hlc_rifle_ACR_GL_Carb_green",
                        "hlc_rifle_ACR_GL_Carb_tan",
                        "hlc_rifle_ACR_GL_SBR_black",
                        "hlc_rifle_ACR_GL_SBR_green",
                        "hlc_rifle_ACR_GL_SBR_tan",
                        "hlc_rifle_ACR_GL_mid_black",
                        "hlc_rifle_ACR_GL_mid_green",
                        "hlc_rifle_ACR_GL_mid_tan"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG"};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "hlc_rifle_416D10_wdl",
                        "hlc_rifle_416D145_wdl",
                        "hlc_rifle_416D165_wdl"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG"};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
        };
        class riflegl {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_m4m203",
                        "hlc_rifle_416D10_gl",
                        "hlc_rifle_416D145_gl",
                        "hlc_rifle_416D165_gl",
                        "hlc_rifle_416N_gl"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG", "1Rnd_HE_Grenade_shell"};
                    magazineRange[] = {{0,30},{0,1}};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class lmg {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_m249_SQuantoon",
                        "hlc_m249_pip4",
                        "hlc_lmg_mk46",
                        "hlc_lmg_mk46mod1"
                    };
                    defaultMagazine[] = {"hlc_200rnd_556x45_M_SAW"};
                    magazineRange[] = {{200,200},{0,0}};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class ar {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_M27IAR"
                    };
                    defaultMagazine[] = {"hlc_50rnd_556x45_EPR"};
                    magazineRange[] = {{40,150},{0,0}};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class mmg {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_lmg_mk48mod1",
                        "hlc_lmg_mk48"
                    };
                    defaultMagazine[] = {"hlc_200Rnd_762x51_Barrier_M60E4"};
                    magazineRange[] = {{100,200},{0,0}};
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class dmr {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_m14sopmod",
                        "hlc_rifle_M14dmr_Rail"
                    };
                    defaultMagazine[] = {"hlc_20Rnd_762x51_mk316_M14"};
                    magazineRange[] = {{0,20},{0,0}};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };

        // redfor weapons
        class rifleOpfor {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_ak12",
                        "hlc_rifle_aku12",
                        "hlc_rifle_ak74_MTK",
                        "hlc_rifle_aks74_MTK",
                        "hlc_rifle_aks74u_MTK",
                        "hlc_rifle_aek971_mtk"
                    };
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class rifleGlOpfor {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_ak12GL"
                    };
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
        class arOpfor {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_RPK12"
                    };
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgSecondaries {
        class pistol {
            class all {
                class COMPONENT {
                    secondaries[] = {
                        "hlc_pistol_Mk25TR",
                        "hlc_pistol_P226R_Combat",
                        "hlc_pistol_P226R_357Combat",
                        "hlc_pistol_P226R_40Combat",
                        "hlc_pistol_P229R_Combat",
                        "hlc_pistol_P229R_357Combat",
                        "hlc_pistol_P229R_40Combat",
                        "hlc_pistol_P229R_Elite",
                        "hlc_pistol_P229R_357Elite",
                        "hlc_pistol_P229R_40Elite"
                    };
                    allowedMagazineMods[] = {"hlc"};
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzlePistol";
            lasers = "laserPistol";
            optics = "opticsPistol";
        };
    };
    class CfgMuzzles {
        class muzzle556 {
            class silent {
                class COMPONENT {
                    muzzles[] = {
                        "hlc_muzzle_556nato_m42000",
                        "hlc_muzzle_556nato_rotexiiic_grey",
                        "hlc_muzzle_556nato_rotexiiic_tan",
                        "hlc_muzzle_556nato_kac"
                    };
                };
            };
            class fire {
                class COMPONENT {
                    muzzles[] = {
                        "hlc_muzzle_gunfighter_comp",
                        "hlc_muzzle_kx3_comp",
                        "hlc_muzzle_sf3p_556"
                    };
                };
            };
        };
        class muzzle762 {
            class fire {
                class COMPONENT {
                    muzzles[] = {
                        "hlc_muzzle_mag58_brake",
                        "hlc_muzzle_gunfighter_comp",
                        "hlc_muzzle_kx3_comp",
                        "hlc_muzzle_sf3p_762r"
                    };
                };
            };
        };
        class muzzle762o {
            class silent {
                class COMPONENT {
                    muzzles[] = {
                        "hlc_muzzle_545sup_ak",
                        "hlc_muzzle_snds_arsenalcomp"
                    };
                };
            };
            class fire {
                class COMPONENT {
                    muzzles[] = {
                        "hlc_muzzle_sf3p_762r"
                    };
                };
            };
        };
        class muzzlePistol {
            class silent {
                class COMPONENT {
                    muzzles[] = {
                        "hlc_muzzle_evo9",
                        "hlc_muzzle_tirant9",
                        "hlc_muzzle_tirant9s",
                        "hlc_muzzle_octane9",
                        "hlc_muzzle_evo40",
                        "hlc_muzzle_octane45"
                    };
                };
            };
        };
    };
    class CfgOptics {
        class opticsRifle {

            #define rifleoptics \
            "hlc_optic_docterr",\
            "hlc_optic_hensoldtzo_lo_2d",\
            "hlc_optic_hensoldtzo_lo_docter_2d",\
            "hlc_optic_hensoldtzo_hi_2d",\
            "hlc_optic_hensoldtzo_hi_docter_2d"

            class day {
                class COMPONENT {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class night {
                class COMPONENT {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class both {
                class COMPONENT {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
        };
        class opticsMmg {
            class day {
                class COMPONENT {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class night {
                class COMPONENT {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
            class both {
                class COMPONENT {
                    optics[] = {
                        rifleoptics
                    };
                };
            };
        };
        class opticsDmr {
            class day {
                class COMPONENT {
                    optics[] = {
                        "hlc_optic_atacr",
                        "hlc_optic_atacr_offset"
                    };
                };
            };
            class night {
                class COMPONENT {
                    optics[] = {
                        "hlc_optic_atacr",
                        "hlc_optic_atacr_offset"
                    };
                };
            };
            class both {
                class COMPONENT {
                    optics[] = {
                        "hlc_optic_atacr",
                        "hlc_optic_atacr_offset"
                    };
                };
            };
        };
        class opticsPistol {

            #define opticsPistol \
            "hlc_optic_docter_cadex",\
            "hlc_optic_hp",\
            "hlc_optic_romeo1_rx",\
            "hlc_optic_siglite",\
            "hlc_optic_att",\
            "hlc_optic_xs",\
            "hlc_optic_vtac",\
            "hlc_optic_stavenhagen",\
            "hlc_optic228_docter_cadex",\
            "hlc_optic228_hp",\
            "hlc_optic228_romeo1_rx",\
            "hlc_optic228_siglite",\
            "hlc_optic228_att",\
            "hlc_optic228_xs",\
            "hlc_optic228_vtac",\
            "hlc_optic228_stavenhagen",\

            class day {
                class COMPONENT {
                    optics[] = {
                        opticsPistol
                    };
                };
            };
            class night {
                class COMPONENT {
                    optics[] = {
                        opticsPistol
                    };
                };
            };
            class both {
                class COMPONENT {
                    optics[] = {
                        opticsPistol
                    };
                };
            };
        };
    };
    class CfgLasers {
        class laserPistol {
            class night {
                class COMPONENT {
                    lasers[] = {
                        "hlc_acc_dbalpl",
                        ""
                    };
                };
            };
            class both {
                class COMPONENT {
                    lasers[] = {
                        "hlc_acc_dbalpl",
                        ""
                    };
                };
            };
        };
    };
};
