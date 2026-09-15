class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGWF_B_Player_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(Player);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Slavic appearance and Russian language (Placeholder, TODO)
        identityTypes[] = {"LanguageRUS", "CUP_D_Language_RU", "Head_Russian", "Head_Euro", "Head_Enoch"};
        genericNames = "RussianMen";
    };

    class FGWF_B_Player_MilitiaRifleman_Light: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_MilitiaRifleman_Light";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaRifleman_Light.jpg";

        displayName = CSTRING(MilitiaRifleman_Light);

        uniformClass = "CUP_I_B_PMC_Unit_11";
        backpack = "";

        weapons[] = {"CUP_srifle_M14", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_M14", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_20Rnd_762x51_DMR")
        };
        respawnMagazines[] = {
            MAG_8("CUP_20Rnd_762x51_DMR")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_MilitiaRifleman_OldHelmet: FGWF_B_Player_MilitiaRifleman_Light {
        _generalMacro = "FGWF_B_Player_MilitiaRifleman_OldHelmet";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaRifleman_OldHelmet.jpg";

        displayName = CSTRING(MilitiaRifleman_OldHelmet);

        uniformClass = "CUP_I_B_PMC_Unit_2";

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_SLA_Helmet_URB_worn",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_SLA_Helmet_URB_worn",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_MilitiaRifleman_SteelHelmet: FGWF_B_Player_MilitiaRifleman_Light {
        _generalMacro = "FGWF_B_Player_MilitiaRifleman_SteelHelmet";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaRifleman_SteelHelmet.jpg";

        displayName = CSTRING(MilitiaRifleman_SteelHelmet);

        uniformClass = "CUP_I_B_PMC_Unit_43";

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_RUS_K6_3",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_RUS_K6_3",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_MilitiaRifleman_BikeHelmet: FGWF_B_Player_MilitiaRifleman_Light {
        _generalMacro = "FGWF_B_Player_MilitiaRifleman_BikeHelmet";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaRifleman_BikeHelmet.jpg";

        displayName = CSTRING(MilitiaRifleman_BikeHelmet);

        uniformClass = "CUP_I_B_PMC_Unit_15";

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_USArmy_Helmet_Protec",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_USArmy_Helmet_Protec",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_MilitiaSniper: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_MilitiaSniper";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaSniper.jpg";

        displayName = CSTRING(MilitiaSniper);

        uniformClass = "CFP_GUER_M81";
        backpack = "";

        weapons[] = {"CUP_srifle_M14", "CUP_hgun_M17_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_M14", "CUP_hgun_M17_Black", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_20Rnd_762x51_DMR")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_20Rnd_762x51_DMR")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Coyote_Empty",
            "CFP_BoonieHat_M81",
            "G_Bandanna_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Coyote_Empty",
            "CFP_BoonieHat_M81",
            "G_Bandanna_khk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_MilitiaSMGFighter: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_MilitiaSMGFighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaSMGFighter.jpg";

        displayName = CSTRING(MilitiaSMGFighter);

        uniformClass = "CUP_U_B_USMC_MCCUU_MARPAT_M81";
        backpack = "";

        weapons[] = {"CUP_smg_EVO", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_EVO", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_9x19_EVO")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_9x19_EVO")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CFP_RAV_Empty_Green",
            "SP_Bandana_Black",
            "G_Bandanna_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_RAV_Empty_Green",
            "SP_Bandana_Black",
            "G_Bandanna_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_MaleVillager: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_MaleVillager";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MaleVillager.jpg";

        displayName = CSTRING(MaleVillager);

        uniformClass = "CUP_U_C_Worker_02";
        backpack = "";

        weapons[] = {"CUP_srifle_M14", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_M14", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_20Rnd_762x51_DMR")
        };
        respawnMagazines[] = {
            MAG_8("CUP_20Rnd_762x51_DMR")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_C_Police_Holster",
            "SP_BoonieHat_Tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_C_Police_Holster",
            "SP_BoonieHat_Tan",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
