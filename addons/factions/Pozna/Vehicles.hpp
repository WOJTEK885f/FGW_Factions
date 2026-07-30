class FGW_B_Pozna_Fighter : B_Soldier_F {
        _generalMacro = "FGW_B_Pozna_Fighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = "$STR_gr7bow_fgw_factions_factions_Pozna_Fighter";
        faction = QGVAR(Pozna);
        editorSubcategory = "EdSubcat_Personnel";

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
