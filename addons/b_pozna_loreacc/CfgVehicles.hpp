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

        displayName = "$STR_gr7bow_fgw_factions_factions_Pozna_Fighter";

        uniformClass = "USP_G3F_AOR1";
        backpack = "";

        weapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_15("CUP_10Rnd_762x39_SaigaMk03_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_15("CUP_10Rnd_762x39_SaigaMk03_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "SP_Tactical1_Tan",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "SP_Tactical1_Tan",
            "CUP_RUS_Balaclava_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };

    class FGW_B_Pozna_Commando : FGW_B_Pozna_Base {
        _generalMacro = "FGW_B_Pozna_Commando";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_factions_Pozna_Commando";

        uniformClass = "USP_RUGBY_G3C_RGR_AOR1";
        backpack = "";

        weapons[] = {"CUP_arifle_M4A3_black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M4A3_black", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5",
            MAG_6("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "CUP_HandGrenade_RGD5",
            MAG_6("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {"CUP_NVG_PVS7", "FirstAidKit"};
        RespawnItems[] = {"CUP_NVG_PVS7", "FirstAidKit"};

        linkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "SP_PASGTHelmet_Black1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "SP_PASGTHelmet_Black1",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };

    class FGW_B_Pozna_SniperElite : FGW_B_Pozna_Base {
        _generalMacro = "FGW_B_Pozna_SniperElite";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_factions_Pozna_SniperElite";

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
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "CUP_V_CDF_OfficerBelt",
            "SP_BoonieHat_Tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };

};
