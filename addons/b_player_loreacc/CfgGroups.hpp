class CfgGroups {
    class West {
        class GVAR(Player) {
            name = CSTRING(FactionName);

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_MilitiaInfantrySquad) {
                    name = CSTRING(Group_MilitiaInfantrySquad);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_SteelHelmet"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_Light";       rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_OldHelmet";   rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_SteelHelmet"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_BikeHelmet";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_MilitiaSniperTeam) {
                    name = CSTRING(Group_MilitiaSniperTeam);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_MilitiaSniper"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_MilitiaSniper"; rank = "PRIVATE";  position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_MilitiaSniper"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                };
            };
        };
    };
};
