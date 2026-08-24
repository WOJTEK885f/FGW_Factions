class CfgGroups {
    class East {
        class GVAR(Atov) {
            name = CSTRING(FactionName);

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_InfantryFireteam) {
                    name = CSTRING(Group_InfantryFireteam);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Infantry";      rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Sharpshooter";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Infantry";      rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Infantry";      rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_WeaponTeam) {
                    name = CSTRING(Group_WeaponTeam);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "CORPORAL"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                };

                class GVAR(Group_Army_NationalGuard) {
                    name = CSTRING(Group_Army_NationalGuard);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Infantry";      rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Sharpshooter";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Commando";      rank = "CORPORAL"; position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Scout";         rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 0; vehicle = "FGWF_O_Atov_Infantry";      rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_Army_SecurityPatrol) {
                    name = CSTRING(Group_Army_SecurityPatrol);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_ArmedPolice"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_ArmedPolice"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_ArmedPolice"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Infantry";    rank = "PRIVATE";  position[] = {10,-10,0}; };
                };

                class GVAR(Group_Army_Fortified) {
                    name = CSTRING(Group_Army_Fortified);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Commando"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Commando"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Commando"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Infantry"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Commando"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };
            };

            class SpecialForces {
                name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";

                class GVAR(Group_SpecialForceTeam) {
                    name = CSTRING(Group_SpecialForceTeam);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce"; rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_Army_SpecialForce) {
                    name = CSTRING(Group_Army_SpecialForce);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_SpecialForce";  rank = "PRIVATE";  position[] = {-10,-10,0}; };
                };

                class GVAR(Group_Army_Investigation) {
                    name = CSTRING(Group_Army_Investigation);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Scout";        rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Scout";        rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Scout";        rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Sharpshooter"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_gr7bow_fgwf_main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_Army_Investigation_Kostyantin) {
                    name = CSTRING(Group_Army_Investigation_Kostyantin);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Companion_Kostyantin"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Scout";                rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Scout";                rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Scout";                rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Sharpshooter";         rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };

                class GVAR(Group_InfantryFireteam_Oleg) {
                    name = CSTRING(Group_InfantryFireteam_Oleg);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Companion_Oleg";  rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Infantry";        rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner";   rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Sharpshooter";    rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Infantry";        rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 0; vehicle = "FGWF_O_Atov_Infantry";        rank = "PRIVATE";    position[] = {15,-15,0}; };
                };

                class GVAR(Group_NationalGuard_Dimitro) {
                    name = CSTRING(Group_Army_NationalGuard_Dimitro);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Companion_Dimitro"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner";     rank = "PRIVATE";    position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_Sharpshooter";      rank = "PRIVATE";    position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_Commando";          rank = "CORPORAL";   position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Scout";             rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 0; vehicle = "FGWF_O_Atov_Infantry";          rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 0; vehicle = "FGWF_O_Atov_Machinegunner";     rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };

                class GVAR(Group_SecurityPatrol_Vitaly) {
                    name = CSTRING(Group_Army_SecurityPatrol_Vitaly);
                    side = 0;
                    faction = QGVAR(Atov);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Atov_Companion_Vitaly"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Atov_ArmedPolice";      rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Atov_ArmedPolice";      rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Atov_ArmedPolice";      rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Atov_Infantry";         rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };
            };
        };
    };
};
