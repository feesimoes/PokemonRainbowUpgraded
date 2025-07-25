#include "global.h"
#include "pokenav.h"
#include "constants/songs.h"
#include "sound.h"
#include "constants/rgb.h"
#include "palette.h"
#include "bg.h"
#include "window.h"
#include "strings.h"
#include "graphics.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "menu.h"
#include "dma3.h"

struct Pokenav_MainMenu
{
    u32 helpBarWindowId;
    u32 palettes;
    struct Sprite *leftHeaderSprites[2];
    struct Sprite *submenuLeftHeaderSprites[2];
    u8 tilemapBuffer[BG_SCREEN_SIZE];
};

struct CompressedSpriteSheetNoSize
{
    const u32 *data;  // LZ77 compressed palette data
    u32 tag;
};

static void HideLeftHeaderSubmenuSprites(bool32);
static void HideLeftHeaderSprites(bool32);
static void ShowLeftHeaderSprites(u32, bool32);
static void ShowLeftHeaderSubmenuSprites(u32, bool32);
static void MoveLeftHeader(struct Sprite *, s32, s32, s32);
static void SpriteCB_MoveLeftHeader(struct Sprite *);

static const u32 sBlueLightCopy[] = INCBIN_U32("graphics/pokenav/blue_light.4bpp.lz"); // Unused copy of sMatchCallBlueLightTiles

const struct BgTemplate gPokenavMainMenuBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 5,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    }
};

static const struct WindowTemplate sHelpBarWindowTemplate[] =
{
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 22,
        .width = 16,
        .height = 2,
        .paletteNum = 0,
        .baseBlock = 0x36,
    },
    DUMMY_WIN_TEMPLATE
};

static const u8 sHelpBarTextColors[3] =
{
    TEXT_COLOR_RED, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY
};

static const struct CompressedSpriteSheet sMenuLeftHeaderSpriteSheet =
{
    .size = 0xC00,
    .tag = 2
};

static const struct CompressedSpriteSheet sMenuLeftHeaderSpriteSheets[] =
{
    [POKENAV_GFX_MAIN_MENU] = {
        .size = 0x20,
        .tag = 3
    },
    [POKENAV_GFX_CONDITION_MENU] = {
        .size = 0x20,
        .tag = 1
    },
    [POKENAV_GFX_RIBBONS_MENU] = {
        .size = 0x20,
        .tag = 2
    },
    [POKENAV_GFX_MATCH_CALL_MENU] = {
        .size = 0x20,
        .tag = 4
    },
    [POKENAV_GFX_MAP_MENU_ZOOMED_OUT] = {
        .size = 0x20,
        .tag = 0
    },
    [POKENAV_GFX_MAP_MENU_ZOOMED_IN] = {
        .size = 0x40,
        .tag = 0
    }
};

static const struct CompressedSpriteSheetNoSize sPokenavSubMenuLeftHeaderSpriteSheets[] =
{
    [POKENAV_GFX_PARTY_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 1
    },
    [POKENAV_GFX_SEARCH_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 1
    },
    [POKENAV_GFX_COOL_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 4
    },
    [POKENAV_GFX_BEAUTY_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 1
    },
    [POKENAV_GFX_CUTE_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 2
    },
    [POKENAV_GFX_SMART_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 0
    },
    [POKENAV_GFX_TOUGH_MENU - POKENAV_GFX_SUBMENUS_START] = {
        .tag = 0
    }
};

static const struct OamData sOamData_LeftHeader =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(64x32),
    .x = 0,
    .size = SPRITE_SIZE(64x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

static const struct OamData sOamData_SubmenuLeftHeader =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
};

static const struct SpriteTemplate sLeftHeaderSpriteTemplate =
{
    .tileTag = 2,
    .paletteTag = 1,
    .oam = &sOamData_LeftHeader,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static const struct SpriteTemplate sSubmenuLeftHeaderSpriteTemplate =
{
    .tileTag = 2,
    .paletteTag = 2,
    .oam = &sOamData_SubmenuLeftHeader,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

bool32 InitPokenavMainMenu(void)
{
    struct Pokenav_MainMenu *menu;
    ResetSpriteData();
    FreeAllSpritePalettes();
    return TRUE;
}

void ShutdownPokenav(void)
{
    PlaySE(SE_POKENAV_OFF);
    ResetBldCnt_();
    BeginNormalPaletteFade(PALETTES_ALL, -1, 0, 16, RGB_BLACK);
}

bool32 WaitForPokenavShutdownFade(void)
{
    if (!gPaletteFade.active)
    {
        FreeAllWindowBuffers();
        return FALSE;
    }

    return TRUE;
}

void CopyPaletteIntoBufferUnfaded(const u16 *palette, u32 bufferOffset, u32 size)
{
    CpuCopy16(palette, &gPlttBufferUnfaded[bufferOffset], size);
}

void Pokenav_AllocAndLoadPalettes(const struct SpritePalette *palettes)
{
    const struct SpritePalette *current;
    u32 index;

    for (current = palettes; current->data != NULL; current++)
    {
        index = AllocSpritePalette(current->tag);
        if (index == 0xFF)
        {
            break;
        }
        else
        {
            index = OBJ_PLTT_ID(index);
            CopyPaletteIntoBufferUnfaded(current->data, index, PLTT_SIZE_4BPP);
        }
    }
}

void PokenavFillPalette(u32 palIndex, u16 fillValue)
{
    CpuFill16(fillValue, &gPlttBufferFaded[OBJ_PLTT_ID(palIndex)], PLTT_SIZE_4BPP);
}

void PokenavCopyPalette(const u16 *src, const u16 *dest, int size, int a3, int a4, u16 *palette)
{
    if (a4 == 0)
    {
        CpuCopy16(src, palette, size * 2);
    }
    else if (a4 >= a3)
    {
        CpuCopy16(dest, palette, size * 2);
    }
    else
    {
        int r, g, b;
        int r1, g1, b1;
        while (size--)
        {
            r = GET_R(*src);
            g = GET_G(*src);
            b = GET_B(*src);

            r1 = ((((GET_R(*dest) << 8) - (r << 8)) / a3) * a4) >> 8;
            g1 = ((((GET_G(*dest) << 8) - (g << 8)) / a3) * a4) >> 8;
            b1 = ((((GET_B(*dest) << 8) - (b << 8)) / a3) * a4) >> 8;

            r = (r + r1) & 0x1F; //_RGB(r + r1, g + g1, b + b1); doesn't match
            g = (g + g1) & 0x1F;
            b = (b + b1) & 0x1F;

            *palette = RGB2(r, g, b);

            src++, dest++;
            palette++;
        }
    }
}

bool32 IsPaletteFadeActive(void)
{
    return gPaletteFade.active;
}

void FadeToBlackExceptPrimary(void)
{
    BlendPalettes(PALETTES_ALL & ~(1 << 16 | 1), 16, RGB_BLACK);
}

void InitBgTemplates(const struct BgTemplate *templates, int count)
{
    int i;

    for (i = 0; i < count; i++)
        InitBgFromTemplate(templates++);
}

static void MoveLeftHeader(struct Sprite *sprite, s32 startX, s32 endX, s32 duration)
{
    sprite->x = startX;
    sprite->data[0] = startX * 16;
    sprite->data[1] = (endX - startX) * 16 / duration;
    sprite->data[2] = duration;
    sprite->data[7] = endX;
    sprite->callback = SpriteCB_MoveLeftHeader;
}

static void SpriteCB_MoveLeftHeader(struct Sprite *sprite)
{
    if (sprite->data[2] != 0)
    {
        sprite->data[2]--;
        sprite->data[0] += sprite->data[1];
        sprite->x = sprite->data[0] >> 4;
        if (sprite->x < -16 || sprite->x > 256)
            sprite->invisible = TRUE;
        else
            sprite->invisible = FALSE;
    }
    else
    {
        sprite->x = sprite->data[7];
        sprite->callback = SpriteCallbackDummy;
    }
}
