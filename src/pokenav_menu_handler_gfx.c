#include "global.h"
#include "malloc.h"
#include "decompress.h"
#include "bg.h"
#include "palette.h"
#include "trig.h"
#include "gpu_regs.h"
#include "menu.h"
#include "window.h"
#include "pokenav.h"
#include "graphics.h"
#include "sound.h"
#include "window.h"
#include "strings.h"
#include "scanline_effect.h"
#include "constants/songs.h"
#include "constants/rgb.h"

#define GFXTAG_BLUE_LIGHT 1
#define GFXTAG_OPTIONS    3

#define PALTAG_BLUE_LIGHT 3
#define PALTAG_OPTIONS_DEFAULT 4 // Includes green for Smart/Region Map and yellow for Tough
#define PALTAG_OPTIONS_BLUE 5
#define PALTAG_OPTIONS_PINK 6
#define PALTAG_OPTIONS_BEIGE 7
#define PALTAG_OPTIONS_RED 8

#define PALTAG_OPTIONS_START PALTAG_OPTIONS_DEFAULT

#define NUM_OPTION_SUBSPRITES 4

#define OPTION_DEFAULT_X   140
#define OPTION_SELECTED_X  130
#define OPTION_EXIT_X      (DISPLAY_WIDTH + 16)

struct Pokenav_MenuGfx
{
    bool32 (*isTaskActiveCB)(void);
    u16 optionDescWindowId;
    u8 bg3ScrollTaskId;
    u8 cursorPos;
    u8 numIconsBlending;
    bool8 pokenavAlreadyOpen;
    bool32 iconVisible[MAX_POKENAV_MENUITEMS];
    struct Sprite *blueLightSprite;
    struct Sprite *iconSprites[MAX_POKENAV_MENUITEMS][NUM_OPTION_SUBSPRITES];
    u8 bg1TilemapBuffer[BG_SCREEN_SIZE];
};

static void LoadPokenavOptionPalettes(void);
static void CreateMenuOptionSprites(void);
static void StartOptionSlide(struct Sprite **, s32, s32, s32);
static void StartOptionZoom(struct Sprite **);
static bool32 AreMenuOptionSpritesMoving(void);
static void SetOptionInvisibility(struct Sprite **, bool32);
static void SpriteCB_OptionSlide(struct Sprite *);
static void SpriteCB_OptionZoom(struct Sprite *);
static bool32 IsDma3ManagerBusyWithBgCopy_(void);
static void Task_MoveBgDots(u8);
static void SetupPokenavMenuScanlineEffects(void);
static void ResetBldCnt(void);

static const u16 sPokenavBgDotsPal[] = INCBIN_U16("graphics/pokenav/bg_dots.gbapal");
static const u32 sPokenavBgDotsTiles[] = INCBIN_U32("graphics/pokenav/bg_dots.4bpp.lz");
static const u32 sPokenavBgDotsTilemap[] = INCBIN_U32("graphics/pokenav/bg_dots.bin.lz");
static const u16 sPokenavDeviceBgPal[] = INCBIN_U16("graphics/pokenav/device_outline.gbapal");
static const u32 sPokenavDeviceBgTiles[] = INCBIN_U32("graphics/pokenav/device_outline.4bpp.lz");
static const u32 sPokenavDeviceBgTilemap[] = INCBIN_U32("graphics/pokenav/device_outline_map.bin.lz");
static const u16 sMatchCallBlueLightPal[] = INCBIN_U16("graphics/pokenav/blue_light.gbapal");
static const u32 sMatchCallBlueLightTiles[] = INCBIN_U32("graphics/pokenav/blue_light.4bpp.lz");

static const struct BgTemplate sPokenavMainMenuBgTemplates[] = {
    {
        .bg = 1,
        .charBaseIndex = 1,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0x000
    }, {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 23,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0x000
    }, {
        .bg = 3,
        .charBaseIndex = 3,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0x000
    }
};

static const struct CompressedSpriteSheet sPokenavOptionsSpriteSheets[] =
{
    {
        .size = 0x3400,
        .tag = GFXTAG_OPTIONS
    },
    {
        .data = sMatchCallBlueLightTiles,
        .size = 0x0100,
        .tag = GFXTAG_BLUE_LIGHT
    }
};

static const struct SpritePalette sPokenavOptionsSpritePalettes[] =
{
    {sMatchCallBlueLightPal, PALTAG_BLUE_LIGHT},
};

// Tile number, palette tag offset
static const u16 sOptionsLabelGfx_RegionMap[] = {0x000, PALTAG_OPTIONS_DEFAULT - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Condition[] = {0x020, PALTAG_OPTIONS_BLUE - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_MatchCall[] = {0x040, PALTAG_OPTIONS_RED - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Ribbons[]   = {0x060, PALTAG_OPTIONS_PINK - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_SwitchOff[] = {0x080, PALTAG_OPTIONS_BEIGE - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Party[]     = {0x0A0, PALTAG_OPTIONS_BLUE - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Search[]    = {0x0C0, PALTAG_OPTIONS_BLUE - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Cool[]      = {0x0E0, PALTAG_OPTIONS_RED - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Beauty[]    = {0x100, PALTAG_OPTIONS_BLUE - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Cute[]      = {0x120, PALTAG_OPTIONS_PINK - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Smart[]     = {0x140, PALTAG_OPTIONS_DEFAULT - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Tough[]     = {0x160, PALTAG_OPTIONS_DEFAULT - PALTAG_OPTIONS_START};
static const u16 sOptionsLabelGfx_Cancel[]    = {0x180, PALTAG_OPTIONS_BEIGE - PALTAG_OPTIONS_START};

struct
{
    u16 yStart;
    u16 deltaY;
    const u16 *gfx[MAX_POKENAV_MENUITEMS];
} static const sPokenavMenuOptionLabelGfx[POKENAV_MENU_TYPE_COUNT] =
{
    [POKENAV_MENU_TYPE_DEFAULT] =
    {
        .yStart = 42,
        .deltaY = 20,
        .gfx = {
            sOptionsLabelGfx_RegionMap,
            sOptionsLabelGfx_Condition,
            sOptionsLabelGfx_SwitchOff
        }
    },
    [POKENAV_MENU_TYPE_UNLOCK_MC] =
    {
        .yStart = 42,
        .deltaY = 20,
        .gfx = {
            sOptionsLabelGfx_RegionMap,
            sOptionsLabelGfx_Condition,
            sOptionsLabelGfx_MatchCall,
            sOptionsLabelGfx_SwitchOff
        }
    },
    [POKENAV_MENU_TYPE_UNLOCK_MC_RIBBONS] =
    {
        .yStart = 42,
        .deltaY = 20,
        .gfx = {
            sOptionsLabelGfx_RegionMap,
            sOptionsLabelGfx_Condition,
            sOptionsLabelGfx_MatchCall,
            sOptionsLabelGfx_Ribbons,
            sOptionsLabelGfx_SwitchOff
        }
    },
    [POKENAV_MENU_TYPE_CONDITION] =
    {
        .yStart = 56,
        .deltaY = 20,
        .gfx = {
            sOptionsLabelGfx_Party,
            sOptionsLabelGfx_Search,
            sOptionsLabelGfx_Cancel
        }
    },
    [POKENAV_MENU_TYPE_CONDITION_SEARCH] =
    {
        .yStart = 40,
        .deltaY = 16,
        .gfx = {
            sOptionsLabelGfx_Cool,
            sOptionsLabelGfx_Beauty,
            sOptionsLabelGfx_Cute,
            sOptionsLabelGfx_Smart,
            sOptionsLabelGfx_Tough,
            sOptionsLabelGfx_Cancel
        }
    },
};

static const struct WindowTemplate sOptionDescWindowTemplate =
{
    .bg = 1,
    .tilemapLeft = 3,
    .tilemapTop = 17,
    .width = 24,
    .height = 2,
    .paletteNum = 1,
    .baseBlock = 8
};

static const u8 sOptionDescTextColors[]  = {TEXT_COLOR_GREEN, TEXT_COLOR_BLUE, TEXT_COLOR_LIGHT_GREEN};
static const u8 sOptionDescTextColors2[] = {TEXT_COLOR_GREEN, TEXT_COLOR_BLUE, TEXT_COLOR_LIGHT_GREEN};

static const struct OamData sOamData_MenuOption =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
};

static const union AffineAnimCmd sAffineAnim_MenuOption_Normal[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0, 0),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_MenuOption_Zoom[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, 0, 0),
    AFFINEANIMCMD_FRAME(0x10, 0x10, 0, 0x12),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sAffineAnims_MenuOption[] =
{
    sAffineAnim_MenuOption_Normal,
    sAffineAnim_MenuOption_Zoom
};

static const struct SpriteTemplate sMenuOptionSpriteTemplate =
{
    .tileTag = GFXTAG_OPTIONS,
    .paletteTag = PALTAG_OPTIONS_START,
    .oam = &sOamData_MenuOption,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = sAffineAnims_MenuOption,
    .callback = SpriteCallbackDummy,
};

static const struct OamData sBlueLightOamData =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 2,
    .paletteNum = 0,
};

static const struct SpriteTemplate sMatchCallBlueLightSpriteTemplate =
{
    .tileTag = GFXTAG_BLUE_LIGHT,
    .paletteTag = PALTAG_BLUE_LIGHT,
    .oam = &sBlueLightOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct ScanlineEffectParams sPokenavMainMenuScanlineEffectParams =
{
    &REG_WIN0H,
    ((DMA_ENABLE | DMA_START_HBLANK | DMA_REPEAT | DMA_DEST_RELOAD) << 16) | 1,
    1,
    0
};

static void LoadPokenavOptionPalettes(void)
{
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sPokenavOptionsSpriteSheets); i++)
        LoadCompressedSpriteSheet(&sPokenavOptionsSpriteSheets[i]);
    Pokenav_AllocAndLoadPalettes(sPokenavOptionsSpritePalettes);
}

static void CreateMenuOptionSprites(void)
{
    s32 i, j;

    for (i = 0; i < MAX_POKENAV_MENUITEMS; i++)
    {
        for (j = 0; j < NUM_OPTION_SUBSPRITES; j++)
        {
            u8 spriteId = CreateSprite(&sMenuOptionSpriteTemplate, 0x8c, 20 * i + 40, 3);
            gSprites[spriteId].x2 = 32 * j;
        }
    }
}

static bool32 AreMenuOptionSpritesMoving(void)
{
    return FALSE;
}

#define sSlideTime  data[0]
#define sSlideAccel data[1]
#define sSlideSpeed data[2]
#define sSlideEndX  data[7]

static void StartOptionSlide(struct Sprite **sprites, s32 startX, s32 endX, s32 time)
{
    s32 i;

    for (i = 0; i < NUM_OPTION_SUBSPRITES; i++)
    {
        (*sprites)->x = startX;
        (*sprites)->sSlideTime = time;
        (*sprites)->sSlideAccel = 16 * (endX - startX) / time;
        (*sprites)->sSlideSpeed = 16 * startX;
        (*sprites)->sSlideEndX = endX;
        (*sprites)->callback = SpriteCB_OptionSlide;
        sprites++;
    }
}

#define sZoomDelay       data[0]
#define sZoomSetAffine   data[1]
#define sZoomSpeed       data[2]
#define sZoomSubspriteId data[7]

#define tBlendDelay   data[0]
#define tBlendState   data[1]
#define tBlendTarget1 data[2]
#define tBlendTarget2 data[3]
#define tBlendCounter data[4]

static void StartOptionZoom(struct Sprite **sprites)
{
    s32 i;
    u8 taskId;

    for (i = 0; i < NUM_OPTION_SUBSPRITES; i++)
    {
        (*sprites)->oam.objMode = ST_OAM_OBJ_BLEND;
        (*sprites)->oam.affineMode = ST_OAM_AFFINE_DOUBLE;
        (*sprites)->callback = SpriteCB_OptionZoom;
        (*sprites)->sZoomDelay = 8;
        (*sprites)->sZoomSetAffine = FALSE;
        (*sprites)->sZoomSubspriteId = i;
        InitSpriteAffineAnim(sprites[0]);
        StartSpriteAffineAnim(sprites[0], 0);
        sprites++;
    }

    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(16, 0));
}

static void SetOptionInvisibility(struct Sprite **sprites, bool32 invisible)
{
    s32 i;

    for (i = 0; i < NUM_OPTION_SUBSPRITES; i++)
    {
        (*sprites)->invisible = invisible;
        sprites++;
    }
}

static void SpriteCB_OptionSlide(struct Sprite *sprite)
{
    sprite->sSlideTime--;
    if (sprite->sSlideTime != -1)
    {
        sprite->sSlideSpeed += sprite->sSlideAccel;
        sprite->x = sprite->sSlideSpeed >> 4;
    }
    else
    {
        sprite->x = sprite->sSlideEndX;
        sprite->callback = SpriteCallbackDummy;
    }
}

#undef sSlideTime
#undef sSlideAccel
#undef sSlideSpeed
#undef sSlideEndX

static void SpriteCB_OptionZoom(struct Sprite *sprite)
{
    s32 temp;
    s32 x;
    if (sprite->sZoomDelay == 0)
    {
        if (!sprite->sZoomSetAffine)
        {
            StartSpriteAffineAnim(sprite, 1);
            sprite->sZoomSetAffine++;
            sprite->sZoomSpeed = 0x100;
            sprite->x += sprite->x2;
            sprite->x2 = 0;
        }
        else
        {
            sprite->sZoomSpeed += 16;
            temp = sprite->sZoomSpeed;
            x = temp >> 3;
            x = (x - 32) / 2;

            // Each subsprite needs to zoom to a different degree/direction
            switch (sprite->sZoomSubspriteId)
            {
            case 0:
                sprite->x2 = -x * 3;
                break;
            case 1:
                sprite->x2 = -x;
                break;
            case 2:
                sprite->x2 = x;
                break;
            case 3:
                sprite->x2 = x * 3;
                break;
            }
            if (sprite->affineAnimEnded)
            {
                sprite->invisible = TRUE;
                FreeOamMatrix(sprite->oam.matrixNum);
                CalcCenterToCornerVec(sprite, sprite->oam.shape, sprite->oam.size, ST_OAM_AFFINE_OFF);
                sprite->oam.affineMode = ST_OAM_AFFINE_OFF;
                sprite->oam.objMode = ST_OAM_OBJ_NORMAL;
                sprite->callback = SpriteCallbackDummy;
            }
        }
    }
    else
    {
        sprite->sZoomDelay--;
    }
}

#undef sZoomDelay
#undef sZoomSetAffine
#undef sZoomSpeed
#undef sZoomSubspriteId

#undef tBlendDelay
#undef tBlendState
#undef tBlendTarget1
#undef tBlendTarget2
#undef tBlendCounter

static bool32 IsDma3ManagerBusyWithBgCopy_(void)
{
    return IsDma3ManagerBusyWithBgCopy();
}

static void Task_MoveBgDots(u8 taskId)
{
    ChangeBgX(3, 0x80, BG_COORD_ADD);
}

static void ChangeBgDotsColorToPurple(void)
{
    CopyPaletteIntoBufferUnfaded(sPokenavBgDotsPal + 7, BG_PLTT_ID(3) + 1, PLTT_SIZEOF(2));
}

static void VBlankCB_PokenavMainMenu(void)
{
    TransferPlttBuffer();
    LoadOam();
    ProcessSpriteCopyRequests();
    ScanlineEffect_InitHBlankDmaTransfer();
}

static void SetupPokenavMenuScanlineEffects(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_OBJ | BLDCNT_EFFECT_LIGHTEN);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_ALL);
    SetGpuRegBits(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_OBJ);
    SetGpuRegBits(REG_OFFSET_WIN0V, DISPLAY_HEIGHT);
    ScanlineEffect_Stop();
    ScanlineEffect_SetParams(sPokenavMainMenuScanlineEffectParams);
}

static void ResetBldCnt(void)
{
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
}

void ResetBldCnt_(void)
{
    ResetBldCnt();
}
