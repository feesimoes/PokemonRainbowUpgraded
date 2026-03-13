#ifndef GUARD_OVERWORLD_MULTIPLAYER_H
#define GUARD_OVERWORLD_MULTIPLAYER_H

#include "global.h"
#include "link.h"

#define MAX_OVERWORLD_MULTIPLAYER_PLAYERS 4
#define OVERWORLD_MULTIPLAYER_PACKET_SIZE sizeof(struct OverworldMultiplayerPacket)

// Connection states
enum {
    OWL_STATE_IDLE,
    OWL_STATE_LISTENING,
    OWL_STATE_CONNECTING,
    OWL_STATE_CONNECTED,
    OWL_STATE_PLAYER_ENTERING,
    OWL_STATE_PLAYER_WALKING,
    OWL_STATE_ACTIVE,
    OWL_STATE_DISCONNECTING,
};

// Remote player entrance states
enum {
    OWL_ENTER_NONE,
    OWL_ENTER_EXITING_DOOR,
    OWL_ENTER_WALKING_OVER,
    OWL_ENTER_COMPLETE,
};

// Packet structure (aligned)
struct OverworldMultiplayerPacket {
    u8 playerId;
    u8 mapGroup;
    u8 mapNum;
    u8 direction;
    s16 x;
    s16 y;
    u8 playerState;
};

// Remote player tracking
struct RemoteOverworldPlayer {
    u8 active;
    u8 linkPlayerId;
    u8 mapGroup;
    u8 mapNum;
    u16 x;
    u16 y;
    u8 direction;
    u8 localId;      // For FRLG Event Object System
    u8 objEventId;   // Internal array index
    u8 entranceState;
    u16 entranceCounter;
    u16 targetX;
    u16 targetY;
    u16 lastUpdateFrame;  // frame counter when last packet was received
    struct LinkPlayer linkPlayer;
    u8 playerState;
};

// Main overworld multiplayer manager
struct OverworldMultiplayerManager {
    u8 state;
    u8 playerCount;
    u16 updateCounter;
    bool8 isConnected;
    bool8 isListening;
    u8 listenTaskId;
    struct RemoteOverworldPlayer players[MAX_OVERWORLD_MULTIPLAYER_PLAYERS];
    struct OverworldMultiplayerPacket lastSentPacket;
    u16 frameCount;
    u16 restoreErrorTimer; // countdown until link error messages return
    u8 lastInteractionPlayer;    // which player triggered the last interaction
    u16 lastInteractionFrame;    // frame when interaction occurred
    u8 lastMapGroup;            // track local map to detect warps
    u8 lastMapNum;              // track local map to detect warps
};

extern struct OverworldMultiplayerManager gOverworldMultiplayerManager;

void InitOverworldMultiplayer(void);
void DestroyOverworldMultiplayer(void);
void TryOverworldMultiplayerLinkup(void);

#endif // GUARD_OVERWORLD_MULTIPLAYER_H