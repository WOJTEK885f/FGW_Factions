class FGW_B_VFF_Base : B_Soldier_F {
        author = AUTHOR;
        scope = 0;         // Ukryte w Edytorze
        scopeCurator = 0;  // Ukryte w Zeusie

        // Wspólne przypisania
        faction = QGVAR(VFF);
        editorSubcategory = "EdSubcat_Personnel";

        // Klimat frakcji: Kobiecy, wschodni wygląd i mieszany, głównie rosyjski język
        identityTypes[] = {"CUP_D_Language_W_EN", "CUP_D_Language_W_RU", "Woman"};
        genericNames = "RussianWomen";
};
