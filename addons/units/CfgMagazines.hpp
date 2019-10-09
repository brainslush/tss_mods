class CfgMagazines {
    class RPG32_HE_F;
    class 200Rnd_65x39_cased_Box;
    class GVAR(dummymagazine): 200Rnd_65x39_cased_Box {
        scope = 1;
        scopeArsenal = 0;
        displayname = "Dummy Magazine";
        mass = 10;
    };
    class GVAR(dummymissile): RPG32_HE_F {
        scope = 1;
        scopeArsenal = 0;
        displayname = "Dummy Missile";
        mass = 10;
    };
};
