class CfgGroups {
    class East {
        class GVAR(Uman) {
            name = CSTRING(FactionName);

            class Infantry {
                name = "$STR_A3_CfgGroups_West_BLU_F_Infantry0";

                class GVAR(Group_TerroristGroup) {
                    name = CSTRING(Group_TerroristGroup);
                    side = 0;
                    faction = QGVAR(Uman);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AK74M";  rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AKS74U"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AK74M";  rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AKS74U"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };

                class GVAR(Group_ArmedForcesGroup) {
                    name = CSTRING(Group_ArmedForcesGroup);
                    side = 0;
                    faction = QGVAR(Uman);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Uman_Militant_AK12";   rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Uman_Militant_AK74M";  rank = "CORPORAL"; position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Uman_Militant_AK12";   rank = "PRIVATE";  position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AK74M"; rank = "PRIVATE";  position[] = {10,-10,0}; };
                };
            };

            class Infantry_CompanionLed {
                name = "$STR_gr7bow_fgwf_main_Subcat_Infantry_CompanionLed";

                class GVAR(Group_TerroristGroup) {
                    name = CSTRING(Group_TerroristGroup_Finn);
                    side = 0;
                    faction = QGVAR(Uman);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Uman_Companion_Finn";   rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AK74M";  rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AKS74U"; rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AK74M";  rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AKS74U"; rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };

                class GVAR(Group_ArmedForcesGroup) {
                    name = CSTRING(Group_ArmedForcesGroup_Haaken);
                    side = 0;
                    faction = QGVAR(Uman);
                    icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

                    class Unit0 { side = 0; vehicle = "FGWF_O_Uman_Companion_Haaken"; rank = "LIEUTENANT"; position[] = {0,0,0}; };
                    class Unit1 { side = 0; vehicle = "FGWF_O_Uman_Militant_AK12";    rank = "SERGEANT";   position[] = {5,-5,0}; };
                    class Unit2 { side = 0; vehicle = "FGWF_O_Uman_Militant_AK74M";   rank = "CORPORAL";   position[] = {-5,-5,0}; };
                    class Unit3 { side = 0; vehicle = "FGWF_O_Uman_Militant_AK12";    rank = "PRIVATE";    position[] = {10,-10,0}; };
                    class Unit4 { side = 0; vehicle = "FGWF_O_Uman_Terrorist_AK74M";  rank = "PRIVATE";    position[] = {-10,-10,0}; };
                };
            };
        };
    };
};
