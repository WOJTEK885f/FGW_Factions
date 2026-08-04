class CfgGroups {
    class East {
        class GVAR(Atov) {
            name = "$STR_gr7bow_fgw_factions_o_atov_loreacc_FactionName";

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_InfantryFireteam) {
                    name = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Group_InfantryFireteam";
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGW_O_Atov_Infantry";      rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGW_O_Atov_Machinegunner"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGW_O_Atov_Sharpshooter";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGW_O_Atov_Infantry";      rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGW_O_Atov_Infantry";      rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_WeaponTeam) {
                    name = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Group_WeaponTeam";
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGW_O_Atov_Machinegunner"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGW_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGW_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                };

                class GVAR(Group_SpecialForceTeam) {
                    name = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Group_SpecialForceTeam";
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGW_O_Atov_SpecialForce"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGW_O_Atov_SpecialForce"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGW_O_Atov_SpecialForce"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGW_O_Atov_SpecialForce"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGW_O_Atov_SpecialForce"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };
            };
        };
    };
};
