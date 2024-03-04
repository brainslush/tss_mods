class CfgTSSLoadouts {
    class CfgPrimaries {
        class sniper {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "SPS_AI_AXMC338_27_B_F"
                    };
                    defaultMagazine[] = {"SPS_AI_AXMC_338_300gr_Berger_Mag"};
                    allowedMagazineMods[] = {"sps"};
                };
            };
            class des: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "SPS_AI_AXMC338_27_DE_F",
                        "SPS_AI_AXMC338_27_ES_F",
                        "SPS_AI_AXMC338_27_PB_F"
                    };
                    defaultMagazine[] = {"SPS_AI_AXMC_338_300gr_Berger_Mag"};
                };
            };
            class jgl: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "SPS_AI_AXMC338_27_G_F"
                    };
                    defaultMagazine[] = {"SPS_AI_AXMC_338_300gr_Berger_Mag"};
                };
            };
            class mdt: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "SPS_AI_AXMC338_27_DE_F",
                        "SPS_AI_AXMC338_27_G_F",
                        "SPS_AI_AXMC338_27_PB_F"
                    };
                    defaultMagazine[] = {"SPS_AI_AXMC_338_300gr_Berger_Mag"};
                };
            };
            class snw: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "SPS_AI_AXMC338_27_ES_F",
                        "SPS_AI_AXMC338_27_G_F"
                    };
                    defaultMagazine[] = {"SPS_AI_AXMC_338_300gr_Berger_Mag"};
                };
            };
            class wdl: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "SPS_AI_AXMC338_27_G_F"
                    };
                    defaultMagazine[] = {"SPS_AI_AXMC_338_300gr_Berger_Mag"};
                };
            };
        };
    };
    class CfgMuzzles {
        class muzzle338 {
            class silent {
                class COMPONENT {
                    muzzles[] = {
                        "muzzle_snds_sps_ai_b_h",
                        "muzzle_snds_sps_ai_de_h",
                        "muzzle_snds_sps_ai_es_h",
                        "muzzle_snds_sps_ai_g_h",
                        "muzzle_snds_sps_ai_pb_h"
                    };
                };
            };
        };
    };
};
