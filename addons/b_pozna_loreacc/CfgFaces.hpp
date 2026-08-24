// Forward declarations of parent classes
class Default;
class WhiteHead_31;
class LivonianHead_10;
class LivonianHead_3;
class WhiteHead_01;

class CfgFaces {
    class Man_A3: Default {
        class FGWF_Face_Roman: WhiteHead_31 {
            disabled = 1;
            displayName = "FGW Roman";
            identityTypes[] = {"FGWF_Face_Roman_Tag"};
        };
        class FGWF_Face_Yuriy: LivonianHead_10 {
            disabled = 1;
            displayName = "FGW Yuriy";
            identityTypes[] = {"FGWF_Face_Yuriy_Tag"};
        };
        class FGWF_Face_Denis: LivonianHead_3 {
            disabled = 1;
            displayName = "FGW Denis";
            identityTypes[] = {"FGWF_Face_Denis_Tag"};
        };
        class FGWF_Face_Tatyana: WhiteHead_01 {
            disabled = 1;
            displayName = "FGW Tatyana";
            identityTypes[] = {"FGWF_Face_Tatyana_Tag"};
        };
    };
};
