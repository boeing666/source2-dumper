#pragma once

class CDOTA_PlayerChallengeInfo  // sizeof 0x70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int32 nType; // offset 0x30, size 0x4, align 4
    int32 nQuestID; // offset 0x34, size 0x4, align 4
    int32 nQuestChallengeID; // offset 0x38, size 0x4, align 4
    int32 nTier; // offset 0x3C, size 0x4, align 4
    int32 nParam0; // offset 0x40, size 0x4, align 4
    int32 nParam1; // offset 0x44, size 0x4, align 4
    int32 nSlotID; // offset 0x48, size 0x4, align 4
    int32 nProgress; // offset 0x4C, size 0x4, align 4
    int32 nCompletionThreshold; // offset 0x50, size 0x4, align 4
    PlayerID_t nPlayerID; // offset 0x54, size 0x4, align 255
    int32 nQueryIndex; // offset 0x58, size 0x4, align 4
    int32 nEventID; // offset 0x5C, size 0x4, align 4
    int32 nSequenceID; // offset 0x60, size 0x4, align 4
    int32 nCompleted; // offset 0x64, size 0x4, align 4
    int32 nRank; // offset 0x68, size 0x4, align 4
    char _pad_006C[0x4]; // offset 0x6C
};
