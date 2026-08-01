class CfgWeapons {
    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_FROG3_WMARPAT {
        class ItemInfo;
    };

    // Custom unrestricted uniform class
    class FGW_U_O_USMC_FROG3_WMARPAT_ATOV: CUP_U_B_USMC_FROG3_WMARPAT {
        author = AUTHOR;
        displayName = "USMC FROG Gear Ver. 3 (Woodland) - Atov Federation";

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Atov_Dummy_FROG3";
        };
    };

    // This one is done diffrently due to various no entry warnings
    class CUP_I_B_PMC_Unit_35; // Import the base uniform item from CUP

    class UniformItem; // Define the base uniform class from Arma 3 core to inherit proper item properties

    // Custom unrestricted uniform class
    class FGW_U_O_PMC_Unit_35_ATOV: CUP_I_B_PMC_Unit_35 {
        author = AUTHOR;
        displayName = "PMC Clothes T-Shirt/Tactical Pants (Black, UCP) - Atov Federation";
        scope = 2; // Available in Arsenal

        class ItemInfo: UniformItem {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Atov_Dummy_PMC35";

            containerClass = "Supply60"; // Matched with original CUP capacity
            mass = 20; // Matched with original CUP mass
        };
    };
};
