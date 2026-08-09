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
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Commando"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Commando"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_Pozna_Fighter";  rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_MarksmanTeam) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_MarksmanTeam";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                };

                class GVAR(Group_Army_RifleCompany) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_Army_RifleCompany";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Fighter";     rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Fighter";     rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_Fighter";     rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_Fighter";     rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_Fighter";     rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_Pozna_Fighter";     rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_Army_ReconPlatoon) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_Army_ReconPlatoon";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Commando";    rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_SniperElite"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };

            class Infantry_CompanionLead {
                name = "$STR_gr7bow_fgw_factions_main_Subcat_Infantry_CompanionLead";

                class GVAR(Group_RifleSquad_Yuriy) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_RifleSquad_Yuriy";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Companion_Yuriy"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Commando";        rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_Commando";        rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };

                class GVAR(Group_MarksmanTeam_Roman) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_MarksmanTeam_Roman";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Companion_Roman"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";     rank = "CORPORAL";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";     rank = "PRIVATE";    position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";     rank = "PRIVATE";    position[] = {10,-10,0}; };
                };

                class GVAR(Group_Army_RifleCompany_Denis) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_Army_RifleCompany_Denis";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Companion_Denis"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 1; vehicle = "FGW_B_Pozna_Fighter";         rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";     rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };

                class GVAR(Group_Army_ReconPlatoon_Tatyana) {
                    name = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Group_Army_ReconPlatoon_Tatyana";
                    side = 1;
                    faction = QGVAR(Pozna);
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";

                    class Unit0 { side = 1; vehicle = "FGW_B_Pozna_Companion_Tatyana"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 1; vehicle = "FGW_B_Pozna_Commando";          rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";       rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";       rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 1; vehicle = "FGW_B_Pozna_SniperElite";       rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };
            };
        };
    };
};
