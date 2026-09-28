#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"WOJTEK885"};
        url = ECSTRING(main,url);
        name = QUOTE(COMPONENT);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "gr7bow_fgwf_main",
            "gr7bow_fgwf_b_player_loreacc", // FGWF_B_Player_Base, FGWF_B_Player_GuerFemaleBase
            "gr7bow_fgwf_b_pozna_loreacc",  // FGWF_Identity_Pozna_Companion_Tatyana
            "gr7bow_fgwf_b_vff_loreacc",    // FGWF_B_VFF_Base, FGWF_Identity_VFF_Companion_Oksana, FGWF_Identity_VFF_Companion_Victoria
            "gr7bow_fgwf_i_cfr_loreacc",    // FGWF_Identity_CFR_Companion_Olga
            "A3_Characters_F",              // B_Soldier_F, Head_Female
            "A3_Characters_F_Heads",        // Man_A3
            "zee_FiftyShadesOfFemale"  // fsof_FemaleCauc01t2_GreenEyes_Bun_BrownHair, fsof_FemaleCauc01t3_BrownEyes_Bun_BrownHair, fsof_femaleCauc02t4_GreenEyes_Bun_BrownHair, fsof_femaleCauc02t4_HazelEyes_Bun_BlondeHair
        };
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;

        skipWhenMissingDependencies = 1;
    };
};

#include "CfgIdentities.hpp"
#include "CfgFaces.hpp"
#include "CfgVehicles.hpp"
