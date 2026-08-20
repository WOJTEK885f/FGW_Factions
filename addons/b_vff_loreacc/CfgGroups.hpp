class CfgGroups {
    class West {
        class GVAR(VFF) {
            name = CSTRING(FactionName);

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_MarineSquad) {
                    name = CSTRING(Group_MarineSquad);
                    side = 1;
                    faction = QGVAR(VFF);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_VFF_Marine"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_VFF_Marine"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_VFF_Marine"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_VFF_Marine"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_VFF_Marine"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_FightersSquad) {
                    name = CSTRING(Group_FightersSquad);
                    side = 1;
                    faction = QGVAR(VFF);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_CombatCompanyDetatchment) {
                    name = CSTRING(Group_CombatCompanyDetatchment);
                    side = 1;
                    faction = QGVAR(VFF);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_VFF_Marine";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_VFF_Marine";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_VFF_Marine";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_VFF_Marine";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_VFF_Marine";  rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_VFF_Fighter"; rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_SpecialPoliceGroup) {
                    name = CSTRING(Group_SpecialPoliceGroup);
                    side = 1;
                    faction = QGVAR(VFF);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_VFF_SpecialPolice"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_VFF_SpecialPolice"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_VFF_SpecialPolice"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_VFF_Fighter";       rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_gr7bow_fgw_factions_main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_MarineSquad_Victoria) {
                    name = CSTRING(Group_MarineSquad_Victoria);
                    side = 1;
                    faction = QGVAR(VFF);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_VFF_Companion_Victoria"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_VFF_Marine";             rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_VFF_Marine";             rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_VFF_Marine";             rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_VFF_Marine";             rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_VFF_Marine";             rank = "PRIVATE";    position[] = {15,-15,0}; };
                };

                class GVAR(Group_FightersSquad_Oksana) {
                    name = CSTRING(Group_FightersSquad_Oksana);
                    side = 1;
                    faction = QGVAR(VFF);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_VFF_Companion_Oksana"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_VFF_Fighter";          rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_VFF_Fighter";          rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_VFF_Fighter";          rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_VFF_Fighter";          rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_VFF_Fighter";          rank = "PRIVATE";    position[] = {15,-15,0}; };
                };
            };
        };
    };
};
