class CfgWeapons {
    class UniformItem; // Define the base uniform class from Arma 3 core to inherit proper item properties

    // These are done differently due to various no entry warnings
    class CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2; // Import the base uniform item from CUP

    // Custom unrestricted uniform class
    class FGW_U_O_USMC_MCCUU_M81_MARPAT_roll_2_UMAN: CUP_U_B_USMC_MCCUU_M81_MARPAT_roll_2 {
        author = AUTHOR;
        displayName = "$STR_gr7bow_fgw_factions_o_uman_loreacc_MCCUU_M81_MARPAT_roll_2_UMAN";
        scope = 2; // Available in Arsenal

        class ItemInfo: UniformItem {
            // Apply our unlocked dummy model instead of the restricted CUP one
            uniformClass = "FGW_O_Uman_Dummy_MCCUU";

            containerClass = "Supply60"; // Matched with original CUP capacity
            mass = 20; // Matched with original CUP mass
        };
    };
};
