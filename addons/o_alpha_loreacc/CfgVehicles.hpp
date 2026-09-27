class CfgVehicles {
    class O_Soldier_F; // Forward declaration

    class FGWF_O_Alpha_Base: O_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(Alpha);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Western european, american appearance and English language
        identityTypes[] = {"LanguageENG_F", "Head_NATO"};
        genericNames = "NATOMen";
    };

    class FGWF_O_Alpha_SpecialForce: FGWF_O_Alpha_Base {
        _generalMacro = "FGWF_O_Alpha_SpecialForce";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_alpha_loreacc\data\previews\FGWF_O_Alpha_SpecialForce.jpg";

        displayName = CSTRING(SpecialForce);

        uniformClass = "CFP_GUER_PolyDesert";
        backpack = "";

        weapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };
        RespawnItems[] = {
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };

        linkedItems[] = {
            "SP_Tactical1_Black",
            "SP_PASGTHelmet_Black1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SP_Tactical1_Black",
            "SP_PASGTHelmet_Black1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_O_Alpha_EliteSniper: FGWF_O_Alpha_Base {
        _generalMacro = "FGWF_O_Alpha_EliteSniper";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_alpha_loreacc\data\previews\FGWF_O_Alpha_EliteSniper.jpg";

        displayName = CSTRING(EliteSniper);

        uniformClass = "CFP_GUER_PolyDesert";
        backpack = "";

        // SV98M has no direct Arma 3 counterpart, the G22 is used via a custom suppressed and scoped variant
        weapons[] = {"FGWF_srifle_G22_wdl_sd_lmk4", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"FGWF_srifle_G22_wdl_sd_lmk4", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_5Rnd_762x67_G22")
        };
        respawnMagazines[] = {
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_5Rnd_762x67_G22")
        };

        Items[] = {
            "Binocular",
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };
        RespawnItems[] = {
            "Binocular",
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };

        linkedItems[] = {
            "CFP_RAV_Empty_Green",
            "CUP_H_SLA_Helmet_URB_worn",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_RAV_Empty_Green",
            "CUP_H_SLA_Helmet_URB_worn",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_O_Alpha_EliteStormtrooper: FGWF_O_Alpha_Base {
        _generalMacro = "FGWF_O_Alpha_EliteStormtrooper";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_alpha_loreacc\data\previews\FGWF_O_Alpha_EliteStormtrooper.jpg";

        displayName = CSTRING(EliteStormtrooper);

        uniformClass = "CFP_GUER_PolyDesert";
        backpack = "";

        weapons[] = {"CUP_lmg_FNMAG_RIS_modern", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_FNMAG_RIS_modern", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "SmokeShell",
            MAG_3("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "SmokeShell",
            MAG_3("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
        };

        Items[] = {
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };
        RespawnItems[] = {
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_RUS_6B3_4",
            "CFP_OPS2017_Helmet_Grey",
            "USP_SOTR",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_RUS_6B3_4",
            "CFP_OPS2017_Helmet_Grey",
            "USP_SOTR",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_O_Alpha_EliteScout: FGWF_O_Alpha_Base {
        _generalMacro = "FGWF_O_Alpha_EliteScout";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_alpha_loreacc\data\previews\FGWF_O_Alpha_EliteScout.jpg";

        displayName = CSTRING(EliteScout);

        uniformClass = "CFP_GUER_PolyDesert";
        backpack = "";

        weapons[] = {"SMG_01_F", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"SMG_01_F", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };

        Items[] = {
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };
        RespawnItems[] = {
            "CUP_NVG_PVS7",
            "FirstAidKit"
        };

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_USArmy_Helmet_Protec",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_USArmy_Helmet_Protec",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_O_Alpha_Companion_Base: FGWF_O_Alpha_Base {
        editorSubcategory = "gr7bow_fgwf_Subcat_Companions";
    };

    class FGWF_O_Alpha_Companion_Volodimir: FGWF_O_Alpha_Companion_Base {
        _generalMacro = "FGWF_O_Alpha_Companion_Volodimir";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_alpha_loreacc\data\previews\FGWF_O_Alpha_Companion_Volodimir.jpg";

        displayName = CSTRING(Companion_Volodimir);

        identityTypes[] = {"FGWF_Face_Volodimir_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_Alpha_Companion_Volodimir'; };";
        };

        uniformClass = "USP_RUGBY_G3C_BLK_MPW";
        backpack = "";

        weapons[] = {"SMG_01_F", "Throw", "Put"};
        respawnWeapons[] = {"SMG_01_F", "Throw", "Put"};

        magazines[] = {
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };
        respawnMagazines[] = {
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_O_Alpha_Companion_Igor: FGWF_O_Alpha_Companion_Base {
        _generalMacro = "FGWF_O_Alpha_Companion_Igor";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_alpha_loreacc\data\previews\FGWF_O_Alpha_Companion_Igor.jpg";

        displayName = CSTRING(Companion_Igor);

        identityTypes[] = {"FGWF_Face_Igor_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_Alpha_Companion_Igor'; };";
        };

        uniformClass = "FGWF_U_PMC_Unit_31";
        backpack = "";

        weapons[] = {"SMG_01_F", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"SMG_01_F", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };
        respawnMagazines[] = {
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_B_JPC_Black_Light",
            "USP_BEARD_BRN6",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_JPC_Black_Light",
            "USP_BEARD_BRN6",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

};
