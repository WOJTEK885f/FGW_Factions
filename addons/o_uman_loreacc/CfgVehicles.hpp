class CfgVehicles {
    class O_Soldier_F; // Forward declaration

    // Import the original carrier from CUP
    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2;

    // Create a hidden dummy unit for Uman to bypass faction side restrictions
    class FGW_O_Uman_Dummy_MCCUU: CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allow all sides to use this model
    };

    class FGW_O_Uman_Base: O_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(Uman);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Middle Eastern appearance and language
        identityTypes[] = {"LanguagePER_F", "CUP_D_Language_TK", "Language_Ackbar", "Head_TK"};
        genericNames = "TakistaniMen";
    };

    class FGW_O_Uman_Militant_AK12: FGW_O_Uman_Base {
        _generalMacro = "FGW_O_Uman_Militant_AK12";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\o_uman_loreacc\data\previews\FGW_O_Uman_Militant_AK12.jpg";

        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_Militant_AK12";

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AK12_black", "CUP_hgun_M17_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK12_black", "CUP_hgun_M17_Black", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_7("CUP_30Rnd_545x39_AK12_M"),
            MAG_3("CUP_17Rnd_9x19_M17_Black")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_7("CUP_30Rnd_545x39_AK12_M"),
            MAG_3("CUP_17Rnd_9x19_M17_Black")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "CUP_G_Scarf_Face_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "CUP_G_Scarf_Face_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Uman_Militant_AK74M: FGW_O_Uman_Base {
        _generalMacro = "FGW_O_Uman_Militant_AK74M";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\o_uman_loreacc\data\previews\FGW_O_Uman_Militant_AK74M.jpg";

        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_Militant_AK74M";

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AK74M", "CUP_hgun_M17_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M", "CUP_hgun_M17_Black", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_7("CUP_30Rnd_545x39_AK74M_M"),
            MAG_3("CUP_17Rnd_9x19_M17_Black")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_7("CUP_30Rnd_545x39_AK74M_M"),
            MAG_3("CUP_17Rnd_9x19_M17_Black")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "CUP_G_Scarf_Face_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_CPC_Fastbelt_rngr",
            "CUP_G_Scarf_Face_Red",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Uman_Terrorist_AK74M: FGW_O_Uman_Base {
        _generalMacro = "FGW_O_Uman_Terrorist_AK74M";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\o_uman_loreacc\data\previews\FGW_O_Uman_Terrorist_AK74M.jpg";

        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_Terrorist_AK74M";

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AK74M", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_7("CUP_30Rnd_545x39_AK74M_M"),
            MAG_3("CUP_7Rnd_50AE_Deagle")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_7("CUP_30Rnd_545x39_AK74M_M"),
            MAG_3("CUP_7Rnd_50AE_Deagle")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Uman_Terrorist_AKS74U: FGW_O_Uman_Base {
        _generalMacro = "FGW_O_Uman_Terrorist_AKS74U";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\o_uman_loreacc\data\previews\FGW_O_Uman_Terrorist_AKS74U.jpg";

        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_Terrorist_AKS74U";

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AKS74U_top_rail", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_top_rail", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_7("CUP_30Rnd_545x39_AK74M_M"),
            MAG_3("CUP_7Rnd_50AE_Deagle")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_7("CUP_30Rnd_545x39_AK74M_M"),
            MAG_3("CUP_7Rnd_50AE_Deagle")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_O_Uman_Companion_Base: FGW_O_Uman_Base {
        editorSubcategory = "gr7bow_fgw_factions_Subcat_Companions";
    };

    class FGW_O_Uman_Companion_Finn: FGW_O_Uman_Companion_Base {
        _generalMacro = "FGW_O_Uman_Companion_Finn";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\o_uman_loreacc\data\previews\FGW_O_Uman_Companion_Finn.jpg";

        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_Companion_Finn";

        identityTypes[] = {"FGW_Face_Finn_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Uman_Companion_Finn'; };";
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

    class FGW_O_Uman_Companion_Haaken: FGW_O_Uman_Companion_Base {
        _generalMacro = "FGW_O_Uman_Companion_Haaken";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\o_uman_loreacc\data\previews\FGW_O_Uman_Companion_Haaken.jpg";

        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_Companion_Haaken";

        identityTypes[] = {"FGW_Face_Haaken_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_Uman_Companion_Haaken'; };";
        };

        uniformClass = "FGW_U_O_USMC_MCCUU_M81_MARPAT_roll_2_UMAN";
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
