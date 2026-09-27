class CfgGroups {
    class East {
        class GVAR(Alpha) {
            name = CSTRING(FactionName);

            class SpecialForces {
                name = "$STR_A3_CfgGroups_West_BLU_F_SpecOps0";

                class GVAR(Group_Army_AdvanceForces) {
                    name = CSTRING(Group_Army_AdvanceForces);
                    side = 0;
                    faction = QGVAR(Alpha);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";      rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Alpha_EliteStormtrooper"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Alpha_EliteSniper";       rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Alpha_EliteScout";        rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";      rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 0; vehicle = "FGWF_O_Alpha_EliteStormtrooper"; rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 0; vehicle = "FGWF_O_Alpha_EliteSniper";       rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };

                class GVAR(Group_Army_FortifiedForces) {
                    name = CSTRING(Group_Army_FortifiedForces);
                    side = 0;
                    faction = QGVAR(Alpha);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";      rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Alpha_EliteStormtrooper"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Alpha_EliteStormtrooper"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";      rank = "PRIVATE";  position[] = {10,-10,0}; };
                };

                class GVAR(Group_Army_SpecialForces) {
                    name = CSTRING(Group_Army_SpecialForces);
                    side = 0;
                    faction = QGVAR(Alpha);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce"; rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };

                class GVAR(Group_Army_TrumpForces) {
                    name = CSTRING(Group_Army_TrumpForces);
                    side = 0;
                    faction = QGVAR(Alpha);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Alpha_EliteScout";   rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Alpha_EliteSniper";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Alpha_EliteSniper";  rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_GR7BOW_FGWF_Main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_Army_FortifiedForces_Igor) {
                    name = CSTRING(Group_Army_FortifiedForces_Igor);
                    side = 0;
                    faction = QGVAR(Alpha);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Alpha_Companion_Igor";    rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";      rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Alpha_EliteStormtrooper"; rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Alpha_EliteStormtrooper"; rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";      rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };

                class GVAR(Group_Army_TrumpForces_Volodimir) {
                    name = CSTRING(Group_Army_TrumpForces_Volodimir);
                    side = 0;
                    faction = QGVAR(Alpha);
                    icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Alpha_Companion_Volodimir"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Alpha_SpecialForce";        rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Alpha_EliteScout";          rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Alpha_EliteSniper";         rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Alpha_EliteSniper";         rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };
            };
        };
    };
};
