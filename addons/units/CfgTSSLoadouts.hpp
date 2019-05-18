class CfgTSSLoadout {
    class CfgUniforms {
        class infantry {
            class all {
                class vanilla {
                    uniforms[] = {
                        "U_B_CombatUniform_mcam",
                        "U_B_CombatUniform_mcam_tshirt"
                    };
                };
            };
        };
        class helipilot {
            class all {
                class vanilla {
                    uniforms[] = {
                        "U_B_HeliPilotCoveralls"
                    };
                };
            };
        };
    };
    class CfgVests {
        class infantry {
            class all {
                class vanilla {
                    vests[] = {
                        "V_PlateCarrierIA1_dgtl",
                        "V_PlateCarrier2_rgr_noflag_F"
                    };
                };
            };
        };
        class helipilot {
            class all {
                class vanilla {
                    vests[] = {
                        "V_TacVest_oli"
                    };
                };
            };
        };
    };
    class CfgBackpacks {
        class small {
            class all {
                class vanilla {
                    backpacks[] = {"B_AssaultPack_blk"};
                };
            };
        };
        class medium {
            class all {
                class vanilla {
                    backpacks[] = {"B_Kitbag_rgr"};
                };
            };
        };
        class large {
            class all {
                class vanilla {
                    backpacks[] = {"B_Carryall_khk"};
                };
            };
        };
        class darter {
            class all {
                class enhanced {
                    backpacks[] = {};
                };
            };
        };
    };
    class CfgHelmets {
        class infantry {
            class all {
                class vanilla {
                    helmets[] = {"H_HelmetB_snakeskin"};
                };
            };
            class mdt : all;
            class des : all;
            class wdl : all;
            class snw : all;
        };
        class recon {
            class all {
                class vanilla {
                    helmets[] = {
                        "H_Watchcap_blk",
                        "H_Watchcap_cbr",
                        "H_Watchcap_camo",
                        "H_Watchcap_khk",
                        "H_Booniehat_khk_hs",
                        "H_Cap_oli_hs",
                        "H_HeadSet_black_F",
                        "H_MilCap_mcamo",
                        "H_Shemag_olive",
                        "H_ShemagOpen_tan"
                    };
                };
            };
            class mdt : all;
            class des : all;
            class wdl : all;
            class snw : all;
        };
        class helipilot {
            class all {
                class vanilla {
                    helmets[] = {
                        "H_Cap_oli_hs",
                        "H_HeadSet_black_F",
                        "H_MilCap_mcamo"
                    };
                };
            };
            class mdt : all;
            class des : all;
            class wdl : all;
            class snw : all;
        };
    };
    class CfgGlasses {
        class glasses {
            class all {
                class vanilla {
                    glasses[] = {
                        "",
                        "G_Shades_Black";
                        "G_Shades_Blue",
                        "G_Shades_Red",
                        "G_Shades_Green",
                        "G_Bandanna_beast",
                        "G_Bandanna_blk",
                        "G_Bandanna_khk",
                        "G_Bandanna_oli",
                        "G_Bandanna_shades",
                        "G_Bandanna_tan"
                    };
                };
            };
        };
    };
    class CfgPrimaries {
        class rifle {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_Mk20_plain_F",
                        "arifle_Mk20C_plain_F",
                        "arifle_SPAR_01_blk_F"
                    };
                    defaultMagazine[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag"};
                };
            };
        };
        class riflegl {
            class all {
                class vanilla {
                    primaries[] = {
                        "arifle_Mk20_GL_plain_F",
                        "arifle_SPAR_01_GL_blk_F"
                    };
                    defaultMagazine[] = {"ACE_30Rnd_556x45_Stanag_Mk318_mag","1Rnd_HE_Grenade_shell"};
                };
            };
        };
        class lmg {
            class all {
                class vanilla {
                    primaries[] = {"LMG_03_F"};
                    defaultMagazine[] = {"200Rnd_556x45_Box_Red_F"};
                };
            };
        };
        class slmg {
            class all {
                class vanilla {
                    primaries[] = {"arifle_SPAR_02_blk_F"};
                    defaultMagazine[] = {"150Rnd_556x45_Drum_Mag_Tracer_F"};
                };
            };
        };
        class mmg {
            class all {
                class vanilla {
                    primaries[] = {"LMG_Zafir_F"};
                    defaultMagazine[] = {"150Rnd_762x54_Box_Tracer"};
                };
            };
        };
        class dmr {
            class all {
                class vanilla {
                    primaries[] = {"srifle_EBR_F"};
                    defaultMagazine[] = {"20Rnd_762x51_Mag"};
                };
            };
        };
        class sniper {
            class all {
                class vanilla {
                    primaries[] = {"srifle_DMR_02_F"};
                    defaultMagazine[] = {"ACE_10Rnd_338_300gr_HPBT_Mag"};
                };
            };
        };
    };
    class CfgSecondary {
        class pistol {
            class all {
                class vanilla {
                    secondaries[] = {
                        "hgun_P07_F",
                        "hgun_Rook40_F"
                    };
                    defaultMagazine[] = {"16Rnd_9x21_Mag"};
                };
            };
        };
    };
    class CfgLaunchers {
        class singleUse {
            class all {
                class vanilla {
                    launchers[] = {"launch_NLAW_F"};
                };
                defaultMagazine[] = {""};
            };
        };
        class at {
            class all {
                class vanilla {
                    launchers[] = {"launch_MRAWS_green_rail_F"};
                };
                defaultMagazine[] = {"MRAWS_HEAT_F"};
            };
        };
        class gat {
            class all {
                class vanilla {
                    launchers[] = {"launch_O_Titan_short_F"};
                };
                defaultMagazine[] = {"Titan_AT"};
            };
        };
    };
    class CfgAttachments {
        class muzzle556 {
            class silent {
                class vanilla {
                    attachments[] = {};
                };
            };
            class fire {
                class ace {
                    attachments[] = {};
                };
            };
        };
        class muzzle762 {
            class silent {
                class vanilla {
                    attachments[] = {};
                };
            };
            class fire {
                class ace {
                    attachments[] = {};
                };
            };
        };
        class muzzle338 {
            class all {
                class vanilla {
                    attachments[] = {"muzzle_snds_338_black"};
                };
            };
        };
        class opticsRifle {
            class day {
                class vanilla {
                    attachments[] = {};
                };
            };
            class night {
            };
        };
        class opticsMmg {
            class day {
                class vanilla {
                    attachments[] = {};
                };
            };
        };
        class opticsDmr {
            class day {
                class vanilla {
                    attachments[] = {};
                };
            };
        };
        class opticsSniper {
            class day {
                class vanilla {
                    attachments[] = {};
                };
            };
        };
        class laser {
            class night {
                class vanilla {
                    attachments[] = {};
                };
            };
            class day {
                class ace {
                    attachments[] = {};
                };
            };
        };
    };
    class CfgNVGs {
        class nvg {
            class night {
                class vanilla {
                    nvgs[] = {"ACE_NVG_Gen4"};
                };
            };
        };
    };
    class CfgBinoculars {
        class binocs {
            class all {
                class vanilla {
                    binoculars[] = {"Binocular"};
                };
            };
        };
        class rangefinder {
            class all {
                class ace {
                    binoculars[] = {"ACE_Vector"};
                };
            };
        };
        class laserdesignator {
            class all {
                class vanilla {
                    binoculars[] = {"Laserdesignator"};
                };
            };
        };
    };
    class CfgMaps {
        class map {
            class all {
                class vanilla {
                    maps[] = {"ItemMap"};
                };
            };
        };
    };
    class CfgCompass {
        class compass {
            class all {
                class vanilla {
                    compass[] = {"ItemCompass"};
                };
            };
        };
    };
    class CfgWatches {
        class watch {
            class all {
                class watch {
                    watches[] = {};
                };
            };
        };
    };
    class CfgGPS {
        class android {
            class all {
                class ctab {
                    gps[] = {};
                };
            };
        };
        class tablet {
            class all {
                class ctab {
                    gps[] = {};
                };
            };
        };
    };
    class CfgItems {
        class fak {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 2},
                        {"ACE_packingBandage", 8},
                        {"ACE_elasticBandage", 8},
                        {"ACE_quikclot", 5},
                        {"ACE_morphine", 2},
                        {"ACE_epinephrine", 2}
                    };
                };
            };
        };
        class clskit {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 5},
                        {"ACE_packingBandage", 30},
                        {"ACE_elasticBandage", 30},
                        {"ACE_quikclot", 30},
                        {"ACE_morphine", 10},
                        {"ACE_epinephrine", 10},
                        {"ACE_salineIV_250", 10}
                    };
                };
            };
        };
        class markers {
            class day {
                class vanace {
                    items[] = {
                        {"SmokeShellPurple", 2}
                    };
                };
            };
            class night {
                class vanace {
                    {"ACE_IR_Strobe_Item", 1},
                    {"ACE_Flashlight_XL50", 1},
                    {"ACE_Chemlight_IR", 2},
                    {"ACE_Chemlight_UltraHiOrange", 2}
                };
            };
            class both {
                class vanace {
                    items[] = {
                        {"ACE_IR_Strobe_Item", 1},
                        {"ACE_Flashlight_XL50", 1},
                        {"ACE_Chemlight_IR", 1},
                        {"ACE_Chemlight_UltraHiOrange", 1},
                        {"SmokeShellPurple", 1}
                    };
                };
            };
        };
        class guidancetools {
            class all {
                class ace {
                    items[] = {
                        {"ACE_CableTie", 2},
                        {"ACE_MapTools", 1}
                    };
                };
            };
        };
        class grenades {
            class day {
                class ace {
                    items[] = {
                        {"SmokeShell", 2},
                        {"ACE_M84", 2},
                        {"HandGrenade", 2}
                    };
                };
            };
            class night {
                class ace {
                    items[] = {
                        {"ACE_M84", 2},
                        {"HandGrenade", 2}
                    };
                };
            };
            class both : day;
        };
        class markervest {
            class day {
                class vanace {
                    items[] = {
                        {"SmokeShellPurple", 1}
                    };
                };
            };
            class night {
                class vanace {
                    items[] = {
                        {"ACE_Chemlight_IR", 1},
                        {"ACE_Chemlight_UltraHiOrange", 1},
                        {"SmokeShellPurple", 1}
                    };
                };
            };
            class both {
                class vanace {
                    items[] = {
                        {"ACE_Chemlight_IR", 1},
                        {"ACE_Chemlight_UltraHiOrange", 1},
                        {"SmokeShellPurple", 1}
                    };
                };
            };
        };
    };
};
