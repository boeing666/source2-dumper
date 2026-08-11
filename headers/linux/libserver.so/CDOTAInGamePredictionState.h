#pragma once

class CDOTAInGamePredictionState : public CBaseEntity /*0x0*/  // sizeof 0x7F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bVotingClosed; // offset 0x778, size 0x1, align 1
    bool m_bAllPredictionsFinished; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x6]; // offset 0x77A
    CUtlVectorEmbeddedNetworkVar< InGamePredictionData_t > m_vecPredictions; // offset 0x780, size 0x68, align 8
    LeagueID_t m_nLeagueID; // offset 0x7E8, size 0x4, align 255
    char _pad_07EC[0x4]; // offset 0x7EC
};
