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

                class GVAR(Group_GSSSecurityFireteam) {
                    name = CSTRING(Group_GSSSecurityFireteam);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_Army_Convoy) {
                    name = CSTRING(Group_Army_Convoy);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_support.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_ArmedEscortGuard_MP5";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_ArmedEscortGuard_MP5" ;   rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_ArmedEscortGuard_M1A1";   rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGWF_B_Player_ArmedEscortGuard_SPAS12"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGWF_B_Player_ArmedEscortGuard_SPAS12"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_GR7BOW_FGWF_Main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_MilitiaInfantrySquad_Petro) {
                    name = CSTRING(Group_MilitiaInfantrySquad_Petro);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_Companion_Petro";              rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_SteelHelmet";  rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_Light";        rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_OldHelmet";    rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_SteelHelmet";  rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGWF_B_Player_MilitiaRifleman_BikeHelmet";   rank = "PRIVATE";    position[] = {15,-15,0}; };
                };

                class GVAR(Group_MilitiaSniperTeam_Sergei) {
                    name = CSTRING(Group_MilitiaSniperTeam_Sergei);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_Companion_Sergei"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_MilitiaSniper";   rank = "CORPORAL";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_MilitiaSniper";   rank = "PRIVATE";    position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGWF_B_Player_MilitiaSniper";   rank = "PRIVATE";    position[] = {10,-10,0}; };
                };

                class GVAR(Group_GSSSecurityFireteam_Georgiy) {
                    name = CSTRING(Group_GSSSecurityFireteam_Georgiy);
                    side = 1;
                    faction = QGVAR(Player);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGWF_B_Player_Companion_Georgiy"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard";     rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard";     rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard";     rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard";     rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGWF_B_Player_ArmedBodyguard";     rank = "PRIVATE";    position[] = {15,-15,0}; };
                };
            };
        };
    };
};
