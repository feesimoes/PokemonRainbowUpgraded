#include "global.h"
#include "gflib.h"
#include "overworld.h"
#include "overworld_multiplayer.h"
#include "link.h"
#include "text_window.h"
#include "field_player_avatar.h"
#include "field_control_avatar.h"
#include "event_object_movement.h"
#include "sprite.h"
#include "task.h"
#include "script.h"
#include "event_data.h"
#include "fieldmap.h"
#include "window.h"
#include "text.h"
#include "string_util.h"
#include "constants/event_objects.h"
#include "constants/event_object_movement.h"
#include "constants/cable_club.h"

extern void TryOverworldMultiplayerLinkup(void);
extern const u8 EventScript_RemotePlayerInteraction[];

// FRLG specific fallback if the multiplayer sprite is missing
#ifndef OBJ_EVENT_GFX_LINK_RED
#define OBJ_EVENT_GFX_LINK_RED OBJ_EVENT_GFX_BOY
#endif
#ifndef OBJ_EVENT_GFX_LINK_BLUE
#define OBJ_EVENT_GFX_LINK_BLUE OBJ_EVENT_GFX_GIRL
#endif

#define WIN_PAL_NUM 13
#define OWL_SEND_INTERVAL 2

EWRAM_DATA struct OverworldMultiplayerManager gOverworldMultiplayerManager;

static void Task_OverworldMultiplayerManager(u8 taskId);
static void UpdateRemotePlayerSprites(void);
static void SetupRemotePlayerObjectEvent(struct RemoteOverworldPlayer* remotePlayer);
static void ActivateRemotePlayerSlotsForCurrentLink(void);

// Forward declarations
void SendOverworldPlayerState(void);
void ProcessIncomingOverworldPackets(void);
void HideMultiplayerMapWindow(void);
void ShowMultiplayerMapWindow(void);  // declared here so Task can call it without warning

void InitOverworldMultiplayer(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    u8 i;

    mgr->state = OWL_STATE_IDLE;
    mgr->playerCount = 0;
    mgr->updateCounter = 0;
    mgr->isConnected = FALSE;
    mgr->isListening = FALSE;
    mgr->frameCount = 0;
    mgr->restoreErrorTimer = 0;
    mgr->lastInteractionPlayer = 0xFF;
    mgr->lastInteractionFrame = 0;
    mgr->lastMapGroup = 0xFF;
    mgr->lastMapNum = 0xFF;

    for (i = 0; i < MAX_OVERWORLD_MULTIPLAYER_PLAYERS; i++)
    {
        mgr->players[i].active = FALSE;
        mgr->players[i].linkPlayerId = 0xFF;
        mgr->players[i].objEventId = 0xFF;
        mgr->players[i].localId = 0xFF;
        mgr->players[i].lastUpdateFrame = 0;
    }

    if (FindTaskIdByFunc(Task_OverworldMultiplayerManager) == TASK_NONE)
        CreateTask(Task_OverworldMultiplayerManager, 5);
}

void DestroyOverworldMultiplayer(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    u8 i;

    for (i = 0; i < MAX_OVERWORLD_MULTIPLAYER_PLAYERS; i++)
    {
        if (mgr->players[i].active && mgr->players[i].localId != 0xFF)
        {
            RemoveObjectEventByLocalIdAndMap(mgr->players[i].localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
            mgr->players[i].localId = 0xFF;
        }
        mgr->players[i].active = FALSE;
    }

    mgr->isConnected = FALSE;
    mgr->playerCount = 0;
    mgr->state = OWL_STATE_IDLE;
    HideMultiplayerMapWindow();
    // note: do NOT restore link error message here; see Script_StopOverworldMultiplayerListener
}

void ResumeOverworldMultiplayer(void)
{
    if (gOverworldMultiplayerManager.isConnected)
    {
        if (FindTaskIdByFunc(Task_OverworldMultiplayerManager) == TASK_NONE)
            CreateTask(Task_OverworldMultiplayerManager, 5);
    }
}

static void ActivateRemotePlayerSlotsForCurrentLink(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    u8 i;
    u8 linkPlayerCount = GetLinkPlayerCount();

    mgr->playerCount = linkPlayerCount;
    for (i = 0; i < linkPlayerCount && i < MAX_OVERWORLD_MULTIPLAYER_PLAYERS; i++)
    {
        if (!mgr->players[i].active)
        {
            mgr->players[i].active = TRUE;
            mgr->players[i].linkPlayerId = i;
            mgr->players[i].objEventId = 0xFF;
            mgr->players[i].localId = 0xFF;
            mgr->players[i].mapGroup = 0xFF; // Stays undefined until first packet arrives to avoid spawn flicker
            mgr->players[i].mapNum = 0xFF;
            mgr->players[i].x = 0;
            mgr->players[i].y = 0;
            mgr->players[i].linkPlayer = gLinkPlayers[i];
            mgr->players[i].lastUpdateFrame = mgr->frameCount;
        }
    }
}

static void Task_OverworldMultiplayerManager(u8 taskId)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    u8 i;

    mgr->frameCount++;

    if (mgr->restoreErrorTimer > 0)
    {
        mgr->restoreErrorTimer--;
        if (mgr->restoreErrorTimer == 0)
            SetSuppressLinkErrorMessage(FALSE);
    }

    if (mgr->isConnected)
    {
        // --- FIX: Reliable Disconnect Detection using gLinkStatus ---
        if ((gLinkStatus & LINK_STAT_ERRORS) || GetLinkPlayerCount() < 2)
        {
            DestroyOverworldMultiplayer();
            mgr->restoreErrorTimer = 5;
            HideMultiplayerMapWindow();
            return;
        }

        ProcessIncomingOverworldPackets();
        
        // --- FIX: Respect Map Fading ---
        if (!gPaletteFade.active)
        {
            UpdateRemotePlayerSprites();
        }

        // Map Warp Check
        if (mgr->lastMapGroup != gSaveBlock1Ptr->location.mapGroup ||
            mgr->lastMapNum != gSaveBlock1Ptr->location.mapNum)
        {
            for (i = 0; i < MAX_OVERWORLD_MULTIPLAYER_PLAYERS; i++)
            {
                if (mgr->players[i].active && mgr->players[i].localId != 0xFF)
                {
                    mgr->players[i].localId = 0xFF; // Force respawn
                }
            }
            mgr->lastMapGroup = gSaveBlock1Ptr->location.mapGroup;
            mgr->lastMapNum = gSaveBlock1Ptr->location.mapNum;
        }

        // Broadcast player location
        if ((mgr->frameCount % OWL_SEND_INTERVAL) == 0)
        {
            SendOverworldPlayerState();
        }
    }
}

// ====== PACKET HANDLING (Unified Link API) ======

void SendOverworldPlayerState(void)
{
    struct OverworldMultiplayerPacket packet;
    
    memset(&packet, 0, sizeof(struct OverworldMultiplayerPacket));

    packet.playerId = GetMultiplayerId();
    packet.mapGroup = gSaveBlock1Ptr->location.mapGroup;
    packet.mapNum = gSaveBlock1Ptr->location.mapNum;
    packet.direction = GetPlayerFacingDirection();
    packet.x = gSaveBlock1Ptr->pos.x;
    packet.y = gSaveBlock1Ptr->pos.y;

    packet.playerState = gPlayerAvatar.flags;
    
    // FRLG Link API: Block 0 is commonly used for rapid custom state exchange
    SendBlock(0, &packet, sizeof(struct OverworldMultiplayerPacket));
}

void ProcessIncomingOverworldPackets(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    u8 status = GetBlockReceivedStatus();
    u8 i;

    if (status != 0) 
    {
        for (i = 0; i < GetLinkPlayerCount(); i++)
        {
            if ((status & (1 << i)) && i != GetMultiplayerId())
            {
                struct OverworldMultiplayerPacket *pkt = (struct OverworldMultiplayerPacket *)gBlockRecvBuffer[i];
                struct RemoteOverworldPlayer *remote = &mgr->players[i];

                remote->active = TRUE;
                remote->mapGroup = pkt->mapGroup;
                remote->mapNum   = pkt->mapNum;
                remote->x        = pkt->x;
                remote->y        = pkt->y;
                remote->direction = pkt->direction;
                remote->playerState = pkt->playerState;
                remote->lastUpdateFrame = mgr->frameCount;
                
                // Refresh link player data
                remote->linkPlayer = gLinkPlayers[i];

                ResetBlockReceivedFlag(i);
            }
        }
    }
}

// ====== REMOTE PLAYER SPRITES ======
static void SetupRemotePlayerObjectEvent(struct RemoteOverworldPlayer* remotePlayer)
{
    u8 objEventId;
    u8 localId = 240 + remotePlayer->linkPlayerId;
    
    // Use the engine's standard lookup for genders
    u8 gfx = GetPlayerAvatarGraphicsIdByStateIdAndGender(PLAYER_AVATAR_GFX_NORMAL, remotePlayer->linkPlayer.gender);

    // Spawn at current coords
    objEventId = SpawnSpecialObjectEventParameterized(
        gfx, 
        MOVEMENT_TYPE_FACE_DOWN, 
        localId, 
        remotePlayer->x + 7, 
        remotePlayer->y + 7, 
        3 
    );

    if (objEventId != OBJECT_EVENTS_COUNT)
    {
        remotePlayer->objEventId = objEventId;
        remotePlayer->localId = localId;
        gObjectEvents[objEventId].fixedPriority = TRUE;
    }
}

static void UpdateRemotePlayerSprites(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    struct RemoteOverworldPlayer *remotePlayer;
    struct ObjectEvent *objEvent;
    u8 i;

    for (i = 0; i < MAX_OVERWORLD_MULTIPLAYER_PLAYERS; i++)
    {
        remotePlayer = &mgr->players[i];
        if (!remotePlayer->active || i == GetMultiplayerId()) continue;

        if (remotePlayer->mapGroup != 0xFF)
        {
            if (remotePlayer->mapGroup != gSaveBlock1Ptr->location.mapGroup ||
                remotePlayer->mapNum != gSaveBlock1Ptr->location.mapNum)
            {
                if (remotePlayer->localId != 0xFF)
                {
                    RemoveObjectEventByLocalIdAndMap(remotePlayer->localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
                    remotePlayer->localId = 0xFF;
                }
                continue;
            }
        }

        if (remotePlayer->localId == 0xFF)
        {
            SetupRemotePlayerObjectEvent(remotePlayer);
            if (remotePlayer->localId == 0xFF)
                continue;
        }

        objEvent = &gObjectEvents[remotePlayer->objEventId];
        objEvent->invisible = FALSE;
        objEvent->offScreen = FALSE;

        objEvent->currentCoords.x = remotePlayer->x + 7;
        objEvent->currentCoords.y = remotePlayer->y + 7;
        objEvent->previousCoords.x = remotePlayer->x + 7;
        objEvent->previousCoords.y = remotePlayer->y + 7;
        
        // Update direction
        objEvent->facingDirection = remotePlayer->direction;
        
        // --- FIX: Synchronize Running/Biking Animation Speed ---
        if ((remotePlayer->playerState & PLAYER_AVATAR_FLAG_MACH_BIKE) || (remotePlayer->playerState & PLAYER_AVATAR_FLAG_ACRO_BIKE))
            StartSpriteAnim(&gSprites[objEvent->spriteId], 0);
        else if (remotePlayer->playerState & PLAYER_AVATAR_FLAG_DASH)
            StartSpriteAnim(&gSprites[objEvent->spriteId], 1);
        else
            StartSpriteAnim(&gSprites[objEvent->spriteId], 2);

        // --- Interaction Logic (Unchanged) ---
        if (JOY_NEW(A_BUTTON) && !ScriptContext_IsEnabled())
        {
            s16 tx = gSaveBlock1Ptr->pos.x;
            s16 ty = gSaveBlock1Ptr->pos.y;
            switch (GetPlayerFacingDirection())
            {
                case DIR_NORTH: ty--; break;
                case DIR_SOUTH: ty++; break;
                case DIR_WEST:  tx--; break;
                case DIR_EAST:  tx++; break;
            }
            if (remotePlayer->x == tx && remotePlayer->y == ty)
            {
                StringCopy(gStringVar1, remotePlayer->linkPlayer.name);
                ScriptContext_SetupScript(EventScript_RemotePlayerInteraction);
                break;
            }
        }
    }
}

// ====== SCRIPT SPECIAL STUBS ======
void Script_StartOverworldMultiplayerListener(void) 
{ 
    if (gSpecialVar_Result == LINKUP_SUCCESS)
    {
        InitOverworldMultiplayer();
        ActivateRemotePlayerSlotsForCurrentLink();
        gOverworldMultiplayerManager.isConnected = TRUE;
        SetSuppressLinkErrorMessage(TRUE); // Suppress annoying error popups
    }
}

void Script_StopOverworldMultiplayerListener(void) 
{ 
    DestroyOverworldMultiplayer();
    SetSuppressLinkErrorMessage(FALSE);
}

void Script_TryConnectOverworldMultiplayer(void) 
{ 
    TryOverworldMultiplayerLinkup();
}

void Script_GetOverworldMultiplayerConnectedPlayerCount(void) 
{ 
    gSpecialVar_Result = gOverworldMultiplayerManager.playerCount;
}

void Script_IsOverworldMultiplayerConnected(void) 
{ 
    gSpecialVar_Result = gOverworldMultiplayerManager.isConnected;
}

// ====== MULTIPLAYER MAP OVERLAY ======

static u8 sMultiplayerMapWindowId; 
static bool8 sMultiplayerMapWindowActive;

void ShowMultiplayerMapWindow(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    u8 i;
    u8 yPos = 0;

    if (!mgr->isConnected)
        return;

    if (!sMultiplayerMapWindowActive)
    {
        struct WindowTemplate template = {
            .bg = 0,
            .tilemapLeft = 1,
            .tilemapTop = 1,
            .width = 10,
            .height = 8,
            .paletteNum = WIN_PAL_NUM,
            .baseBlock = 0x001,
        };
        
        sMultiplayerMapWindowId = AddWindow(&template);
        sMultiplayerMapWindowActive = TRUE;
        
        LoadStdWindowTiles(sMultiplayerMapWindowId, 0x214);
        DrawTextBorderOuter(sMultiplayerMapWindowId, 0x214, WIN_PAL_NUM);
    }

    // always redraw contents (handles players joining/leaving)
    FillWindowPixelBuffer(sMultiplayerMapWindowId, PIXEL_FILL(0));
    
    for (i = 0; i < MAX_OVERWORLD_MULTIPLAYER_PLAYERS; i++)
    {
        if (mgr->players[i].active)
        {
            StringCopy(gStringVar1, mgr->players[i].linkPlayer.name);
            AddTextPrinterParameterized(sMultiplayerMapWindowId, 1, gStringVar1, 4, yPos, 0, NULL);
            yPos += 14; 
        }
    }

    if (!sMultiplayerMapWindowActive)
    {
        PutWindowTilemap(sMultiplayerMapWindowId);
    }
    CopyWindowToVram(sMultiplayerMapWindowId, 3);
}

void HideMultiplayerMapWindow(void)
{
    if (sMultiplayerMapWindowActive)
    {
        ClearWindowTilemap(sMultiplayerMapWindowId);
        RemoveWindow(sMultiplayerMapWindowId);
        sMultiplayerMapWindowActive = FALSE;
    }
}
