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
                        "hlc_rifle_samr2"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG"};
                };
            };
            class des: all {
                class COMPONENT: COMPONENT {
                    primaries[] += {
                        "hlc_rifle_416D10_tan",
                        "hlc_rifle_416D145_tan",
                        "hlc_rifle_416D165_tan"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG"};
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
                };
            };
        };
        class riflegl {
            class all {
                class COMPONENT {
                    primaries[] = {
                        "hlc_rifle_416D10_gl",
                        "hlc_rifle_416D145_gl",
                        "hlc_rifle_416D165_gl",
                        "hlc_rifle_416N_gl"
                    };
                    defaultMagazine[] = {"hlc_30rnd_556x45_SOST_EMAG", "1Rnd_HE_Grenade_shell"};
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
                        "hlc_lmg_mk46",
                        "hlc_lmg_mk46mod1"
                    };
                    defaultMagazine[] = {"hlc_200rnd_556x45_M_SAW"};
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
