#pragma once

class C_MapVetoPickController : public C_BaseEntity /*0x0*/  // sizeof 0xF48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x610]; // offset 0x0
    int32 m_nDraftType; // offset 0x610, size 0x4, align 4
    int32 m_nTeamWinningCoinToss; // offset 0x614, size 0x4, align 4
    int32[64] m_nTeamWithFirstChoice; // offset 0x618, size 0x100, align 4
    int32[7] m_nVoteMapIdsList; // offset 0x718, size 0x1C, align 4
    int32[64] m_nAccountIDs; // offset 0x734, size 0x100, align 4
    int32[64] m_nMapId0; // offset 0x834, size 0x100, align 4
    int32[64] m_nMapId1; // offset 0x934, size 0x100, align 4
    int32[64] m_nMapId2; // offset 0xA34, size 0x100, align 4
    int32[64] m_nMapId3; // offset 0xB34, size 0x100, align 4
    int32[64] m_nMapId4; // offset 0xC34, size 0x100, align 4
    int32[64] m_nMapId5; // offset 0xD34, size 0x100, align 4
    int32[64] m_nStartingSide0; // offset 0xE34, size 0x100, align 4
    int32 m_nCurrentPhase; // offset 0xF34, size 0x4, align 4
    int32 m_nPhaseStartTick; // offset 0xF38, size 0x4, align 4
    int32 m_nPhaseDurationTicks; // offset 0xF3C, size 0x4, align 4
    int32 m_nPostDataUpdateTick; // offset 0xF40, size 0x4, align 4
    bool m_bDisabledHud; // offset 0xF44, size 0x1, align 1
    char _pad_0F45[0x3]; // offset 0xF45
};
