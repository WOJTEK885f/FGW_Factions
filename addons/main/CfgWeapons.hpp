class CfgWeapons {
    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_FROG3_WMARPAT {
        class ItemInfo;
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

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_I_B_PMC_Unit_35 {
        class ItemInfo;
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

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_I_B_PMC_Unit_1 {
        class ItemInfo;
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
    class CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2 {
        class ItemInfo;
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
    class CUP_U_B_USMC_MCCUU_MARPAT_M81 {
        class ItemInfo;
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

    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_C_Worker_02 {
        class ItemInfo;
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

    // Import parent classes for U_Marshal
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
            // Apply unlocked dummy model instead of the restricted C_Marshal_F
            uniformClass = "FGWF_Dummy_Marshal";
        };
    };

    class VestItem; // Define the base vest class from Arma 3 core to inherit proper item properties

    class rhs_vydra_3m; // Import the base uniform class from RHS to use as a parent for custom vest
    // Custom Vydra-3M vest class with added armor
    class FGWF_V_Flak_Vest_Vydra_3M: rhs_vydra_3m {
        author = AUTHOR;
        displayName = CSTRING(vydra_3m_flakvest);
        scope = 2; // Available in Arsenal

        class ItemInfo: VestItem {
            // Model configuration matched with Vydra-3M (rhs_vydra_3m)
            uniformModel = "\rhsafrf\addons\rhs_infantry\gear\vests\rhs_vydra_3m";
            hiddenSelections[] = {"Camo1", "Camo2"};

            // Base stats matched with 6B3 Flak Vest (CUP_V_O_SLA_Flak_Vest03)
            armor = 20;
            passThrough = 1;
            containerClass = "Supply80"; // Load matched with Vydra-3M (rhs_vydra_3m)
            mass = 55;

            // Armor stats matched with 6B3 Flak Vest (CUP_V_O_SLA_Flak_Vest03)
            class HitpointsProtectionInfo {
                class Chest {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Diaphragm {
                    hitpointName = "HitDiaphragm";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Body {
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 0.4;
                };
            };
        };
    };

    class CUP_srifle_AWM_blk; // Import the base AWM sniper rifle class from CUP to use as a parent for custom suppressed variant

    // Custom suppressed AWM sniper rifle class (as in-game AWR)
    class FGWF_srifle_AWM_blk_sd: CUP_srifle_AWM_blk {
        author = AUTHOR;
        displayName = CSTRING(srifle_AWM_blk_sd);
        scope = 1; // Not available in Arsenal

        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "CUP_muzzle_snds_AWM";
            };
        };
    };
};
