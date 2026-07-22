#pragma once

class CDOTAInGamePredictionState : public C_BaseEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bVotingClosed; // offset 0x76C, size 0x1, align 1
    bool m_bAllPredictionsFinished; // offset 0x76D, size 0x1, align 1
    char _pad_076E[0x2]; // offset 0x76E
    C_UtlVectorEmbeddedNetworkVar< InGamePredictionData_t > m_vecPredictions; // offset 0x770, size 0x68, align 8
    LeagueID_t m_nLeagueID; // offset 0x7D8, size 0x4, align 255
    char _pad_07DC[0x4]; // offset 0x7DC
    CUtlVector< InGamePredictionData_t > m_vecPrevPredictions; // offset 0x7E0, size 0x18, align 8
};
