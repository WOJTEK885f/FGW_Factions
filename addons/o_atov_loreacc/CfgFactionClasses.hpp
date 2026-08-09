class CfgFactionClasses {
    class GVAR(Atov) {
        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_FactionName";
        priority = 1;
        side = 0;
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        flag = "data\flags\flag_AtovFederation_co.paa";
    };
};

class CfgIdentities {
    class FGW_Identity_Atov_Companion_Dimitro {
        name = "Dimitro";
        nameSound = "Dimitro";
        face = "WhiteHead_21";
        glasses = "None";
        speaker = "Male02RUS";
        pitch = 1.0;
    };
    class FGW_Identity_Atov_Companion_Kostyantin {
        name = "Kostyantin";
        nameSound = "Kostyantin";
        face = "LivonianHead_8";
        glasses = "None";
        speaker = "Male01RUS";
        pitch = 1.1;
    };
    class FGW_Identity_Atov_Companion_Oleg {
        name = "Oleg";
        nameSound = "Oleg";
        face = "WhiteHead_12";
        glasses = "None";
        speaker = "Male03RUS";
        pitch = 0.9;
    };
    class FGW_Identity_Atov_Companion_Vitaly {
        name = "Vitaly";
        nameSound = "Vitaly";
        face = "LivonianHead_5";
        glasses = "USP_BEARD_BRN5";
        speaker = "Male02RUS";
        pitch = 1.0;
    };
};

// Forward declarations for CfgFaces parent classes
class Default;
class LivonianHead_5;
class WhiteHead_27;
class WhiteHead_01;
class WhiteHead_04;

class CfgFaces {
    class Man_A3: Default {
        class FGW_Face_Vitaly: LivonianHead_5 {
            displayName = "FGW Vitaly";
            identityTypes[] = {"FGW_Face_Vitaly_Tag"};
        };
        class FGW_Face_Kostyantin: WhiteHead_27 {
            displayName = "FGW Kostyantin";
            identityTypes[] = {"FGW_Face_Kostyantin_Tag"};
        };
        class FGW_Face_Oleg: WhiteHead_01 {
            displayName = "FGW Oleg";
            identityTypes[] = {"FGW_Face_Oleg_Tag"};
        };
        class FGW_Face_Dimitro: WhiteHead_04 {
            displayName = "FGW Dimitro";
            identityTypes[] = {"FGW_Face_Dimitro_Tag"};
        };
    };
};
