#ifndef GUARD_MAP_PREVIEW_SCREEN_H
#define GUARD_MAP_PREVIEW_SCREEN_H

enum MapPreviewScreenId
{
    MPS_VIRIDIAN_FOREST = 0u,
    MPS_MT_MOON,
    MPS_DIGLETTS_CAVE,
    MPS_ROCK_TUNNEL,
    MPS_POKEMON_TOWER,
    MPS_SAFARI_ZONE,
    MPS_SEAFOAM_ISLANDS,
    MPS_POKEMON_MANSION,
    MPS_ROCKET_HIDEOUT,
    MPS_SILPH_CO,
    MPS_VICTORY_ROAD,
    MPS_CERULEAN_CAVE,
    MPS_POWER_PLANT,
    MPS_MT_EMBER,
    MPS_ROCKET_WAREHOUSE,
    MPS_MONEAN_CHAMBER,
    MPS_DOTTED_HOLE,
    MPS_BERRY_FOREST,
    MPS_ICEFALL_CAVE,
    MPS_LOST_CAVE,
    MPS_ALTERING_CAVE,
    MPS_PATTERN_BUSH,
    MPS_LIPTOO_CHAMBER,
    MPS_WEEPTH_CHAMBER,
    MPS_TDILFORD_CHAMBER,
    MPS_SCUFIB_CHAMBER,
    MPS_RIXY_CHAMBER,
    MPS_VIAPOIS_CHAMBER,
    MPS_S_S_ANNE,
    MPS_TOHJO_FALLS,
    MPS_DARK_CAVE,
    MPS_SPROUT_TOWER,
    MPS_RUINS_OF_ALPH,
    MPS_UNION_CAVE,
    MPS_SLOWPOKE_WELL,
    MPS_ILEX_FOREST,
    MPS_NATIONAL_PARK,
    MPS_BURNED_TOWER,
    MPS_BELL_TOWER,
    MPS_MT_MORTAR,
    MPS_LAKE_OF_RAGE,
    MPS_ICE_PATH,
    MPS_DRAGONS_DEN,
    MPS_MT_SILVER,
    MPS_OLIVINE_LIGHTHOUSE,
    MPS_WHIRL_ISLANDS,
    MPS_CLIFF_EDGE_GATE,
    MPS_EMBEDDED_TOWER,
    MPS_GAME_CORNER,
    MPS_UNITY_TOWER,
    MPS_COUNT
};

#define MPS_TYPE_CAVE   0
#define MPS_TYPE_FOREST 1
#define MPS_TYPE_ANY    2

struct MapPreviewScreen
{
    u16 mapsec;
    u8 type;
    u16 flagId;
    const void *tilesptr;
    const void *tilemapptr;
    const void *palptr;
};

u16 MapPreview_CreateMapNameWindow(u16 id);
void MapPreview_SetFlag(u16 a0);
u16 MapPreview_GetDuration(u16 id);
bool8 MapHasPreviewScreen(u16 mapsec, u8 type);
bool32 ForestMapPreviewScreenIsRunning(void);
const struct MapPreviewScreen * GetDungeonMapPreviewScreenInfo(u16 mapsec);
bool32 MapHasPreviewScreen_HandleQLState2(u16 mapsec, u8 type);
void MapPreview_InitBgs(void);
void MapPreview_LoadGfx(u16 mapsec);
bool32 MapPreview_IsGfxLoadFinished(void);
void MapPreview_Unload(s32 windowId);
void MapPreview_StartForestTransition(u16 mapsec);

#endif //GUARD_MAP_PREVIEW_SCREEN_H
