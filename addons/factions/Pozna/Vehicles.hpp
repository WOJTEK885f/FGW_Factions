class FGW_B_Pozna_Fighter : B_Soldier_F {
        author = AUTHOR;
        _generalMacro = "FGW_B_Pozna_Fighter";
        scope = 2;
        scopeCurator = 2;

        displayName = "$STR_gr7bow_fgw_factions_factions_Pozna_Fighter";
        faction = QGVAR(Pozna);
        editorSubcategory = "EdSubcat_Personnel";

        uniformClass = "USP_G3F_AOR1";
        backpack = "";

        weapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};

        // Amunicja i granaty
        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M"
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M",
            "CUP_10Rnd_762x39_SaigaMk03_M"
        };

        // Medykamenty i przedmioty z ACE
        Items[] = {"FirstAidKit", "ace_earplugs"};
        RespawnItems[] = {"FirstAidKit", "ace_earplugs"};

        // Kamizelka, okulary/kominiarka, oraz przedmioty z ekwipunku (mapa, kompas itp.)
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
