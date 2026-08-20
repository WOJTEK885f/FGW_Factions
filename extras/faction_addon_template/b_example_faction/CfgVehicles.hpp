class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGW_B_Example_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus

        // Common assignments
        faction = QGVAR(Example);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Example appearance and language
        identityTypes[] = {"LanguageRUS", "Head_Russian", "Head_Euro", "Head_Enoch"};
        genericNames = "RussianMen";
    };

    class FGW_B_Example_Unit: FGW_B_Example_Base {
        _generalMacro = "FGW_B_Example_Unit";
        scope = 2;
        scopeCurator = 2;
        editorPreview = "";

        displayName = CSTRING(UnitName);

        uniformClass = "";
        backpack = "";

        weapons[] = {"", "Throw", "Put"};
        respawnWeapons[] = {"", "Throw", "Put"};

        magazines[] = {
        };
        respawnMagazines[] = {
        };

        Items[] = {"FirstAidKit"};
        RespawnItems[] = {"FirstAidKit"};

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
