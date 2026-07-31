class FGW_B_VFF_Base: B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Hidden in Editor
        scopeCurator = 0;  // Hidden in Zeus

        // Common assignments
        faction = QGVAR(VFF);
        editorSubcategory = "EdSubcat_Personnel";

        // Faction identity: Female slavic appearance and mixed, mainly Russian language
        identityTypes[] = {"CUP_D_Language_W_EN", "CUP_D_Language_W_RU", "Woman"};
        genericNames = "RussianWomen";
};
