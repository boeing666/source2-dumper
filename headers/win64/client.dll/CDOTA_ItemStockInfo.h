#pragma once

class CDOTA_ItemStockInfo  // sizeof 0x58, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int32 iTeamNumber; // offset 0x30, size 0x4, align 4
    AbilityID_t nItemAbilityID; // offset 0x34, size 0x4, align 255
    float32 fStockDuration; // offset 0x38, size 0x4, align 4
    GameTime_t fStockTime; // offset 0x3C, size 0x4, align 255
    int32 iStockCount; // offset 0x40, size 0x4, align 4
    int32 iMaxCount; // offset 0x44, size 0x4, align 4
    float32 fInitialStockDuration; // offset 0x48, size 0x4, align 4
    PlayerID_t iPlayerID; // offset 0x4C, size 0x4, align 255
    int32 iBonusDelayedStockCount; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
