#pragma once

class CMapVetoPickController : public CBaseEntity /*0x0*/  // sizeof 0xEA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bPlayedIntroVcd; // offset 0x4A8, size 0x1, align 1
    bool m_bNeedToPlayFiveSecondsRemaining; // offset 0x4A9, size 0x1, align 1
    char _pad_04AA[0x1E]; // offset 0x4AA
    float64 m_dblPreMatchDraftSequenceTime; // offset 0x4C8, size 0x8, align 8
    bool m_bPreMatchDraftStateChanged; // offset 0x4D0, size 0x1, align 1
    char _pad_04D1[0x3]; // offset 0x4D1
    int32 m_nDraftType; // offset 0x4D4, size 0x4, align 4
    int32 m_nTeamWinningCoinToss; // offset 0x4D8, size 0x4, align 4
    int32[64] m_nTeamWithFirstChoice; // offset 0x4DC, size 0x100, align 4
    int32[7] m_nVoteMapIdsList; // offset 0x5DC, size 0x1C, align 4
    int32[64] m_nAccountIDs; // offset 0x5F8, size 0x100, align 4
    int32[64] m_nMapId0; // offset 0x6F8, size 0x100, align 4
    int32[64] m_nMapId1; // offset 0x7F8, size 0x100, align 4
    int32[64] m_nMapId2; // offset 0x8F8, size 0x100, align 4
    int32[64] m_nMapId3; // offset 0x9F8, size 0x100, align 4
    int32[64] m_nMapId4; // offset 0xAF8, size 0x100, align 4
    int32[64] m_nMapId5; // offset 0xBF8, size 0x100, align 4
    int32[64] m_nStartingSide0; // offset 0xCF8, size 0x100, align 4
    int32 m_nCurrentPhase; // offset 0xDF8, size 0x4, align 4
    int32 m_nPhaseStartTick; // offset 0xDFC, size 0x4, align 4
    int32 m_nPhaseDurationTicks; // offset 0xE00, size 0x4, align 4
    char _pad_0E04[0x4]; // offset 0xE04
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // offset 0xE08, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // offset 0xE28, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnSidesPicked; // offset 0xE48, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // offset 0xE68, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnLevelTransition; // offset 0xE88, size 0x20, align 8
};
