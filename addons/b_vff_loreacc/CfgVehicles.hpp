class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGWF_B_VFF_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(VFF);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Female slavic appearance (placeholder when no FSOF) and female voice (only English language works)
        identityTypes[] = {"Head_Female"}; // Head_Female for RHS Female voice
        genericNames = "RussianWomen";
    };

    class FGWF_B_VFF_CivilianFighter: FGWF_B_VFF_Base {
        _generalMacro = "FGWF_B_VFF_CivilianFighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_CivilianFighter.jpg";

        displayName = CSTRING(CivilianFighter);

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

    class FGWF_B_VFF_CivilianFighterCaptain: FGWF_B_VFF_Base {
        _generalMacro = "FGWF_B_VFF_CivilianFighterCaptain";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_CivilianFighterCaptain.jpg";

        displayName = CSTRING(CivilianFighterCaptain);

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

    class FGWF_B_VFF_Fighter: FGWF_B_VFF_Base {
        _generalMacro = "FGWF_B_VFF_Fighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_Fighter.jpg";

        displayName = CSTRING(Fighter);

        uniformClass = "USP_G3C_CU_M81";
        backpack = "";

        weapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "SmokeShell",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "SmokeShell",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {"CUP_NVG_PVS7", "FirstAidKit"};
        RespawnItems[] = {"CUP_NVG_PVS7", "FirstAidKit"};

        linkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "CFP_PASGTHelmet_M812",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Rifleman_M81",
            "CFP_PASGTHelmet_M812",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_VFF_Marine: FGWF_B_VFF_Base {
        _generalMacro = "FGWF_B_VFF_Marine";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_Marine.jpg";

        displayName = CSTRING(Marine);

        uniformClass = "USP_G3C_CU_M81";
        backpack = "";

        weapons[] = {"CUP_arifle_M16A4_Base", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_M16A4_Base", "Throw", "Put"};

        magazines[] = {
            "SmokeShell",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
            "SmokeShell",
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CUP_V_B_Interceptor_Base_Coyote",
            "CUP_H_RUS_Altyn_Shield_Up_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CUP_V_B_Interceptor_Base_Coyote",
            "CUP_H_RUS_Altyn_Shield_Up_black",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_VFF_SpecialPolice: FGWF_B_VFF_Base {
        _generalMacro = "FGWF_B_VFF_SpecialPolice";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_SpecialPolice.jpg";

        displayName = CSTRING(SpecialPolice);

        uniformClass = "CFP_GUER_M81Tee";
        backpack = "";

        weapons[] = {"CUP_sgun_AA12", "CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"CUP_sgun_AA12", "CUP_hgun_Colt1911", "Throw", "Put"};

        magazines[] = {
            MAG_3("CUP_20Rnd_B_AA12_Buck_00"),
            MAG_3("CUP_20Rnd_B_AA12_Slug"),
            MAG_3("CUP_7Rnd_45ACP_1911"), // Only 3 due to weight limitations
            "CUP_HandGrenade_RGD5"
        };
        respawnMagazines[] = {
            MAG_3("CUP_20Rnd_B_AA12_Buck_00"),
            MAG_3("CUP_20Rnd_B_AA12_Slug"),
            MAG_3("CUP_7Rnd_45ACP_1911"),
            "CUP_HandGrenade_RGD5"
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

        linkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_USArmy_Helmet_M1_plain_M81",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "CFP_Tactical1_M81",
            "CUP_H_USArmy_Helmet_M1_plain_M81",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGWF_B_VFF_Companion_Base: FGWF_B_VFF_Base {
        editorSubcategory = "gr7bow_fgwf_Subcat_Companions";
    };

    class FGWF_B_VFF_Companion_Victoria: FGWF_B_VFF_Companion_Base {
        _generalMacro = "FGWF_B_VFF_Companion_Victoria";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_Companion_Victoria.jpg";

        displayName = CSTRING(Companion_Victoria);

        identityTypes[] = {"FGWF_Face_Victoria_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_VFF_Companion_Victoria'; };";
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

    class FGWF_B_VFF_Companion_Oksana: FGWF_B_VFF_Companion_Base {
        _generalMacro = "FGWF_B_VFF_Companion_Oksana";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgwf\addons\b_vff_loreacc\data\previews\FGWF_B_VFF_Companion_Oksana.jpg";

        displayName = CSTRING(Companion_Oksana);

        identityTypes[] = {"FGWF_Face_Oksana_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGWF_Identity_VFF_Companion_Oksana'; };";
        };

        uniformClass = "CFP_GUER_TanTee";
        backpack = "";

        weapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};
        respawnWeapons[] = {"CUP_arifle_HK416_Black", "Throw", "Put"};

        magazines[] = {
            MAG_8("CUP_30Rnd_556x45_Stanag")
        };
        respawnMagazines[] = {
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
};
