class tss_fd_helipilot;
class tss_pmc_helipilot : tss_fd_helipilot {
    TSSAUTHOR
    PMCSETBASE
    side = 2;

    tss_primaries[] = {"riflePMC"};
    tss_secondaries[] = {"pistolPMC"};

    tss_vestsContent[] = {
        "anprc148",
        "anprc152",
        {"primarymagazines",2},
        {"secondarymagazines",1}
    };
};
