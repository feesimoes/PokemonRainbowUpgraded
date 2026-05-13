#include "global.h"
#include "save.h"
#include "string_util.h"
#include "event_data.h"
#include "pokemon_storage_system.h"
#include "link.h"
#include "main.h"
#include "gts.h"
#include "constants/gts.h"
#include "constants/vars.h"

#define LINK_TIMEOUT 300 // Number of frames to wait before giving up (10 seconds)

// --- UART CONSTANTS ---
#define SIO_UART_MODE   0x3000  // UART Mode
#define SIO_UART_BAUD   0x0001  // 9600 bps (Standard for simple comms)
#define SIO_UART_RECV   0x0008  // Receive Enable
#define SIO_UART_SEND   0x0004  // Send Enable
#define SIO_UART_ERROR  0x0040  // Error Flag
#define SIO_START       0x0080  // Start/Busy flag

u8 gGTSCodeText[10];

// Custom Implementation of a locally hosted GTS through Discord Bot with Webhooks

void GTS_Init_UART(void)
{
    REG_RCNT = 0; 
    REG_SIOCNT = SIO_UART_MODE | SIO_UART_BAUD | SIO_UART_RECV | SIO_UART_SEND;
}

u8 GTS_WaitForResponse(void)
{
    u16 timeout;
    u8 val;
    
    for(timeout = 0; timeout < 180; timeout++)
    {
        val = REG_SIODATA8;
        
        if (val == 200 || val == 101 || val == 102 || val == 103)
        {
            return val;
        }

        VBlankIntrWait(); 
    }
    
    return 0;
}

void GTS_SendByte(u8 data)
{
    while (REG_SIOCNT & SIO_START) {} 

    REG_SIODATA8 = data;
}

u8 GTS_ReadByte(void)
{
    u32 timeout = 0;
    
    while (REG_SIOCNT & SIO_START)
    {
        timeout++;
        if (timeout > 500000) return 0xFF;
    }

    return REG_SIODATA8;
}

void GTS_SendBuffer(const u8 *data, u16 size)
{
    u16 i;
    for(i = 0; i < size; i++)
    {
        GTS_SendByte(data[i]);
        { u32 x; for(x=0; x<500; x++) asm("nop"); }
    }
}

void GTS_RecvBuffer(u8 *dest, u16 size)
{
    u16 i;
    for(i = 0; i < size; i++)
    {
        dest[i] = GTS_ReadByte();
    }
}

static u32 GetPlayerTrainerId(void)
{
    return gSaveBlock2Ptr->playerTrainerId[0] |
           (gSaveBlock2Ptr->playerTrainerId[1] << 8) |
           (gSaveBlock2Ptr->playerTrainerId[2] << 16) |
           (gSaveBlock2Ptr->playerTrainerId[3] << 24);
}

u8 GTS_DepositPokemon(u8 partySlot, u16 requestSpecies) 
{
    struct GTSCommPacket header;
    struct Pokemon *p;
    u32 receivedCode;
    u8 serverResponse;
    u8 *codePtr;
    u8 i;

    GTS_Init_UART();

    p = &gPlayerParty[partySlot];

    header.opCode = OP_DEPOSIT;
    header.trainerId = GetPlayerTrainerId();
    header.requestedSpecies = requestSpecies;
    header.listingCodeToFulfill = 0;

    GTS_SendBuffer((u8*)&header, sizeof(header));
    
    GTS_SendBuffer((u8*)p, sizeof(struct Pokemon));

    serverResponse = GTS_WaitForResponse();

    if (serverResponse == 200) 
    {
        codePtr = (u8*)&receivedCode;
        for(i=0; i<4; i++) codePtr[i] = GTS_ReadByte();

        ZeroMonData(p);
        CompactPartySlots();
        CalculatePlayerPartyCount();
        TrySavingData(SAVE_NORMAL);
        
        ConvertIntToDecimalStringN(gGTSCodeText, receivedCode, STR_CONV_MODE_LEADING_ZEROS, 4);
        StringCopy(gStringVar1, gGTSCodeText);
        return 1;
    }
    return 0;
}

u8 GTS_FulfillTrade(u32 codeToFulfill, u8 partySlot) 
{
    struct GTSCommPacket header;
    struct Pokemon *myMon;
    u8 response;

    myMon = &gPlayerParty[partySlot];

    header.opCode = OP_FULFILL;
    header.listingCodeToFulfill = codeToFulfill;
    header.trainerId = GetPlayerTrainerId();

    GTS_SendBuffer((u8*)&header, sizeof(header));
    GTS_SendBuffer((u8*)myMon, sizeof(struct Pokemon));

    response = GTS_WaitForResponse();
    if (response == RESPONSE_OK_WITH_CODE) 
    {
        GTS_RecvBuffer((u8*)myMon, sizeof(struct Pokemon));
        return 1;
    }
    return 0;
}

u8 GTS_CheckStatusAndCollect(void) 
{
    struct GTSCommPacket header;
    struct Pokemon receivedMon;
    u8 response;

    header.opCode = OP_CHECK;
    header.trainerId = GetPlayerTrainerId();
    header.requestedSpecies = 0;
    header.listingCodeToFulfill = 0;

    GTS_SendBuffer((u8*)&header, sizeof(header));
    
    response = GTS_WaitForResponse();

    if (response == RESPONSE_TRADE_DONE) 
    {
        GTS_RecvBuffer((u8*)&receivedMon, sizeof(struct Pokemon));

        // Add logic to put receivedMon into party here
        return 1;
    }
    return 0;
}

//Specials
void GTS_Deposit(void) 
{
    u16 slot = VarGet(0x8004);
    u16 species = VarGet(0x8005);
    
    gSpecialVar_Result = GTS_DepositPokemon(slot, species);
}

void GTS_Check(void) 
{
    gSpecialVar_Result = GTS_CheckStatusAndCollect();
}

void GTS_Fulfill(void) 
{
    u32 code = VarGet(0x8004);
    u16 slot = VarGet(0x8005);
    
    gSpecialVar_Result = GTS_FulfillTrade(code, slot);
}

void GTS_TrySavingData(void)
{
    TrySavingData(SAVE_NORMAL);
}