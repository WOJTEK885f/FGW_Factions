class CfgVehicles {
    class O_Soldier_F; // Forward declaration

    class FGWF_O_Uman_Base: O_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(Uman);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Middle Eastern appearance and language
        identityTypes[] = {"LanguagePER_F", "CUP_D_Language_TK", "Language_Ackbar", "Head_TK", "Head_Greek"};
        genericNames = "TakistaniMen";
    };

    class FGWF_O_Uman_Militant_AK12: FGWF_O_Uman_Base {
        _generalMacro = "FGWF_O_Uman_Militant_AK12";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_uman_loreacc\data\previews\FGWF_O_Uman_Militant_AK12.jpg";

        displayName = CSTRING(Militant_AK12);

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AK12_black", "CUP_hgun_M17_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK12_black", "CUP_hgun_M17_Black", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_30Rnd_545x39_AK12_M")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_30Rnd_545x39_AK12_M")
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

    class FGWF_O_Uman_Militant_AK74M: FGWF_O_Uman_Base {
        _generalMacro = "FGWF_O_Uman_Militant_AK74M";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_uman_loreacc\data\previews\FGWF_O_Uman_Militant_AK74M.jpg";

        displayName = CSTRING(Militant_AK74M);

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AK74M", "CUP_hgun_M17_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M", "CUP_hgun_M17_Black", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
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

    class FGWF_O_Uman_Terrorist_AK74M: FGWF_O_Uman_Base {
        _generalMacro = "FGWF_O_Uman_Terrorist_AK74M";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_uman_loreacc\data\previews\FGWF_O_Uman_Terrorist_AK74M.jpg";

        displayName = CSTRING(Terrorist_AK74M);

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AK74M", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AK74M", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
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

    class FGWF_O_Uman_Terrorist_AKS74U: FGWF_O_Uman_Base {
        _generalMacro = "FGWF_O_Uman_Terrorist_AKS74U";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_uman_loreacc\data\previews\FGWF_O_Uman_Terrorist_AKS74U.jpg";

        displayName = CSTRING(Terrorist_AKS74U);

        uniformClass = "U_C_Uniform_Scientist_02_formal_F";
        backpack = "";

        weapons[] = {"CUP_arifle_AKS74U_top_rail", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_top_rail", "rhs_weap_panzerfaust60", "CUP_hgun_Deagle", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
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

    class FGWF_O_Uman_Companion_Base: FGWF_O_Uman_Base {
        editorSubcategory = "gr7bow_fgwf_Subcat_Companions";
    };

    class FGWF_O_Uman_Companion_Finn: FGWF_O_Uman_Companion_Base {
        _generalMacro = "FGWF_O_Uman_Companion_Finn";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_uman_loreacc\data\previews\FGWF_O_Uman_Companion_Finn.jpg";

        displayName = CSTRING(Companion_Finn);

        identityTypes[] = {"FGWF_Face_Finn_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_Uman_Companion_Finn'; };";
        };

        uniformClass = "CFP_GUER_M81Tee";
        backpack = "";

        weapons[] = {"CUP_arifle_M16A4_Base", "CUP_hgun_M9A1", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base", "CUP_hgun_M9A1", "Throw", "Put"};

        magazines[] = {
            MAG_4("CUP_15Rnd_9x19_M9"),
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            MAG_4("CUP_15Rnd_9x19_M9"),
            MAG_8("CUP_30Rnd_556x45_Stanag")
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

    class FGWF_O_Uman_Companion_Haaken: FGWF_O_Uman_Companion_Base {
        _generalMacro = "FGWF_O_Uman_Companion_Haaken";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\o_uman_loreacc\data\previews\FGWF_O_Uman_Companion_Haaken.jpg";

        displayName = CSTRING(Companion_Haaken);

        identityTypes[] = {"FGWF_Face_Haaken_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_Uman_Companion_Haaken'; };";
        };

        uniformClass = "FGWF_U_O_USMC_MCCUU_M81_MARPAT_roll_2_UMAN";
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
};
