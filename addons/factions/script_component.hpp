#define COMPONENT factions
#define COMPONENT_BEAUTIFIED Factions
#include "\z\gr7bow_fgw_factions\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define ENABLE_PERFORMANCE_COUNTERS

#include "\z\gr7bow_fgw_factions\addons\main\script_macros.hpp"

#define MAG_2(a) a, a
#define MAG_3(a) a, a, a
#define MAG_4(a) a, a, a, a
#define MAG_5(a) a, a, a, a, a
#define MAG_6(a) a, a, a, a, a, a
#define MAG_7(a) a, a, a, a, a, a, a
#define MAG_8(a) a, a, a, a, a, a, a, a
#define MAG_9(a) a, a, a, a, a, a, a, a, a
#define MAG_10(a) a, a, a, a, a, a, a, a, a, a
#define MAG_11(a) a, a, a, a, a, a, a, a, a, a, a
#define MAG_12(a) a, a, a, a, a, a, a, a, a, a,	a, a
#define MAG_13(a) a, a, a, a, a, a, a, a, a, a,	a, a, a
#define MAG_14(a) a, a, a, a, a, a, a, a, a, a,	a, a, a, a
#define MAG_15(a) a, a, a, a, a, a, a, a, a, a,	a, a, a, a, a

#define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
#define WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}
#define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}
#define PACK_XX(a,b) class _xx_##a {backpack = a; count = b;}
