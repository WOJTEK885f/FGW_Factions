// Forward declarations of parent classes
class Default;
class LivonianHead_5;
class WhiteHead_04;

class CfgFaces {
    class Man_A3: Default {
        class FGWF_Face_Igor: LivonianHead_5 {
            disabled = 1;
            displayName = "FGW Igor";
            identityTypes[] = {"FGWF_Face_Igor_Tag"};
        };
        class FGWF_Face_Volodimir: WhiteHead_04 {
            disabled = 1;
            displayName = "FGW Volodimir";
            identityTypes[] = {"FGWF_Face_Volodimir_Tag"};
        };
    };
};
