#pragma once

class CDOTAInGamePredictionState : public C_BaseEntity /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bVotingClosed; // offset 0x5F0, size 0x1, align 1
    bool m_bAllPredictionsFinished; // offset 0x5F1, size 0x1, align 1
    char _pad_05F2[0x6]; // offset 0x5F2
    C_UtlVectorEmbeddedNetworkVar< InGamePredictionData_t > m_vecPredictions; // offset 0x5F8, size 0x68, align 8
    LeagueID_t m_nLeagueID; // offset 0x660, size 0x4, align 255
    char _pad_0664[0x4]; // offset 0x664
    CUtlVector< InGamePredictionData_t > m_vecPrevPredictions; // offset 0x668, size 0x18, align 8
};
