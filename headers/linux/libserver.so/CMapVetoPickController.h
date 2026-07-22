#pragma once

class CMapVetoPickController : public CBaseEntity /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bPlayedIntroVcd; // offset 0x788, size 0x1, align 1
    bool m_bNeedToPlayFiveSecondsRemaining; // offset 0x789, size 0x1, align 1
    char _pad_078A[0x1E]; // offset 0x78A
    float64 m_dblPreMatchDraftSequenceTime; // offset 0x7A8, size 0x8, align 8
    bool m_bPreMatchDraftStateChanged; // offset 0x7B0, size 0x1, align 1
    char _pad_07B1[0x3]; // offset 0x7B1
    int32 m_nDraftType; // offset 0x7B4, size 0x4, align 4
    int32 m_nTeamWinningCoinToss; // offset 0x7B8, size 0x4, align 4
    int32[64] m_nTeamWithFirstChoice; // offset 0x7BC, size 0x100, align 4
    int32[7] m_nVoteMapIdsList; // offset 0x8BC, size 0x1C, align 4
    int32[64] m_nAccountIDs; // offset 0x8D8, size 0x100, align 4
    int32[64] m_nMapId0; // offset 0x9D8, size 0x100, align 4
    int32[64] m_nMapId1; // offset 0xAD8, size 0x100, align 4
    int32[64] m_nMapId2; // offset 0xBD8, size 0x100, align 4
    int32[64] m_nMapId3; // offset 0xCD8, size 0x100, align 4
    int32[64] m_nMapId4; // offset 0xDD8, size 0x100, align 4
    int32[64] m_nMapId5; // offset 0xED8, size 0x100, align 4
    int32[64] m_nStartingSide0; // offset 0xFD8, size 0x100, align 4
    int32 m_nCurrentPhase; // offset 0x10D8, size 0x4, align 4
    int32 m_nPhaseStartTick; // offset 0x10DC, size 0x4, align 4
    int32 m_nPhaseDurationTicks; // offset 0x10E0, size 0x4, align 4
    char _pad_10E4[0x4]; // offset 0x10E4
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapVetoed; // offset 0x10E8, size 0x20, align 8
    CEntityOutputTemplate< CUtlSymbolLarge > m_OnMapPicked; // offset 0x1108, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnSidesPicked; // offset 0x1128, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnNewPhaseStarted; // offset 0x1148, size 0x20, align 8
    CEntityOutputTemplate< int32 > m_OnLevelTransition; // offset 0x1168, size 0x20, align 8
};
