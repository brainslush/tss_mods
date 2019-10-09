class tss_recon_snp;
class tss_pmc_snp: tss_recon_snp {
    PMCSETBASE
    side = 2;

    tss_primaries[] = {"sniperPMC"};
    tss_secondaries[] = {"pistolPMC"};

    tss_uniforms[] = {"pmc"};

    tss_helmets[] = {"pmc"};
    tss_gps[] = {};
};
class tss_recon_spt;
class tss_pmc_spt: tss_recon_spt {
    PMCSETBASE
    side = 2;

    tss_primaries[] = {"dmrPMC"};
    tss_secondaries[] = {"pistolPMC"};

    tss_uniforms[] = {"pmc"};

    tss_helmets[] = {"pmc"};
    tss_gps[] = {};
};
