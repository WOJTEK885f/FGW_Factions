class CfgFactionClasses {
    class GVAR(VFF) {
        displayName = "$STR_gr7bow_fgw_factions_b_vff_loreacc_FactionName";
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
        face = "fsof_femaleCauc02t4_GreenEyes_Bun_BrownHair";
        glasses = "None";
        speaker = "rhs_Female01ENG";
        pitch = 1.0;
    };
    class FGW_Identity_VFF_Companion_Oksana {
        name = "Oksana";
        nameSound = "Oksana";
        face = "fsof_FemaleCauc01t2_GreenEyes_Bun_BrownHair";
        glasses = "None";
        speaker = "rhs_Female01ENG";
        pitch = 0.95;
    };
};

// Forward declarations for CfgFaces parent classes
class Default;
class fsof_femaleCauc02t4_GreenEyes_Bun_BrownHair;
class fsof_FemaleCauc01t2_GreenEyes_Bun_BrownHair;

class CfgFaces {
    class Man_A3: Default {
        class FGW_Face_Victoria: fsof_femaleCauc02t4_GreenEyes_Bun_BrownHair {
            disabled = 1;
            displayName = "FGW Victoria";
            identityTypes[] = {"FGW_Face_Victoria_Tag"};
        };
        class FGW_Face_Oksana: fsof_FemaleCauc01t2_GreenEyes_Bun_BrownHair {
            disabled = 1;
            displayName = "FGW Oksana";
            identityTypes[] = {"FGW_Face_Oksana_Tag"};
        };
    };
};
