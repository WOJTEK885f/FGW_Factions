// Forward declarations of parent classes
class Default;
class LivonianHead_5;
class WhiteHead_27;
class WhiteHead_01;
class WhiteHead_04;

class CfgFaces {
    class Man_A3: Default {
        class FGW_Face_Vitaly: LivonianHead_5 {
            disabled = 1;
            displayName = "FGW Vitaly";
            identityTypes[] = {"FGW_Face_Vitaly_Tag"};
        };
        class FGW_Face_Kostyantin: WhiteHead_27 {
            disabled = 1;
            displayName = "FGW Kostyantin";
            identityTypes[] = {"FGW_Face_Kostyantin_Tag"};
        };
        class FGW_Face_Oleg: WhiteHead_01 {
            disabled = 1;
            displayName = "FGW Oleg";
            identityTypes[] = {"FGW_Face_Oleg_Tag"};
        };
        class FGW_Face_Dimitro: WhiteHead_04 {
            disabled = 1;
            displayName = "FGW Dimitro";
            identityTypes[] = {"FGW_Face_Dimitro_Tag"};
        };
    };
};
