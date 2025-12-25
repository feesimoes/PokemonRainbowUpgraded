#include "global.h"
#include "gflib.h"
#include "event_data.h"
#include "pokedex.h"
#include "region_map.h"
#include "save_menu_util.h"
#include "strings.h"

#include "constants/vars.h"
u8 *GetCurrentDay(u8 *dest)
{
    const u8 *dayString; 

    switch (VarGet(VAR_DAY_DATE))
    {
        case 0:
            dayString = gString_Monday;
            break;
        case 1:
            dayString = gString_Tuesday;
            break;
        case 2:
            dayString = gString_Wednesday;
            break;
        case 3:
            dayString = gString_Thursday;
            break;
        case 4:
            dayString = gString_Friday;
            break;
        case 5:
            dayString = gString_Saturday;
            break;
        case 6:
        default:
            dayString = gString_Sunday;
            break;
    }
    return StringCopy(dest, dayString);
}

void SaveStatToString(u8 gameStatId, u8 *dest0, u8 color)
{
    int nBadges;
    int flagId;

    int hour = VarGet(VAR_TIME_HOUR);
    int minute = VarGet(VAR_TIME_MINUTE);
    int second = VarGet(VAR_TIME_SECOND);

    u8 *dest = dest0;
    *dest++ = EXT_CTRL_CODE_BEGIN;
    *dest++ = EXT_CTRL_CODE_COLOR;
    *dest++ = color;
    *dest++ = EXT_CTRL_CODE_BEGIN;
    *dest++ = EXT_CTRL_CODE_SHADOW;
    *dest++ = color + 1;
    switch (gameStatId)
    {
    case SAVE_STAT_NAME:
        dest = StringCopy(dest, gSaveBlock2Ptr->playerName);
        break;
    case SAVE_STAT_POKEDEX:
        if (IsNationalPokedexEnabled())
            dest = ConvertIntToDecimalStringN(dest, GetNationalPokedexCount(1), STR_CONV_MODE_LEFT_ALIGN, 3);
        else
            dest = ConvertIntToDecimalStringN(dest, GetKantoPokedexCount(1), STR_CONV_MODE_LEFT_ALIGN, 3);
        break;
    case SAVE_STAT_TIME:
        dest = GetCurrentDay(dest);
        *dest++ = CHAR_SPACE;
        dest = ConvertIntToDecimalStringN(dest, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
        *dest++ = CHAR_COLON;
        dest = ConvertIntToDecimalStringN(dest, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
        *dest++ = CHAR_COLON;
        dest = ConvertIntToDecimalStringN(dest, second, STR_CONV_MODE_LEADING_ZEROS, 2);
        *dest = EOS; 
        break;
    case SAVE_STAT_TIME_HR_RT_ALIGN:
        dest = ConvertIntToDecimalStringN(dest, gSaveBlock2Ptr->playTimeHours, STR_CONV_MODE_RIGHT_ALIGN, 3);
        *dest++ = CHAR_COLON;
        dest = ConvertIntToDecimalStringN(dest, gSaveBlock2Ptr->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
        break;
    case SAVE_STAT_LOCATION:
        GetMapNameGeneric(dest, gMapHeader.regionMapSectionId);
        break;
    case SAVE_STAT_BADGES:
        for (flagId = FLAG_BADGE01_GET, nBadges = 0; flagId < FLAG_BADGE01_GET + 8; flagId++)
        {
            if (FlagGet(flagId))
                nBadges++;
        }
        //Sinnoh Badge 1
        if (FlagGet(FLAG_OBTAINED_ROCK_CLIMB_KIT))
        {
            nBadges++;
        }
        //Johto Badge 1
        if (FlagGet(FLAG_JOHTO_BADGE01_GET))
        {
            nBadges++;
        }
        //Johto Badge 2
        if (FlagGet(FLAG_JOHTO_BADGE02_GET))
        {
            nBadges++;
        }
        //Johto Badge 3
        if (FlagGet(FLAG_JOHTO_BADGE03_GET))
        {
            nBadges++;
        }
        //Johto Badge 4
        if (FlagGet(FLAG_JOHTO_BADGE04_GET))
        {
            nBadges++;
        }
        //Johto Badge 5
        if (FlagGet(FLAG_JOHTO_BADGE05_GET))
        {
            nBadges++;
        }
        //Johto Badge 6
        if (FlagGet(FLAG_JOHTO_BADGE06_GET))
        {
            nBadges++;
        }
        //Johto Badge 7
        if (FlagGet(FLAG_JOHTO_BADGE07_GET))
        {
            nBadges++;
        }
        //Johto Badge 8
        if (FlagGet(FLAG_JOHTO_BADGE08_GET))
        {
            nBadges++;
        }

        if (nBadges > 9)
        {
            dest = ConvertIntToDecimalStringN(dest, nBadges, STR_CONV_MODE_LEFT_ALIGN, 2);
            *dest++ = EOS;
        }
        else
        {
            dest = ConvertIntToDecimalStringN(dest, nBadges, STR_CONV_MODE_LEADING_ZEROS, 1);
            StringAppend(dest, gTextJPDummy_Ko);
        }
        break;
        //*dest++ = nBadges + CHAR_0;
        //*dest++ = 10; // 'こ'
        //*dest++ = EOS;
        //break;
    }
}
