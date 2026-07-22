#pragma once

class C_MapVetoPickController : public C_BaseEntity /*0x0*/  // sizeof 0x10C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x78C]; // offset 0x0
    int32 m_nDraftType; // offset 0x78C, size 0x4, align 4
    int32 m_nTeamWinningCoinToss; // offset 0x790, size 0x4, align 4
    int32[64] m_nTeamWithFirstChoice; // offset 0x794, size 0x100, align 4
    int32[7] m_nVoteMapIdsList; // offset 0x894, size 0x1C, align 4
    int32[64] m_nAccountIDs; // offset 0x8B0, size 0x100, align 4
    int32[64] m_nMapId0; // offset 0x9B0, size 0x100, align 4
    int32[64] m_nMapId1; // offset 0xAB0, size 0x100, align 4
    int32[64] m_nMapId2; // offset 0xBB0, size 0x100, align 4
    int32[64] m_nMapId3; // offset 0xCB0, size 0x100, align 4
    int32[64] m_nMapId4; // offset 0xDB0, size 0x100, align 4
    int32[64] m_nMapId5; // offset 0xEB0, size 0x100, align 4
    int32[64] m_nStartingSide0; // offset 0xFB0, size 0x100, align 4
    int32 m_nCurrentPhase; // offset 0x10B0, size 0x4, align 4
    int32 m_nPhaseStartTick; // offset 0x10B4, size 0x4, align 4
    int32 m_nPhaseDurationTicks; // offset 0x10B8, size 0x4, align 4
    int32 m_nPostDataUpdateTick; // offset 0x10BC, size 0x4, align 4
    bool m_bDisabledHud; // offset 0x10C0, size 0x1, align 1
    char _pad_10C1[0x7]; // offset 0x10C1
};
