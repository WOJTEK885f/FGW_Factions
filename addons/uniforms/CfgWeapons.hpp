class CfgWeapons {
    // Import parent classes
    class Default;
    class ItemCore: Default {};
    class Uniform_Base: ItemCore {};
    class InventoryItem_Base_F;
    class UniformItem: InventoryItem_Base_F {};

    // Import the base uniform class from A3 to use as a parent for custom uniform
    class U_Marshal: Uniform_Base {
        class ItemInfo: UniformItem {};
    };

    class FGWF_U_Marshal: U_Marshal {
        author = AUTHOR;
        displayName = CSTRING(Marshal);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            uniformClass = "FGWF_Dummy_Marshal"; // Apply unlocked dummy model instead of the restricted C_Marshal_F
        };
    };

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_FROG3_WMARPAT: ItemCore {
        class ItemInfo: UniformItem {};
    };

    // Custom unrestricted uniform class
    class FGWF_U_USMC_FROG3_WMARPAT: CUP_U_B_USMC_FROG3_WMARPAT {
        author = AUTHOR;
        displayName = CSTRING(USMC_FROG3_WMARPAT);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            uniformClass = "FGWF_Dummy_USMC14"; // Apply unlocked dummy model instead of the restricted CUP one
        };
    };

    class CUP_U_B_USMC_MCCUU: ItemCore {
        class ItemInfo: UniformItem {};
    };

    class CUP_U_B_USMC_MCCUU_M81_MARPAT: CUP_U_B_USMC_MCCUU {
        class ItemInfo: ItemInfo {};
    };

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2: CUP_U_B_USMC_MCCUU_M81_MARPAT {
        class ItemInfo: ItemInfo {};
    };

    class FGWF_U_USMC_MCCUU_M81_MARPAT_roll_2: CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2 {
        author = AUTHOR;
        displayName = CSTRING(MCCUU_M81_MARPAT_roll_2);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGWF_Dummy_MCCUU2";
        };
    };

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_MCCUU_MARPAT_M81: CUP_U_B_USMC_MCCUU {
        class ItemInfo: ItemInfo     {};
    };

    class FGWF_U_USMC_MCCUU_MARPAT_M81: CUP_U_B_USMC_MCCUU_MARPAT_M81 {
        author = AUTHOR;
        displayName = CSTRING(MCCUU_MARPAT_M81);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGWF_Dummy_MCCUU_MARPAT_M81";
        };
    };

    class CUP_U_C_Worker_01: ItemCore {};

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_C_Worker_02: CUP_U_C_Worker_01 {
        class ItemInfo: UniformItem {};
    };

    class FGWF_U_C_Worker_02: CUP_U_C_Worker_02 {
        author = AUTHOR;
        displayName = CSTRING(C_Worker_02);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGWF_Dummy_C_Worker_02";
        };
    };

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_I_B_PMC_Unit_1: ItemCore {
        class ItemInfo: UniformItem {};
    };

    class FGWF_U_PMC_Unit_1: CUP_I_B_PMC_Unit_1 {
        author = AUTHOR;
        displayName = CSTRING(PMC_Unit_1);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGWF_Dummy_PMC1";
        };
    };

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_I_B_PMC_Unit_31: ItemCore {
        class ItemInfo: UniformItem {};
    };

    class FGWF_U_PMC_Unit_31: CUP_I_B_PMC_Unit_31 {
        author = AUTHOR;
        displayName = CSTRING(PMC_Unit_31);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGWF_Dummy_PMC31";
        };
    };

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_I_B_PMC_Unit_35: ItemCore {
        class ItemInfo: UniformItem {};
    };

    class FGWF_U_PMC_Unit_35: CUP_I_B_PMC_Unit_35 {
        author = AUTHOR;
        displayName = CSTRING(PMC_Unit_35);
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGWF_Dummy_PMC35";
        };
    };
};
