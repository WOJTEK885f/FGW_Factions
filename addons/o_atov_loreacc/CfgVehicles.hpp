class CfgVehicles {
    class O_Soldier_F; // Forward declaration

    // Import the original carriers from CUP
    class CUP_B_USMC_Soldier_14;
    class CUP_I_PMC_Soldier_35;
    class CUP_I_PMC_Soldier_01;

    // Create a hidden dummy unit for Atov to bypass faction side restrictions
    class FGW_O_Atov_Dummy_FROG3: CUP_B_USMC_Soldier_14 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allow all sides to use this model
    };

    class FGW_O_Atov_Dummy_PMC35: CUP_I_PMC_Soldier_35 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allows all sides to wear this model
    };

    class FGW_O_Atov_Dummy_PMC1: CUP_I_PMC_Soldier_01 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allows all sides to wear this model
    };

    class FGW_O_Atov_Base: O_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(Atov);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Eastern Slavic appearance and Russian language
        identityTypes[] = {"LanguageRUS", "CUP_D_Language_RU", "Head_Russian", "Head_Euro"};
        genericNames = "RussianMen";
        };

    class FGW_O_Atov_Infantry: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_Infantry";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Infantry";

        uniformClass = "FGW_U_O_USMC_FROG3_WMARPAT_ATOV";
        backpack = "";

        weapons[] = {"CUP_arifle_M16A4_Base", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base", "Throw", "Put"};

        magazines[] = {
            MAG_2("CUP_HandGrenade_RGD5"),
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            MAG_2("CUP_HandGrenade_RGD5"),
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_PMC_IOTV_Black_Empty",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_IOTV_Black_Empty",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Machinegunner: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_Machinegunner";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Machinegunner";

        uniformClass = "FGW_U_O_USMC_FROG3_WMARPAT_ATOV";
        backpack = "";

        weapons[] = {"CUP_lmg_M249_E2", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_M249_E2", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_100Rnd_TE4_Green_Tracer_556x45_M249")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_100Rnd_TE4_Green_Tracer_556x45_M249")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_C_Police_Holster",
            "CUP_H_RUS_Altyn_Shield_Up_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_C_Police_Holster",
            "CUP_H_RUS_Altyn_Shield_Up_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_ArmedPolice: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_ArmedPolice";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_ArmedPolice";

        uniformClass = "CFP_U_WorkUniform_SudanPolice";
        backpack = "";

        weapons[] = {"CUP_sgun_SPAS12", "CUP_hgun_M17_Black", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"CUP_sgun_SPAS12", "CUP_hgun_M17_Black", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_8Rnd_12Gauge_Slug"),
            MAG_8("CUP_8Rnd_12Gauge_Pellets_No00_Buck")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_8Rnd_12Gauge_Slug"),
            MAG_8("CUP_8Rnd_12Gauge_Pellets_No00_Buck")
        };

        Items[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };
        RespawnItems[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
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

    class FGW_O_Atov_Scout: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_Scout";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Scout";

        uniformClass = "CFP_U_WorkUniform_SudanPolice";
        backpack = "";

        weapons[] = {"sp_fwa_smg_thompson_m1a1", "CUP_hgun_M17_Black", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"sp_fwa_smg_thompson_m1a1", "CUP_hgun_M17_Black", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("sp_fwa_30Rnd_45acp_thompson_m1a1")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("sp_fwa_30Rnd_45acp_thompson_m1a1")
        };

        Items[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };
        RespawnItems[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "CFP_OPS2017_Helmet_Grey",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "CFP_OPS2017_Helmet_Grey",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Commando: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_Commando";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Commando";

        uniformClass = "CFP_U_WorkUniform_SudanPolice";
        backpack = "";

        weapons[] = {"CUP_arifle_M4A1_black", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M4A1_black", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };
        RespawnItems[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "CFP_OPS2017_Helmet_Grey",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "CFP_OPS2017_Helmet_Grey",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_SpecialForce: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_SpecialForce";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_SpecialForce";

        uniformClass = "FGW_U_O_PMC_Unit_35_ATOV";
        backpack = "";

        weapons[] = {"SMG_01_F", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"SMG_01_F", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "rhs_panzerfaust60_mag",
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };
        respawnMagazines[] = {
            "rhs_panzerfaust60_mag",
            MAG_8("30Rnd_45ACP_Mag_SMG_01")
        };

        Items[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };
        RespawnItems[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };

        linkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "CFP_OPS2017_Helmet_Grey",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "CFP_OPS2017_Helmet_Grey",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Sharpshooter: FGW_O_Atov_Base {
        _generalMacro = "FGW_O_Atov_Sharpshooter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Sharpshooter";

        uniformClass = "CFP_BDU_M81Iraq";
        backpack = "";

        weapons[] = {"CUP_arifle_AS_VAL_pso", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AS_VAL_pso", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_20Rnd_9x39_SP5_VSS_M")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_20Rnd_9x39_SP5_VSS_M")
        };

        Items[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };
        RespawnItems[] = {
            "FirstAidKit",
            "CUP_NVG_PVS7"
        };

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_FR_BandanaWdl",
            "CUP_optic_PSO_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_FR_BandanaWdl",
            "CUP_optic_PSO_1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Companion_Base: FGW_O_Atov_Base {
        editorSubcategory = "gr7bow_fgw_factions_Subcat_Companions";
    };

    class FGW_O_Atov_Companion_Vitaly: FGW_O_Atov_Companion_Base {
        _generalMacro = "FGW_O_Atov_Companion_Vitaly";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Companion_Vitaly";

        identityTypes[] = {"FGW_Face_Vitaly_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Atov_Companion_Vitaly'; };";
        };

        uniformClass = "FGW_U_O_USMC_FROG3_WMARPAT_ATOV";
        backpack = "";

        weapons[] = {"CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Glock17_blk", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_17Rnd_9x19_glock17")
        };
        respawnMagazines[] = {
            MAG_4("CUP_17Rnd_9x19_glock17")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "USP_BEARD_BRN5",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "USP_BEARD_BRN5",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Companion_Kostyantin: FGW_O_Atov_Companion_Base {
        _generalMacro = "FGW_O_Atov_Companion_Kostyantin";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Companion_Kostyantin";

        identityTypes[] = {"FGW_Face_Kostyantin_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Atov_Companion_Kostyantin'; };";
        };

        uniformClass = "FGW_U_O_USMC_FROG3_WMARPAT_ATOV";
        backpack = "";

        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_8Rnd_9x18_Makarov_M")
        };
        respawnMagazines[] = {
            MAG_4("CUP_8Rnd_9x18_Makarov_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Companion_Oleg: FGW_O_Atov_Companion_Base {
        _generalMacro = "FGW_O_Atov_Companion_Oleg";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Companion_Oleg";

        identityTypes[] = {"FGW_Face_Oleg_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Atov_Companion_Oleg'; };";
        };

        uniformClass = "FGW_U_O_USMC_FROG3_WMARPAT_ATOV";
        backpack = "";

        weapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_30Rnd_556x45_Stanag_Tracer_Green")
        };
        respawnMagazines[] = {
            MAG_8("CUP_30Rnd_556x45_Stanag_Tracer_Green")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Atov_Companion_Dimitro: FGW_O_Atov_Companion_Base {
        _generalMacro = "FGW_O_Atov_Companion_Dimitro";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_Companion_Dimitro";

        identityTypes[] = {"FGW_Face_Dimitro_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Atov_Companion_Dimitro'; };";
        };

        uniformClass = "FGW_U_O_PMC_Unit_1_ATOV";
        backpack = "";

        weapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Makarov", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_8Rnd_9x18_Makarov_M")
        };
        respawnMagazines[] = {
            MAG_4("CUP_8Rnd_9x18_Makarov_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

};
