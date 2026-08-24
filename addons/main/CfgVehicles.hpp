class CfgVehicles {
    // Hidden dummy units to bypass faction side restrictions

    class CUP_B_USMC_Soldier_14; // Original carrier from CUP forward declaration
    class FGWF_Dummy_USMC14: CUP_B_USMC_Soldier_14 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allow all sides to use this model
    };

    class CUP_I_PMC_Soldier_35; // Original carrier from CUP forward declaration
    class FGWF_Dummy_PMC35: CUP_I_PMC_Soldier_35 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allows all sides to wear this model
    };

    class CUP_I_PMC_Soldier_01; // Original carrier from CUP forward declaration
    class FGWF_Dummy_PMC1: CUP_I_PMC_Soldier_01 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allows all sides to wear this model
    };

    class CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2; // Original carrier from CUP forward declaration
    class FGWF_Dummy_MCCUU2: CUP_B_USMC_Soldier_MCCUU_M81_MARPAT_roll_2 {
        scope = 1; // Hidden in Eden Editor
        modelSides[] = {0, 1, 2, 3, 4, 5, 6, 7}; // Allow all sides to use this model
    };
};
