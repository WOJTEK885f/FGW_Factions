class CfgFactionClasses {
    class GVAR(VFF) {
        displayName = "$STR_gr7bow_fgwf_b_vff_loreacc_FactionName";
        priority = 1;
        side = 1;
        icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
        flag = "data\flags\flag_ValkyrieFemaleFighters_co.paa";
    };
};

class CfgIdentities {
    class FGW_Identity_VFF_Companion_Victoria {
        name = "Victoria";
        nameSound = "Victoria";
        face = "WhiteHead_01";
        glasses = "None";
        speaker = "rhs_Female01ENG";
        pitch = 1.0;
    };
    class FGW_Identity_VFF_Companion_Oksana {
        name = "Oksana";
        nameSound = "Oksana";
        face = "WhiteHead_01";
        glasses = "None";
        speaker = "rhs_Female01ENG";
        pitch = 0.95;
    };
};

// Forward declarations for CfgFaces parent classes
class Default;
class WhiteHead_01;

class CfgFaces {
    class Man_A3: Default {
        class FGW_Face_Victoria: WhiteHead_01 {
            disabled = 1;
            displayName = "FGW Victoria";
            identityTypes[] = {"FGW_Face_Victoria_Tag"};
        };
        class FGW_Face_Oksana: WhiteHead_01 {
            disabled = 1;
            displayName = "FGW Oksana";
            identityTypes[] = {"FGW_Face_Oksana_Tag"};
        };
    };
};
