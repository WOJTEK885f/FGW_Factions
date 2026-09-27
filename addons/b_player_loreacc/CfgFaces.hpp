// Forward declarations of parent classes
class Default;
class LivonianHead_10;
class LivonianHead_3;
class LivonianHead_7;
class WhiteHead_04;
class WhiteHead_31;

class CfgFaces {
    class Man_A3: Default {
        class FGWF_Face_Petro: LivonianHead_10 {
            disabled = 1;
            displayName = "FGW Petro";
            identityTypes[] = {"FGWF_Face_Petro_Tag"};
        };
        class FGWF_Face_Sergei: LivonianHead_3 {
            disabled = 1;
            displayName = "FGW Sergei";
            identityTypes[] = {"FGWF_Face_Sergei_Tag"};
        };
        class FGWF_Face_Georgiy: LivonianHead_7 {
            disabled = 1;
            displayName = "FGW Georgiy";
            identityTypes[] = {"FGWF_Face_Georgiy_Tag"};
        };
        class FGWF_Face_Ivan: WhiteHead_04 {
            disabled = 1;
            displayName = "FGW Ivan";
            identityTypes[] = {"FGWF_Face_Ivan_Tag"};
        };
        class FGWF_Face_Yevgen: WhiteHead_31 {
            disabled = 1;
            displayName = "FGW Yevgen";
            identityTypes[] = {"FGWF_Face_Yevgen_Tag"};
        };
    };
};
