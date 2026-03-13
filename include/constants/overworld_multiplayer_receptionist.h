#ifndef GUARD_OVERWORLD_MULTIPLAYER_RECEPTIONIST_H
#define GUARD_OVERWORLD_MULTIPLAYER_RECEPTIONIST_H

// Special command IDs for overworld multiplayer receptionist
#define SPECIAL_OVERWORLD_MULTIPLAYER_START_LISTENER   0xFC
#define SPECIAL_OVERWORLD_MULTIPLAYER_STOP_LISTENER    0xFD
#define SPECIAL_OVERWORLD_MULTIPLAYER_TRY_CONNECT      0xFE
#define SPECIAL_OVERWORLD_MULTIPLAYER_GET_PLAYER_COUNT 0xFF

void OverworldMultiplayerReceptionist_Lock(void);
void OverworldMultiplayerReceptionist_AskConnect(void);
void OverworldMultiplayerReceptionist_TryConnect(void);
void OverworldMultiplayerReceptionist_ShowConnectMsg(void);
void OverworldMultiplayerReceptionist_PlayerEntering(void);
void OverworldMultiplayerReceptionist_WaitForEntrance(void);

#endif // GUARD_OVERWORLD_MULTIPLAYER_RECEPTIONIST_H
