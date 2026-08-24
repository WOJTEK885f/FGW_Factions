class CfgVehicles {
    class FGWF_O_Atov_Base; // Forward declaration

    // Weapon override from M3A1 Grease Gun placeholder to Thompson M1A1
    class FGWF_O_Atov_Scout: FGWF_O_Atov_Base {
        weapons[] = {"sp_fwa_smg_thompson_m1a1", "CUP_hgun_M17_Black", "rhs_weap_panzerfaust60", "Throw", "Put"};
        respawnWeapons[] = {"sp_fwa_smg_thompson_m1a1", "CUP_hgun_M17_Black", "rhs_weap_panzerfaust60", "Throw", "Put"};

        magazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("sp_fwa_30Rnd_45acp_thompson_m1a1")
        };
        respawnMagazines[] = {
            "CUP_HandGrenade_RGD5",
            "rhs_panzerfaust60_mag",
            MAG_4("CUP_17Rnd_9x19_M17_Black"),
            MAG_8("sp_fwa_30Rnd_45acp_thompson_m1a1")
        };
    };
};
