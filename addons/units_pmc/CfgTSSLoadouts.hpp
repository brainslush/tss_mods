class CfgTSSLoadouts {
    class CfgUniforms {
        class pmc {
            class all {
                class vanilla {
                    uniforms[] = {
                        "U_I_G_Story_Protagonist_F",
                        "U_I_C_Soldier_Para_1_F",
                        "U_I_C_Soldier_Para_4_F",
                        "U_I_C_Soldier_Para_3_F",
                        "U_I_L_Uniform_01_tshirt_olive_F",
                        "U_BG_Guerilla2_3",
                        "U_BG_Guerilla2_1",
                        "U_BG_Guerilla2_2",
                        "U_BG_Guerilla1_1",
                        "U_BG_Guerilla1_2_F",
                        "U_BG_Guerrilla_6_1",
                        "U_B_GEN_Soldier_F",
                        "U_I_L_Uniform_01_deserter_F",
                        "U_I_L_Uniform_01_camo_F",
                        "U_I_G_resistanceLeader_F",
                        "U_I_E_Uniform_01_tanktop_F",
                        "U_I_E_Uniform_01_sweater_F",
                        "U_I_C_Soldier_Bandit_2_F",
                        "U_C_IDAP_Man_Tee_F",
                        "U_C_IDAP_Man_cargo_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgHelmets {
        class pmc {
            class all {
                class vanilla {
                    helmets[] = {
                        "H_Bandanna_gry",
                        "H_Bandanna_blu",
                        "H_Bandanna_cbr",
                        "H_Bandanna_khk_hs",
                        "H_Bandanna_khk",
                        "H_Bandanna_mcamo",
                        "H_Bandanna_sgg",
                        "H_Bandanna_sand",
                        "H_Bandanna_camo",
                        "H_Watchcap_blk",
                        "H_Watchcap_cbr",
                        "H_Watchcap_camo",
                        "H_Watchcap_khk",
                        "H_Booniehat_mgrn",
                        "H_Booniehat_khk_hs",
                        "H_Booniehat_khk",
                        "H_Booniehat_mcamo",
                        "H_Booniehat_oli",
                        "H_Booniehat_tan",
                        "H_Booniehat_tan",
                        "H_Booniehat_tna_F",
                        "H_Booniehat_wdl",
                        "H_Cap_blk",
                        "H_Cap_grn",
                        "H_Cap_oli",
                        "H_Cap_oli_hs",
                        "H_Cap_red",
                        "H_Cap_tan",
                        "H_HelmetB",
                        "H_MilCap_blue",
                        "H_MilCap_grn",
                        "H_MilCap_gry",
                        "H_MilCap_ocamo",
                        "H_MilCap_mcamo",
                        "H_MilCap_taiga",
                        "H_MilCap_tna_F",
                        "H_MilCap_wdl",
                        "H_Cap_headphones",
                        "H_Shemag_olive",
                        "H_Shemag_olive_hs",
                        "H_ShemagOpen_tan",
                        "H_ShemagOpen_khk"
                    };
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
    class CfgPrimaries {
        class riflePMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_AK12_F",
                        "arifle_AKM_F",
                        "arifle_AKS_F",
                        "arifle_AK12U_F",
                        "arifle_TRG20_F",
                        "arifle_Mk20_plain_F",
                        "arifle_Mk20C_plain_F",
                        "arifle_SPAR_01_blk_F",
                        "arifle_Katiba_F",
                        "arifle_Katiba_C_F",
                        "SMG_05_F",
                        "arifle_MX_Black_F",
                        "arifle_MXC_Black_F",
                        "SMG_03C_black",
                        "SMG_03C_TR_black",
                        "arifle_MSBS65_black_F",
                        "arifle_MSBS65_Mark_black_F",
                        "SMG_03_black",
                        "SMG_03_TR_black",
                        "arifle_CTAR_blk_F",
                        "arifle_SDAR_F",
                        "SMG_02_F",
                        "srifle_DMR_03_F",
                        "arifle_TRG21_F",
                        "SMG_01_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class rifleGlPMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_AK12_GL_F",
                        "arifle_Mk20_GL_plain_F",
                        "arifle_TRG21_GL_F",
                        "arifle_SPAR_01_GL_blk_F",
                        "arifle_Katiba_GL_F",
                        "arifle_MX_GL_Black_F",
                        "arifle_MSBS65_GL_black_F",
                        "arifle_CTAR_GL_blk_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsRifle";
        };
        class arPMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_MX_SW_Black_F",
                        "arifle_CTARS_blk_F",
                        "arifle_RPK12_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class lmgPMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "LMG_03_F",
                        "LMG_Mk200_black_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class mmgPMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "LMG_Zafir_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class dmrPMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "srifle_DMR_05_blk_F",
                        "arifle_SPAR_03_blk_F",
                        "srifle_DMR_06_camo_F",
                        "srifle_DMR_06_olive_F",
                        "srifle_DMR_06_hunter_F",
                        "srifle_EBR_F",
                        "arifle_MXM_Black_F",
                        "srifle_DMR_07_blk_F",
                        "arifle_MSBS65_Mark_black_F",
                        "srifle_DMR_03_F",
                        "srifle_DMR_01_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsDmr";
            bipods = "bipod";
        };
        class sniperPMC {
            class all {
                class vanilla {
                    primaries[] = {
                        "srifle_DMR_02_F",
                        "srifle_GM6_F",
                        "srifle_LRR_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
            lasers = "laser";
            optics = "opticsSniper";
            bipods = "bipod";
        };
    };
    class CfgSecondaries {
        class pistolPMC {
            class all {
                class vanilla {
                    secondaries[] = {
                        "hgun_P07_F",
                        "hgun_Rook40_F",
                        "hgun_ACPC2_F",
                        "hgun_Pistol_heavy_01_F",
                        "hgun_Pistol_01_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
            muzzles = "muzzleRifle";
        };
    };
    class CfgLaunchers {
        class atPMC {
            class all {
                class vanilla {
                    launchers[] = {
                        "launch_MRAWS_green_rail_F",
                        "launch_RPG32_green_F",
                        "launch_RPG7_F"
                    };
                    excludeOnAlternative = 1;
                };
            };
            class des: all {};
            class jgl: all {};
            class mdt: all {};
            class snw: all {};
            class wdl: all {};
        };
    };
};
