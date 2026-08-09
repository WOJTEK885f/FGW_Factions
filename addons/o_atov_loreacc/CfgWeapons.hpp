class CfgWeapons {
    class UniformItem; // Define the base uniform class from Arma 3 core to inherit proper item properties
    class VestItem; // Define the base vest class from Arma 3 core to inherit proper item properties

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

    // These are done diffrently due to various no entry warnings
    class CUP_I_B_PMC_Unit_35; // Import the base uniform item from CUP
    class CUP_I_B_PMC_Unit_1;

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

    class FGW_U_O_PMC_Unit_1_ATOV: CUP_I_B_PMC_Unit_1 {
        author = AUTHOR;
        displayName = "PMC Clothes Shirt/Jeans (Plaid/Blue) - Atov Federation";
        scope = 2; // Available in Arsenal

        class ItemInfo: UniformItem {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Atov_Dummy_PMC1";

            containerClass = "Supply60"; // Matched with original CUP capacity
            mass = 20; // Matched with original CUP mass
        };
    };

    // Import the base uniform class from RHS to use as a parent for custom vest
    class rhs_vydra_3m;

    class FGW_V_O_Flak_Vest_Vydra_3M: rhs_vydra_3m {
        author = AUTHOR;
        displayName = "$STR_gr7bow_fgw_factions_o_atov_loreacc_vydra_3m_flakvest";
        scope = 2; // Available in Arsenal

        class ItemInfo: VestItem {
            uniformModel = "\rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m"; // Matched with Vydra-3M (rhs_vydra_3m)
            hiddenSelections[] = {"Camo1", "Camo2"}; // Matched with Vydra-3M (rhs_vydra_3m)

            armor = 20; // Matched with 6B3 Flak Vest (CUP_V_O_SLA_Flak_Vest03)
            passThrough = 1; // Matched with 6B3 Flak Vest (CUP_V_O_SLA_Flak_Vest03)
            containerClass = "Supply80"; // Matched with Vydra-3M (rhs_vydra_3m)
            mass = 55; // Matched with 6B3 Flak Vest (CUP_V_O_SLA_Flak_Vest03)
        };
    };
};
