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

    class FGWF_B_Player_FemaleBase: FGWF_B_Player_Base {
        // Faction identity: Female slavic appearance (placeholder when no FSOF) and female voice (only English language works)
        identityTypes[] = {"Head_Female"}; // Head_Female for RHS Female voice
        genericNames = "RussianWomen";
    };

    class FGWF_B_Player_MilitiaRifleman_Light: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_MilitiaRifleman_Light";
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
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
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
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
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
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
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
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
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_MilitiaSniper.jpg";

        displayName = CSTRING(MilitiaSniper);

        uniformClass = "CFP_GUER_M81";
        backpack = "";

        weapons[] = {"CUP_srifle_M14", "CUP_hgun_M17_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_srifle_M14", "CUP_hgun_M17_Black", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_2("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_20Rnd_762x51_DMR")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_2("CUP_17Rnd_9x19_M17_Black"),
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
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
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
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
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

    class FGWF_B_Player_ArmedBodyguard: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_ArmedBodyguard";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_ArmedBodyguard.jpg";

        displayName = CSTRING(ArmedBodyguard);

        uniformClass = "FGWF_U_Marshal";
        backpack = "";

        weapons[] = {"CUP_smg_MP5A5_Rail_VFG", "CUP_hgun_Makarov", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_MP5A5_Rail_VFG", "CUP_hgun_Makarov", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_8Rnd_9x18_Makarov_M"),
            MAG_8("CUP_30Rnd_9x19_MP5")
        };
        respawnMagazines[] = {
            MAG_4("CUP_8Rnd_9x18_Makarov_M"),
            MAG_8("CUP_30Rnd_9x19_MP5")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_PMC_IOTV_Black_Empty",
            "G_Sport_Blackred",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_IOTV_Black_Empty",
            "G_Sport_Blackred",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_ArmedEscortGuard_M1A1: FGWF_B_Player_Base {
        _generalMacro = "FGWF_B_Player_ArmedEscortGuard_M1A1";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_ArmedEscortGuard_M1A1.jpg";

        displayName = CSTRING(ArmedEscortGuard_M1A1);

        uniformClass = "USP_PCU_G3C";
        backpack = "";

        // Weapon placeholder - M3A1 Grease Gun replaced with Thompson M1A1 via compat_fwa addon
        weapons[] = {"rhs_weap_m3a1", "CUP_hgun_TaurusTracker455", "Throw", "Put"};
        respawnWeapons[] = {"rhs_weap_m3a1", "CUP_hgun_TaurusTracker455", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_2("CUP_6Rnd_45ACP_M"),
            MAG_8("rhsgref_30rnd_1143x23_M1911B_SMG")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_2("CUP_6Rnd_45ACP_M"),
            MAG_8("rhsgref_30rnd_1143x23_M1911B_SMG")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "SP_M1Helmet_MPBlack",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "SP_M1Helmet_MPBlack",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_ArmedEscortGuard_MP5: FGWF_B_Player_ArmedEscortGuard_M1A1 {
        weapons[] = {"CUP_smg_MP5A5_Rail_VFG", "CUP_hgun_Glock17_blk", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_MP5A5_Rail_VFG", "CUP_hgun_Glock17_blk", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_2("CUP_17Rnd_9x19_glock17"),
            MAG_8("CUP_30Rnd_9x19_MP5")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_2("CUP_17Rnd_9x19_glock17"),
            MAG_8("CUP_30Rnd_9x19_MP5")
        };

        _generalMacro = "FGWF_B_Player_ArmedEscortGuard_MP5";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_ArmedEscortGuard_MP5.jpg";
        displayName = CSTRING(ArmedEscortGuard_MP5);
    };

    class FGWF_B_Player_ArmedEscortGuard_SPAS12: FGWF_B_Player_ArmedEscortGuard_M1A1 {
        weapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};
        respawnWeapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_8Rnd_12Gauge_Slug"),
            MAG_8("CUP_8Rnd_12Gauge_Pellets_No00_Buck")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_8Rnd_12Gauge_Slug"),
            MAG_8("CUP_8Rnd_12Gauge_Pellets_No00_Buck")
        };

        _generalMacro = "FGWF_B_Player_ArmedEscortGuard_SPAS12";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_ArmedEscortGuard_SPAS12.jpg";
        displayName = CSTRING(ArmedEscortGuard_SPAS12);
    };

    class FGWF_B_Player_FemaleMilitia_TT33: FGWF_B_Player_FemaleBase {
        _generalMacro = "FGWF_B_Player_FemaleMilitia_TT33";
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_FemaleMilitia_TT33.jpg";

        displayName = CSTRING(FemaleMilitia_TT33);

        uniformClass = "CUP_U_B_USMC_MCCUU_MARPAT_M81";
        backpack = "";

        weapons[] = {"CUP_hgun_TT", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_TT", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_8Rnd_762x25_TT")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_8Rnd_762x25_TT")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

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

    class FGWF_B_Player_FemaleMilitia_M1911: FGWF_B_Player_FemaleMilitia_TT33 {
        _generalMacro = "FGWF_B_Player_FemaleMilitia_M1911";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_FemaleMilitia_M1911.jpg";

        displayName = CSTRING(FemaleMilitia_M1911);

        weapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"CUP_hgun_Colt1911", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_7Rnd_45ACP_1911")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_7Rnd_45ACP_1911")
        };
    };

    class FGWF_B_Player_FemaleVillager: FGWF_B_Player_FemaleBase {
        _generalMacro = "FGWF_B_Player_FemaleVillager";
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_FemaleVillager.jpg";

        displayName = CSTRING(FemaleVillager);

        uniformClass = "CFP_U_KhetPartug_Long_Brown";
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

    class FGWF_B_Player_FemaleCivilianFighter: FGWF_B_Player_FemaleBase {
        _generalMacro = "FGWF_B_Player_FemaleCivilianFighter";
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_FemaleCivilianFighter.jpg";

        displayName = CSTRING(FemaleCivilianFighter);

        uniformClass = "CUP_I_B_PMC_Unit_1";
        backpack = "";

        weapons[] = {"rhs_weap_M590_5RD", "Throw", "Put"};
        respawnWeapons[] = {"rhs_weap_M590_5RD", "Throw", "Put"};

        magazines[] = {
            MAG_8("rhsusf_5Rnd_00Buck"),
            MAG_8("rhsusf_5Rnd_Slug")
        };
        respawnMagazines[] = {
            MAG_8("rhsusf_5Rnd_00Buck"),
            MAG_8("rhsusf_5Rnd_Slug")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "H_Bandanna_sgg",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "H_Bandanna_sgg",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_Player_FemaleCivilianFighterCaptain: FGWF_B_Player_FemaleBase {
        _generalMacro = "FGWF_B_Player_FemaleCivilianFighterCaptain";
        scope = 2;
        scopeCurator = 2;
        editorSubcategory = "gr7bow_fgwf_Subcat_Guerrilla";
        editorPreview = "z\gr7bow_fgwf\addons\b_player_loreacc\data\previews\FGWF_B_Player_FemaleCivilianFighterCaptain.jpg";

        displayName = CSTRING(FemaleCivilianFighterCaptain);

        uniformClass = "CUP_I_B_PMC_Unit_1";
        backpack = "";

        weapons[] = {"rhs_weap_M590_5RD", "CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"rhs_weap_M590_5RD", "CUP_hgun_Colt1911", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_7Rnd_45ACP_1911"),
            MAG_8("rhsusf_5Rnd_00Buck"),
            MAG_8("rhsusf_5Rnd_Slug")
        };
        respawnMagazines[] = {
            MAG_4("CUP_7Rnd_45ACP_1911"),
            MAG_8("rhsusf_5Rnd_00Buck"),
            MAG_8("rhsusf_5Rnd_Slug")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_RUS_K6_3",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_PMC_CIRAS_Black_Empty",
            "CUP_H_RUS_K6_3",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
