#ifndef GUARD_GTS_H
#define GUARD_GTS_H

#include "global.h"
#include "constants/gts.h"

struct GTSCommPacket {
    u8 opCode;
    u32 trainerId;
    u16 requestedSpecies;
    u32 listingCodeToFulfill;
};

// GTS Data functions
void GTS_Init_UART(void);
void GTS_SendByte(u8 data);
u8 GTS_ReadByte(void);
void GTS_SendBuffer(const u8 *data, u16 size);
void GTS_RecvBuffer(u8 *dest, u16 size);
void GTS_Deposit(void);
void GTS_Check(void);
void GTS_Fulfill(void);
u8 GTS_WaitForResponse(void);

#endif // GUARD_GTS_H