class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGW_B_VFF_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus
        editorPreview = "";

        // Common assignments
        faction = QGVAR(VFF);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Female slavic appearance (placeholder) and female voice (only English language works)
        identityTypes[] = {"Head_Female", "FGW_Female_Faces_NoHair"}; // Head_Female uses RHS Female voice, CUP_D_Female01_EN did not work with identityTypes for unknown reason
        genericNames = "RussianWomen";
    };

    class FGW_B_VFF_CivilianFighter: FGW_B_VFF_Base {
        _generalMacro = "FGW_B_VFF_CivilianFighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_CivilianFighter.jpg";

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
            "FGW_V_B_Flak_Vest_Vydra_3M",
            "H_Bandanna_sgg",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "FGW_V_B_Flak_Vest_Vydra_3M",
            "H_Bandanna_sgg",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_VFF_CivilianFighterCaptain: FGW_B_VFF_Base {
        _generalMacro = "FGW_B_VFF_CivilianFighterCaptain";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_CivilianFighterCaptain.jpg";

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

    class FGW_B_VFF_Fighter: FGW_B_VFF_Base {
        _generalMacro = "FGW_B_VFF_Fighter";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_Fighter.jpg";

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

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

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

    class FGW_B_VFF_Marine: FGW_B_VFF_Base {
        _generalMacro = "FGW_B_VFF_Marine";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_Marine.jpg";

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

    class FGW_B_VFF_SpecialPolice: FGW_B_VFF_Base {
        _generalMacro = "FGW_B_VFF_SpecialPolice";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_SpecialPolice.jpg";

        displayName = CSTRING(SpecialPolice);

        uniformClass = "CFP_GUER_M81Tee";
        backpack = "CUP_B_ACRScout_m95";

        weapons[] = {"CUP_sgun_AA12", "CUP_hgun_Colt1911", "Throw", "Put"};
        respawnWeapons[] = {"CUP_sgun_AA12", "CUP_hgun_Colt1911", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_7Rnd_45ACP_1911"),
            MAG_8("CUP_20Rnd_B_AA12_Buck_00"),
            MAG_8("CUP_20Rnd_B_AA12_Slug")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            MAG_4("CUP_7Rnd_45ACP_1911"),
            MAG_8("CUP_20Rnd_B_AA12_Buck_00"),
            MAG_8("CUP_20Rnd_B_AA12_Slug")
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

    class FGW_B_VFF_Companion_Base: FGW_B_VFF_Base {
        editorSubcategory = "gr7bow_fgw_factions_Subcat_Companions";
    };

    class FGW_B_VFF_Companion_Victoria: FGW_B_VFF_Companion_Base {
        _generalMacro = "FGW_B_VFF_Companion_Victoria";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_Companion_Victoria.jpg";

        displayName = CSTRING(Companion_Victoria);

        identityTypes[] = {"FGW_Face_Victoria_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_VFF_Companion_Victoria'; };";
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
            "rhs_vydra_3m",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_vydra_3m",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };

    class FGW_B_VFF_Companion_Oksana: FGW_B_VFF_Companion_Base {
        _generalMacro = "FGW_B_VFF_Companion_Oksana";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "z\gr7bow_fgw_factions\addons\b_vff_loreacc\data\previews\FGW_B_VFF_Companion_Oksana.jpg";

        displayName = CSTRING(Companion_Oksana);

        identityTypes[] = {"FGW_Face_Oksana_Tag"};

        class EventHandlers {
            init = "if (local (_this select 0)) then { (_this select 0) setIdentity 'FGW_Identity_VFF_Companion_Oksana'; };";
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
            "rhs_vydra_3m",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[] = {
            "rhs_vydra_3m",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
    };
};
