class CfgVehicles {
    class B_Soldier_F; // Forward declaration

    class FGW_B_VFF_Base: B_Soldier_F {
        // Faction identity: Female slavic appearance (placeholder) and female voice (only English language works)
        identityTypes[] = {"Head_Female", "FGW_Female_Faces_NoHair"}; // Head_Female uses RHS Female voice, CUP_D_Female01_EN did not work with identityTypes for unknown reason
    };
};
