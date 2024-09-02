class CfgTSSLoadouts {
    class CfgItems {

        class fak {
            class all {
                class ace {
                    items[] += {
                        {"adv_aceSplint_splint", 2},
                        {"KAT_Painkiller", 2}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class medkitclsalpha {
            class all {
                class ace {
                    items[] += {
                        {"ACE_salineIV_500", 4},
                        {"ACE_bodyBag", 1},
                        {"adv_aceSplint_splint", 7},
                        {"KAT_guedel", 5},
                        {"KAT_Pulseoximeter", 3},
                        {"KAT_accuvac", 1}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class medkitclsbravo {
            class all {
                class ace {
                    items[] += {
                        {"adv_aceSplint_splint", 10},
                        {"KAT_guedel", 10},
                        {"KAT_Pulseoximeter", 5}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class medkitptd {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 5},
                        {"ACE_packingBandage", 20},
                        {"ACE_elasticBandage", 15},
                        {"ACE_quikclot", 15},
                        {"ACE_morphine", 10},
                        {"ACE_epinephrine", 15},
                        {"ACE_salineIV_500", 10},
                        {"ACE_salineIV", 5},
                        {"ACE_surgicalKit",7},
                        {"ACE_bodyBag", 3}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
        class medkitsniperspotter {
            class all {
                class ace {
                    items[] = {
                        {"ACE_tourniquet", 2},
                        {"ACE_packingBandage", 10},
                        {"ACE_elasticBandage", 7},
                        {"ACE_quikclot", 7},
                        {"ACE_morphine", 2},
                        {"ACE_epinephrine", 2},
                        {"ACE_salineIV_500", 2}
                    };
                };
            };
            class day : all {};
            class night : all {};
            class both : all {};
        };
    };
};
