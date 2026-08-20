class CfgFactionClasses {
    class GVAR(Uman) {
        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_FactionName";
        priority = 1;
        side = 0;
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        flag = "data\flags\flag_UmanBrotherhood_co.paa";
    };
};

class CfgIdentities {
    class FGW_Identity_Uman_Companion_Finn {
        name = "Finn";
        nameSound = "Finn";
        face = "Ioannou";
        glasses = "None";
        speaker = "Male04ENGB";
        pitch = 1.0;
    };
    class FGW_Identity_Uman_Companion_Haaken {
        name = "Haaken";
        nameSound = "Haaken";
        face = "RussianHead_3";
        glasses = "None";
        speaker = "CUP_D_Male05_EN";
        pitch = 1.05;
    };
};

// Forward declarations for CfgFaces parent classes
class Default;
class Ioannou;
class RussianHead_3;

class CfgFaces {
    class Man_A3: Default {
        class FGW_Face_Finn: Ioannou {
            disabled = 1;
            displayName = "FGW Finn";
            identityTypes[] = {"FGW_Face_Finn_Tag"};
        };
        class FGW_Face_Haaken: RussianHead_3 {
            disabled = 1;
            displayName = "FGW Haaken";
            identityTypes[] = {"FGW_Face_Haaken_Tag"};
        };
    };
};
