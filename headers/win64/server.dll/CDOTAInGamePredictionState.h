#pragma once

class CDOTAInGamePredictionState : public CBaseEntity /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bVotingClosed; // offset 0x498, size 0x1, align 1
    bool m_bAllPredictionsFinished; // offset 0x499, size 0x1, align 1
    char _pad_049A[0x6]; // offset 0x49A
    CUtlVectorEmbeddedNetworkVar< InGamePredictionData_t > m_vecPredictions; // offset 0x4A0, size 0x68, align 8
    LeagueID_t m_nLeagueID; // offset 0x508, size 0x4, align 255
    char _pad_050C[0x4]; // offset 0x50C
};
