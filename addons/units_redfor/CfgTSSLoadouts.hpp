class CfgTSSLoadouts {

    class CfgPrimaries {
        class rifleOpfor {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_AK12_F",
                        "arifle_AK12U_F"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_arid_F",
                        "arifle_AK12U_arid_F"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_lush_F",
                        "arifle_AK12U_lush_F"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_arid_F",
                        "arifle_AK12U_arid_F",
                        "arifle_AK12_lush_F",
                        "arifle_AK12U_lush_F"
                    };
                };
            };
            class snw: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_lush_F",
                        "arifle_AK12U_lush_F"
                    };
                };
            };
            class wdl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_lush_F",
                        "arifle_AK12U_lush_F"
                    };
                };
            };
            muzzles = "muzzle762o";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
        class rifleGlOpfor {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_AK12_GL_F"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_GL_arid_F"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_GL_lush_F"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_GL_arid_F",
                        "arifle_AK12_GL_lush_F"
                    };
                };
            };
            class snw: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_GL_lush_F"
                    };
                };
            };
            class wdl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_AK12_GL_lush_F"
                    };
                };
            };
            muzzles = "muzzle762o";
            lasers = "laser";
            optics = "opticsRifle";
        };
        class arOpfor {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_RPK12_F"
                    };
                };
            };
            class des: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_RPK12_arid_F"
                    };
                };
            };
            class jgl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_RPK12_lush_F"
                    };
                };
            };
            class mdt: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_RPK12_arid_F",
                        "arifle_RPK12_lush_F"
                    };
                };
            };
            class snw: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_RPK12_lush_F"
                    };
                };
            };
            class wdl: all {
                class vanilla: vanilla {
                    primaries[] += {
                        "arifle_RPK12_lush_F"
                    };
                };
            };
            muzzles = "muzzle762o";
            lasers = "laser";
            optics = "opticsRifle";
            bipods = "bipod";
        };
    };
    class CfgLaunchers {
        class atOpfor {
            class all {
                class vanilla {
                    launchers[] = {
                        "launch_RPG32_green_F"
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
    class CfgMuzzles {
        class muzzle762o {
            class silent {
                class vanilla {
                    muzzles[] = {
                        "muzzle_snds_b",
                        "muzzle_snds_b_arid_f",
                        "muzzle_snds_b_khk_f",
                        "muzzle_snds_b_lush_f",
                        "muzzle_snds_b_snd_f"
                    };
                };
            };
        };
    };
};
