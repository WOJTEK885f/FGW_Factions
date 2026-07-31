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
