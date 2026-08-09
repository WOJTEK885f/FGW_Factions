class CfgWeapons {
    class UniformItem; // Define the base uniform class from Arma 3 core to inherit proper item properties

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_FROG3_WMARPAT {
        class ItemInfo;
    };

    // Custom unrestricted uniform class
    class FGW_U_O_USMC_FROG3_WMARPAT_ATOV: CUP_U_B_USMC_FROG3_WMARPAT {
        author = AUTHOR;
        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_USMC_FROG3_WMARPAT_ATOV";
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Atov_Dummy_FROG3";
        };
    };

    // These are done differently due to various no entry warnings
    class CUP_I_B_PMC_Unit_35; // Import the base uniform item from CUP
    class CUP_I_B_PMC_Unit_1;

    // Custom unrestricted uniform class
    class FGW_U_O_PMC_Unit_35_ATOV: CUP_I_B_PMC_Unit_35 {
        author = AUTHOR;
        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_PMC_Unit_35_ATOV";
        scope = 2; // Available in Arsenal

        class ItemInfo: UniformItem {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Atov_Dummy_PMC35";

            containerClass = "Supply60"; // Matched with original CUP capacity
            mass = 20; // Matched with original CUP mass
        };
    };

    class FGW_U_O_PMC_Unit_1_ATOV: CUP_I_B_PMC_Unit_1 {
        author = AUTHOR;
        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_PMC_Unit_1_ATOV";
        scope = 2; // Available in Arsenal

        class ItemInfo: UniformItem {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Atov_Dummy_PMC1";

            containerClass = "Supply60"; // Matched with original CUP capacity
            mass = 20; // Matched with original CUP mass
        };
    };
};
