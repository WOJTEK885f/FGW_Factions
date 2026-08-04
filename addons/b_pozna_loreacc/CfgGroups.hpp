class CfgGroups {
    class West {
        class GVAR(Pozna) {
            name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_FactionName";

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_RifleSquad) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_RifleSquad";
                    side = 1;
                    faction = QGVAR(Pozna);

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Commando"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Commando"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {-10,10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_MarksmanTeam) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_MarksmanTeam";
                    side = 1;
                    faction = QGVAR(Pozna);

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                };
            };
        };
    };
};
