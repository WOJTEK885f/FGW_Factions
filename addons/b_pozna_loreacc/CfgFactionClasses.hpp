class CfgFactionClasses {
    class GVAR(Pozna) {
        displayName = CSTRING(FactionName);
        priority = 1;
        side = 1;
        icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
        flag = "data\flags\flag_PoznaBattalion_co.paa";
    };
};

class CfgIdentities {
    class FGW_Identity_Pozna_Companion_Roman {
        name = "Roman";
        nameSound = "Roman";
        face = "WhiteHead_31";
        glasses = "USP_BEARD_BRN2";
        speaker = "Male03RUS";
        pitch = 1.0;
    };
    class FGW_Identity_Pozna_Companion_Yuriy {
        name = "Yuriy";
        nameSound = "Yuriy";
        face = "LivonianHead_10";
        glasses = "USP_BEARD_CH_MS_BLK2";
        speaker = "Male02RUS";
        pitch = 0.9;
    };
    class FGW_Identity_Pozna_Companion_Denis {
        name = "Denis";
        nameSound = "Denis";
        face = "LivonianHead_3";
        glasses = "None";
        speaker = "Male01RUS";
        pitch = 1.1;
    };
    class FGW_Identity_Pozna_Companion_Tatyana {
        name = "Tatyana";
        nameSound = "Tatyana";
        face = "Default";
        glasses = "USP_BALACLAVA_ADV2_BLK";
        speaker = "CUP_D_Female01_EN";
        pitch = 1.0;
    };
};

// Forward declarations for CfgFaces parent classes
class Default;
class WhiteHead_31;
class LivonianHead_10;
class LivonianHead_3;
class WhiteHead_01;

class CfgFaces {
    class Man_A3: Default {
        class FGW_Face_Roman: WhiteHead_31 {
            disabled = 1;
            displayName = "FGW Roman";
            identityTypes[] = {"FGW_Face_Roman_Tag"};
        };
        class FGW_Face_Yuriy: LivonianHead_10 {
            disabled = 1;
            displayName = "FGW Yuriy";
            identityTypes[] = {"FGW_Face_Yuriy_Tag"};
        };
        class FGW_Face_Denis: LivonianHead_3 {
            disabled = 1;
            displayName = "FGW Denis";
            identityTypes[] = {"FGW_Face_Denis_Tag"};
        };
        class FGW_Face_Tatyana: WhiteHead_01 {
            disabled = 1;
            displayName = "FGW Tatyana";
            identityTypes[] = {"FGW_Face_Tatyana_Tag"};
        };
    };
};
