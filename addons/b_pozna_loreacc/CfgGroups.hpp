class CfgGroups {
    class West {
        class GVAR(Pozna) {
            displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_FactionName";

            class Infantry {
                displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_GroupCategory_Infantry";

                class GVAR(Group_RifleSquad) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_RifleSquad";
                    side = 1;
                    faction = QGVAR(Pozna);

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Commando"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Commando"; rank = "CORPORAL"; position[] = {3,-3,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {3,3,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {6,-3,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {6,3,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {9,-3,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {9,3,0}; };
                };

                class GVAR(Group_MarksmanTeam) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_MarksmanTeam";
                    side = 1;
                    faction = QGVAR(Pozna);

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE"; position[] = {3,-3,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {3,3,0}; };
                };
            };
        };
    };
};
