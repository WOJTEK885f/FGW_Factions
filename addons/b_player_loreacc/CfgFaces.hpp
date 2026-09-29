// Forward declarations of parent classes
class Default;
class GreekHead_A3_12;
class LivonianHead_3;
class WhiteHead_09;
class WhiteHead_25;
class WhiteHead_32;

class CfgFaces {
    class Man_A3: Default {
        class FGWF_Face_Petro: WhiteHead_25 {
            disabled = 1;
            displayName = "FGW Petro";
            identityTypes[] = {"FGWF_Face_Petro_Tag"};
        };
        class FGWF_Face_Sergei: WhiteHead_09 {
            disabled = 1;
            displayName = "FGW Sergei";
            identityTypes[] = {"FGWF_Face_Sergei_Tag"};
        };
        class FGWF_Face_Georgiy: WhiteHead_32 {
            disabled = 1;
            displayName = "FGW Georgiy";
            identityTypes[] = {"FGWF_Face_Georgiy_Tag"};
        };
        class FGWF_Face_Ivan: LivonianHead_3 {
            disabled = 1;
            displayName = "FGW Ivan";
            identityTypes[] = {"FGWF_Face_Ivan_Tag"};
        };
        class FGWF_Face_Yevgen: GreekHead_A3_12 {
            disabled = 1;
            displayName = "FGW Yevgen";
            identityTypes[] = {"FGWF_Face_Yevgen_Tag"};
        };
    };
};
