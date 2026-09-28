class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGWF_B_Example_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus

        // Common assignments
        faction = QGVAR(Example);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Example appearance and language
        identityTypes[] = {"LanguageRUS_F", "Head_Russian", "Head_Euro", "Head_Enoch"};
        genericNames = "RussianMen";
    };

    class FGWF_B_Example_Unit: FGWF_B_Example_Base {
        _generalMacro = "FGWF_B_Example_Unit";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = CSTRING(UnitName);
        icon = "iconMan"; // Explicit map icon, do not rely on the engine default

        uniformClass = "";
        backpack = "";

        weapons[] = {"", "Throw", "Put"};
        respawnWeapons[] = {"", "Throw", "Put"};

        magazines[] = {
        };
        respawnMagazines[] = {
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
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };

    class FGWF_B_Example_Marksman: FGWF_B_Example_Base {
        _generalMacro = "FGWF_B_Example_Marksman";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = CSTRING(MarksmanName);
        icon = "iconManSniper"; // Match the token to the role

        uniformClass = "";
        backpack = "";

        weapons[] = {"", "Throw", "Put"};
        respawnWeapons[] = {"", "Throw", "Put"};

        magazines[] = {
        };
        respawnMagazines[] = {
        };

        // Randomization goes on the unit, never on the shared base class.
        // The local guard makes it run once, on the machine that owns the unit. Without it the
        // code also runs on remote machines, the roll is thrown away, and the unit ends up with a
        // different loadout than the one that was rolled.
        init = "if (local (_this select 0)) then { (_this select 0) addHeadgear (selectRandom ['MOD_H_Ballistic', 'MOD_H_Boonie']); }";

        Items[] = {
            "FirstAidKit"
        };
        RespawnItems[] = {
            "FirstAidKit"
        };

        linkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
        respawnLinkedItems[] = {
            "ItemMap",
            "ItemCompass",
            "ItemWatch"
        };
    };
};
