class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGW_B_Pozna_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus

        // Common assignments
        faction = QGVAR(Pozna);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Slavic appearance and Russian language
        identityTypes[] = {"LanguageRUS", "CUP_D_Language_RU", "Head_Russian", "Head_Euro", "Head_Enoch"};
        genericNames = "RussianMen";
    };

    class FGW_B_Pozna_Fighter: FGW_B_Pozna_Base {
        _generalMacro = "FGW_B_Pozna_Fighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Fighter";

        uniformClass = "USP_G3F_AOR1";
        backpack = "";

        weapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_16("CUP_10Rnd_762x39_SaigaMk03_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_16("CUP_10Rnd_762x39_SaigaMk03_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "SP_Tactical1_Tan",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SP_Tactical1_Tan",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_Pozna_Commando: FGW_B_Pozna_Base {
        _generalMacro = "FGW_B_Pozna_Commando";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Commando";

        uniformClass = "USP_RUGBY_G3C_RGR_AOR1";
        backpack = "";

        weapons[] = {"CUP_arifle_M4A3_black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {"CUP_NVG_PVS7", "FirstAidKit"};
        RespawnItems[] = {"CUP_NVG_PVS7", "FirstAidKit"};

        linkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "SP_PASGTHelmet_Black1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "SP_PASGTHelmet_Black1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_Pozna_SniperElite: FGW_B_Pozna_Base {
        _generalMacro = "FGW_B_Pozna_SniperElite";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_SniperElite";

        uniformClass = "USP_G3F_AOR1";
        backpack = "";

        weapons[] = {"CUP_srifle_SVD_pso", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_8("CUP_10Rnd_762x54_SVD_M")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_8("CUP_10Rnd_762x54_SVD_M")
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
            "CUP_V_CDF_OfficerBelt",
            "SP_BoonieHat_Tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_CDF_OfficerBelt",
            "SP_BoonieHat_Tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_Pozna_Companion_Base: FGW_B_Pozna_Base {
        editorSubcategory = "gr7bow_fgw_factions_Subcat_Companions";
    };

    class FGW_B_Pozna_Companion_Roman: FGW_B_Pozna_Companion_Base {
        _generalMacro = "FGW_B_Pozna_Companion_Roman";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Companion_Roman";

        identityTypes[] = {"FGW_Face_Roman_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Pozna_Companion_Roman'; };";
        };

        uniformClass = "USP_RUGBY_G3C_RGR_AOR1";
        backpack = "";

        weapons[] = {"CUP_srifle_SVD_pso", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_SVD_pso", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_10Rnd_762x54_SVD_M")
        };
        respawnMagazines[] = {
            MAG_8("CUP_10Rnd_762x54_SVD_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "SP_Tactical1_Tan",
            "USP_BEARD_BRN2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "SP_Tactical1_Tan",
            "USP_BEARD_BRN2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_Pozna_Companion_Yuriy: FGW_B_Pozna_Companion_Base {
        _generalMacro = "FGW_B_Pozna_Companion_Yuriy";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Companion_Yuriy";

        identityTypes[] = {"FGW_Face_Yuriy_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Pozna_Companion_Yuriy'; };";
        };

        uniformClass = "CUP_U_B_USMC_MCCUU_MARPAT_M81";
        backpack = "";

        weapons[] = {"CUP_arifle_AKS74U_top_rail", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_top_rail", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M")
        };
        respawnMagazines[] = {
            MAG_8("CUP_30Rnd_TE1_Green_Tracer_545x39_AK74M_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "USP_BEARD_CH_MS_BLK2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "USP_BEARD_CH_MS_BLK2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_Pozna_Companion_Denis: FGW_B_Pozna_Companion_Base {
        _generalMacro = "FGW_B_Pozna_Companion_Denis";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Companion_Denis";

        identityTypes[] = {"FGW_Face_Denis_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Pozna_Companion_Denis'; };";
        };

        uniformClass = "CFP_GUER_M81Tee";
        backpack = "";

        weapons[] = {"CUP_arifle_M16A4_Base", "CUP_hgun_M9A1", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base", "CUP_hgun_M9A1", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_30Rnd_556x45_Stanag"),
            MAG_4("CUP_15Rnd_9x19_M9")
        };
        respawnMagazines[] = {
            MAG_8("CUP_30Rnd_556x45_Stanag"),
            MAG_4("CUP_15Rnd_9x19_M9")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "FGW_V_B_Flak_Vest_Vydra_3M",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGW_V_B_Flak_Vest_Vydra_3M",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_Pozna_Companion_Tatyana: FGW_B_Pozna_Companion_Base {
        _generalMacro = "FGW_B_Pozna_Companion_Tatyana";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_b_pozna_loreacc_Companion_Tatyana";

        identityTypes[] = {"FGW_Face_Tatyana_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Pozna_Companion_Tatyana'; };";
        };

        uniformClass = "CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2";
        backpack = "";

        weapons[] = {"srifle_EBR_F", "Throw", "Put"};
        respawnWeapons[] = {"srifle_EBR_F", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_20Rnd_TE1_Green_Tracer_762x51_DMR")
        };
        respawnMagazines[] = {
            MAG_8("CUP_20Rnd_TE1_Green_Tracer_762x51_DMR")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "FGW_V_B_Flak_Vest_Vydra_3M",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGW_V_B_Flak_Vest_Vydra_3M",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

};
