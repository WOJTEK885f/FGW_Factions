class CfgWeapons {
    // Import the base uniform class from CUP to use as a parent for custom uniform
    class CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2 {
        class ItemInfo;
    };

    // Custom unrestricted uniform class
    class FGW_U_O_USMC_MCCUU_M81_MARPAT_roll_2_UMAN: CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2 {
        author = AUTHOR;
        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_MCCUU_M81_MARPAT_roll_2_UMAN";
        scope = 2; // Available in Arsenal

        class ItemInfo: ItemInfo {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Uman_Dummy_MCCUU";
        };
    };
};
