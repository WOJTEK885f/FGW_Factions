class CfgGroups {
    class Indep {
        class GVAR(CFR) {
            name = CSTRING(FactionName);

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_ChernivkanMilitiaPatrol) {
                    name = CSTRING(Group_ChernivkanMilitiaPatrol);
                    side = 2;
                    faction = QGVAR(CFR);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_CFR_Fighter";                     rank = "SERGEANT";   position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_CFR_Grenadier";                   rank = "CORPORAL";   position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_CFR_DM";                          rank = "PRIVATE";    position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_CFR_MilitiaRifleman_SteelHelmet"; rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_CFR_MilitiaSMGFighter";           rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_CFR_MilitiaSniper";               rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_CFR_MaleVillager";                rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };

                class GVAR(Group_ChernivkanDefenceArmy) {
                    name = CSTRING(Group_ChernivkanDefenceArmy);
                    side = 2;
                    faction = QGVAR(CFR);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_CFR_Fighter";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_CFR_Grenadier"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_CFR_Fighter";   rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_CFR_Grenadier"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_CFR_DM";        rank = "PRIVATE";  position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_CFR_Fighter";   rank = "PRIVATE";  position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_CFR_Grenadier"; rank = "PRIVATE";  position[] = {-15,-15,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_GR7BOW_FGWF_Main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_ChernivkanMilitiaPatrol_Olga) {
                    name = CSTRING(Group_ChernivkanMilitiaPatrol_Olga);
                    side = 2;
                    faction = QGVAR(CFR);
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

                    class Unit0 { side = 2; vehicle = "FGWF_I_CFR_Companion_Olga";            rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 2; vehicle = "FGWF_I_CFR_Fighter";                   rank = "CORPORAL";   position[] = {5,-5,0}; };
                    class Unit2 { side = 2; vehicle = "FGWF_I_CFR_Grenadier";                 rank = "PRIVATE";    position[] = {-5,-5,0}; };
                    class Unit3 { side = 2; vehicle = "FGWF_I_CFR_DM";                        rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 2; vehicle = "FGWF_I_CFR_MilitiaRifleman_OldHelmet"; rank = "PRIVATE";    position[] = {-10,-10,0}; };
                    class Unit5 { side = 2; vehicle = "FGWF_I_CFR_MilitiaSMGFighter";         rank = "PRIVATE";    position[] = {15,-15,0}; };
                    class Unit6 { side = 2; vehicle = "FGWF_I_CFR_MilitiaSniper";             rank = "PRIVATE";    position[] = {-15,-15,0}; };
                };
            };
        };
    };
};
