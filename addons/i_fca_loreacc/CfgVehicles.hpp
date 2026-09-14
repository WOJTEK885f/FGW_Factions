class CfgVehicles {
    class I_Soldier_F; // Forward declaration

    class FGWF_I_FCA_Base: I_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(FCA);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Slavic appearance and Russian language
        identityTypes[] = {"LanguageRUS", "CUP_D_Language_RU", "Head_Russian", "Head_Euro"};
        genericNames = "RussianMen";
    };

    class FGWF_I_FCA_Militia: FGWF_I_FCA_Base {
        _generalMacro = "FGWF_I_FCA_Militia";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_Militia.jpg";

        displayName = CSTRING(Militia);

        uniformClass = "USP_G3F_AOR2";
        backpack = "";

        weapons[] = {"CUP_arifle_AKS74U_top_rail", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKS74U_top_rail", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_30Rnd_545x39_AK74M_M")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CFP_V_O_RUMVD_SURPAT",
            "rhsgref_patrolcap_specter",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_V_O_RUMVD_SURPAT",
            "rhsgref_patrolcap_specter",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_FCA_Rifleman: FGWF_I_FCA_Base {
        _generalMacro = "FGWF_I_FCA_Rifleman";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_Rifleman.jpg";

        displayName = CSTRING(Rifleman);

        uniformClass = "USP_G3F_AOR2";
        backpack = "";

        weapons[] = {"srifle_EBR_F", "Throw", "Put"};
        respawnWeapons[] = {"srifle_EBR_F", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_20Rnd_762x51_DMR")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_8("CUP_20Rnd_762x51_DMR")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CFP_V_O_RUMVD_SURPAT",
            "CUP_H_RUS_K6_3",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_V_O_RUMVD_SURPAT",
            "CUP_H_RUS_K6_3",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_FCA_Grenadier: FGWF_I_FCA_Base {
        _generalMacro = "FGWF_I_FCA_Grenadier";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_Grenadier.jpg";

        displayName = CSTRING(Grenadier);

        uniformClass = "USP_G3F_AOR2";
        backpack = "";

        weapons[] = {"CUP_arifle_ACR_blk_556", "rhs_weap_panzerfaust60", "CUP_hgun_TT", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_ACR_blk_556", "rhs_weap_panzerfaust60", "CUP_hgun_TT", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_8Rnd_762x25_TT"),
            MAG_9("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_8Rnd_762x25_TT"),
            MAG_9("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_B_Interceptor_Grenadier_M81",
            "SP_PASGTHelmet_Black1",
            "USP_FM12_BLK2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Grenadier_M81",
            "SP_PASGTHelmet_Black1",
            "USP_FM12_BLK2",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_FCA_ShockTroop: FGWF_I_FCA_Base {
        _generalMacro = "FGWF_I_FCA_ShockTroop";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_ShockTroop.jpg";

        displayName = CSTRING(ShockTroop);

        uniformClass = "USP_G3F_AOR2";
        backpack = "";

        weapons[] = {"CUP_lmg_FNMAG_RIS_modern", "Throw", "Put"};
        respawnWeapons[] = {"CUP_lmg_FNMAG_RIS_modern", "Throw", "Put"};

        magazines[] = {
            MAG_3("CUP_HandGrenade_RGD5"),
            MAG_3("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
        };
        respawnMagazines[] = {
            MAG_3("CUP_HandGrenade_RGD5"),
            MAG_3("CUP_100Rnd_TE4_LRT4_Green_Tracer_762x51_Belt_M")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_CPC_lightbelt_rngr",
            "CUP_H_RUS_Altyn_Shield_Up_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_CPC_lightbelt_rngr",
            "CUP_H_RUS_Altyn_Shield_Up_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_FCA_Companion_Base: FGWF_I_FCA_Base {
        editorSubcategory = "gr7bow_fgwf_Subcat_Companions";
    };

    class FGWF_I_FCA_Companion_Ostap: FGWF_I_FCA_Companion_Base {
        _generalMacro = "FGWF_I_FCA_Companion_Ostap";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_Companion_Ostap.jpg";

        displayName = CSTRING(Companion_Ostap);

        identityTypes[] = {"FGWF_Face_Ostap_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_FCA_Companion_Ostap'; };";
        };

        uniformClass = "USP_RUGBY_G3C_RGR_AOR2";
        backpack = "";

        weapons[] = {"CUP_arifle_AKM_top_rail", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_AKM_top_rail", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M")
        };
        respawnMagazines[] = {
            MAG_8("CUP_30Rnd_TE1_Green_Tracer_762x39_AK47_M")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "USP_BEARD_MS_BLK5",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "USP_BEARD_MS_BLK5",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_FCA_Companion_Stepan: FGWF_I_FCA_Companion_Base {
        _generalMacro = "FGWF_I_FCA_Companion_Stepan";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_Companion_Stepan.jpg";

        displayName = CSTRING(Companion_Stepan);

        identityTypes[] = {"FGWF_Face_Stepan_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_FCA_Companion_Stepan'; };";
        };

        uniformClass = "USP_RUGBY_G3C_RGR_AOR2";
        backpack = "";

        weapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};
        respawnWeapons[] = {"CUP_sgun_SPAS12", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_8Rnd_12Gauge_Slug"),
            MAG_8("CUP_8Rnd_12Gauge_Pellets_No00_Buck")
        };
        respawnMagazines[] = {
            MAG_8("CUP_8Rnd_12Gauge_Slug"),
            MAG_8("CUP_8Rnd_12Gauge_Pellets_No00_Buck")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_B_Interceptor_Base_M81",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Base_M81",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_FCA_Companion_Bohdan: FGWF_I_FCA_Companion_Base {
        _generalMacro = "FGWF_I_FCA_Companion_Bohdan";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_fca_loreacc\data\previews\FGWF_I_FCA_Companion_Bohdan.jpg";

        displayName = CSTRING(Companion_Bohdan);

        identityTypes[] = {"FGWF_Face_Bohdan_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_FCA_Companion_Bohdan'; };";
        };

        uniformClass = "USP_RUGBY_G3C_CBR_MPW";
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
            "CUP_V_B_Interceptor_Base_Coyote",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Base_Coyote",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

};
