class CfgWeapons {
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

    class CUP_srifle_G22_wdl; // Import the base G22 sniper rifle class from CUP to use as a parent for custom suppressed variant

    // Custom suppressed G22 sniper rifle class with optics (as in-game SV98M)
    class FGWF_srifle_G22_wdl_sd_lmk4: CUP_srifle_G22_wdl {
        author = AUTHOR;
        displayName = CSTRING(srifle_G22_wdl_sd_lmk4);
        scope = 1; // Not available in Arsenal

        class LinkedItems {
            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "CUP_muzzle_snds_AWM";
            };
            class LinkedItemsOptic {
                slot = "CUP_PicatinnyTopMountAWM";
                item = "CUP_optic_LeupoldMk4";
            };
        };
    };
};
