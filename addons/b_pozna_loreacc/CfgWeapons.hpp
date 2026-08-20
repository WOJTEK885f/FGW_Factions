class CfgWeapons {
    class VestItem; // Define the base vest class from Arma 3 core to inherit proper item properties

    class rhs_vydra_3m; // Import the base uniform class from RHS to use as a parent for custom vest

    // Custom Vydra-3M vest class with added armor
    class FGW_V_B_Flak_Vest_Vydra_3M: rhs_vydra_3m {
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
};
