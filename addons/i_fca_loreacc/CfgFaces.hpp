// Forward declarations of parent classes
class Default;
class LivonianHead_7;
class WhiteHead_04;
class GreekHead_A3_03;

class CfgFaces {
    class Man_A3: Default {
        class FGWF_Face_Ostap: WhiteHead_04 {
            disabled = 1;
            displayName = "FGW Ostap";
            identityTypes[] = {"FGWF_Face_Ostap_Tag"};
        };
        class FGWF_Face_Stepan: GreekHead_A3_03 {
            disabled = 1;
            displayName = "FGW Stepan";
            identityTypes[] = {"FGWF_Face_Stepan_Tag"};
        };
        class FGWF_Face_Bohdan: LivonianHead_7 {
            disabled = 1;
            displayName = "FGW Bohdan";
            identityTypes[] = {"FGWF_Face_Bohdan_Tag"};
        };
    };
};
