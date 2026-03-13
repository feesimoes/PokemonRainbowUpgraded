#include "global.h"
#include "script.h"
#include "field_effect_scripts.h"
#include "overworld_multiplayer.h"
#include "constants/overworld_multiplayer_receptionist.h"
#include "link.h"
#include "overworld.h"
#include "field_player_avatar.h"
#include "event_data.h"

extern void TryOverworldMultiplayerLinkup(void);

// A simple no-op field callback used when locking multiplayer receptionist
static void FieldCB_Nop(void)
{
    // intentionally empty
}

void OverworldMultiplayerReceptionist_Lock(void)
{
    gFieldCallback = FieldCB_Nop;
}

void OverworldMultiplayerReceptionist_AskConnect(void)
{
    // Handled in script
}

void OverworldMultiplayerReceptionist_TryConnect(void)
{
    TryOverworldMultiplayerLinkup();
}

void OverworldMultiplayerReceptionist_ShowConnectMsg(void)
{
    // Handled in script
}

void OverworldMultiplayerReceptionist_PlayerEntering(void)
{
    // Spawning is now handled dynamically by UpdateRemotePlayerSprites in the main manager.
    gSpecialVar_Result = 0xFF;
}

void OverworldMultiplayerReceptionist_WaitForEntrance(void)
{
    struct OverworldMultiplayerManager *mgr = &gOverworldMultiplayerManager;
    
    // Automatically flag as active since dynamic spawning requires no wait time
    mgr->state = OWL_STATE_ACTIVE;
    gSpecialVar_Result = 1;
}