class CfgVehicles {
    class I_Soldier_F; // Forward declaration

    class FGWF_I_CFR_Base: I_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(CFR);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Slavic appearance and Russian language
        identityTypes[] = {"LanguageRUS", "CUP_D_Language_RU", "Head_Russian", "Head_Enoch"};
        genericNames = "RussianMen";
    };

    class FGWF_I_CFR_Fighter: FGWF_I_CFR_Base {
        _generalMacro = "FGWF_I_CFR_Fighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_cfr_loreacc\data\previews\FGWF_I_CFR_Fighter.jpg";

        displayName = CSTRING(Fighter);

        uniformClass = "CFP_GUER_M81Tee";
        backpack = "";

        weapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};

        magazines[] = {
            MAG_16("CUP_10Rnd_762x39_SaigaMk03_M")
        };
        respawnMagazines[] = {
            MAG_16("CUP_10Rnd_762x39_SaigaMk03_M")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_USArmy_Helmet_M1_plain_M81",
            "G_Bandanna_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_USArmy_Helmet_M1_plain_M81",
            "G_Bandanna_oli",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_CFR_Grenadier: FGWF_I_CFR_Base {
        _generalMacro = "FGWF_I_CFR_Grenadier";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_cfr_loreacc\data\previews\FGWF_I_CFR_Grenadier.jpg";

        displayName = CSTRING(Grenadier);

        uniformClass = "CFP_GUER_M81";
        backpack = "";

        weapons[] = {"CUP_smg_M3A1_blk", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"CUP_smg_M3A1_blk", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_8("CUP_30Rnd_45ACP_M3A1_BLK_M")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_8("CUP_30Rnd_45ACP_M3A1_BLK_M")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "CUP_H_SLA_Helmet_URB_worn",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "CUP_H_SLA_Helmet_URB_worn",
            "G_Bandanna_blk",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_CFR_DM: FGWF_I_CFR_Base {
        _generalMacro = "FGWF_I_CFR_DM";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_cfr_loreacc\data\previews\FGWF_I_CFR_DM.jpg";

        displayName = CSTRING(DM);

        uniformClass = "CFP_GUER_M81";
        backpack = "";

        weapons[] = {"srifle_EBR_F", "CUP_hgun_Deagle", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"srifle_EBR_F", "CUP_hgun_Deagle", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_20Rnd_762x51_DMR")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_7Rnd_50AE_Deagle"),
            MAG_8("CUP_20Rnd_762x51_DMR")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_FR_BandanaWdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGWF_V_Flak_Vest_Vydra_3M",
            "CUP_H_FR_BandanaWdl",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_I_CFR_Companion_Base: FGWF_I_CFR_Base {
        editorSubcategory = "gr7bow_fgwf_Subcat_Companions";
    };

    class FGWF_I_CFR_Companion_Olga: FGWF_I_CFR_Companion_Base {
        _generalMacro = "FGWF_I_CFR_Companion_Olga";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\i_cfr_loreacc\data\previews\FGWF_I_CFR_Companion_Olga.jpg";

        displayName = CSTRING(Companion_Olga);

        // Head_Female for RHS Female voice, FGWF_Face_Olga_Tag for FSOF face
        identityTypes[] = {"Head_Female", "FGWF_Face_Olga_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_CFR_Companion_Olga'; };";
        };

        uniformClass = "CFP_GUER_M81Tee";
        backpack = "";

        weapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_SAIGA_MK03", "Throw", "Put"};

        magazines[] = {
            MAG_16("CUP_10Rnd_762x39_SaigaMk03_M")
        };
        respawnMagazines[] = {
            MAG_16("CUP_10Rnd_762x39_SaigaMk03_M")
        };

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

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
};
