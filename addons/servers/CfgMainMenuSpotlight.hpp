class CfgMainMenuSpotlight {
    class GVAR(joinCombat) {
        text = "TSS Combat Server";
        picture = QPATHTOF(ui\server_join_logo.paa);
        action = '["195.201.169.5", 2330, "zeCElQX"] call (uiNamespace getVariable QFUNC(joinServer))';
        actionText = "Join TSS Combat Server";
        condition = "true";
    };

    delete AoW_Showcase_Future;
    delete AoW_Showcase_AoW;

    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;

    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Orange_Campaign;

    delete Showcase_TankDestroyers;

    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;

    delete Tanks_Campaign_01;

    delete OldMan;

    delete Contact_Campaign;

    delete gm_campaign_01;

    delete SP_FD14;
};
