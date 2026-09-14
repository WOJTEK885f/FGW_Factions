class CfgGroups {
    class Indep {
        class GVAR(FCA) {
            name = CSTRING(FactionName);

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_MilitiaSquad) {
                    name = CSTRING(Group_MilitiaSquad);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_FCA_Militia"; rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_InfantrySquad) {
                    name = CSTRING(Group_InfantrySquad);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Grenadier"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Grenadier"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_ShockSquad) {
                    name = CSTRING(Group_ShockSquad);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_Army_FieldPatrol) {
                    name = CSTRING(Group_Army_FieldPatrol);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Rifleman"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Militia";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Militia";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Militia";  rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_Militia";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_Army_RifleCompany) {
                    name = CSTRING(Group_Army_RifleCompany);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };

                class GVAR(Group_Army_GrenadiersCompany) {
                    name = CSTRING(Group_Army_GrenadiersCompany);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };

                class GVAR(Group_Army_ShockBattalion) {
                    name = CSTRING(Group_Army_ShockBattalion);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";   rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_FCA_Militia";    rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_Army_GuardGrenadiers) {
                    name = CSTRING(Group_Army_GuardGrenadiers);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";   rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop"; rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_FCA_Militia";    rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_GR7BOW_FGWF_Main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_MilitiaSquad_Ostap) {
                    name = CSTRING(Group_MilitiaSquad_Ostap);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Companion_Ostap"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Militia";         rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Militia";         rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Militia";         rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_Militia";         rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_FCA_Militia";         rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_FCA_Militia";         rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };

                class GVAR(Group_InfantrySquad_Stepan) {
                    name = CSTRING(Group_InfantrySquad_Stepan);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Companion_Stepan"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";        rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";         rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";        rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_Grenadier";        rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";         rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_FCA_Rifleman";         rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };

                class GVAR(Group_ShockSquad_Bohdan) {
                    name = CSTRING(Group_ShockSquad_Bohdan);
                    side = 2;
                    faction = QGVAR(FCA);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_FCA_Companion_Bohdan"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop";       rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop";       rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop";       rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_FCA_ShockTroop";       rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };
            };
        };
    };
};
