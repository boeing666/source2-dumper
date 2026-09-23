#pragma once

struct CSAdditionalMatchStats_t : public CSAdditionalPerRoundStats_t /*0x0*/  // sizeof 0x140, align 0xFF (server)
{
    char _pad_0000[0x110]; // offset 0x0
    int32 m_numRoundsSurvivedStreak; // offset 0x110, size 0x4, align 4
    int32 m_maxNumRoundsSurvivedStreak; // offset 0x114, size 0x4, align 4
    int32 m_numRoundsSurvivedTotal; // offset 0x118, size 0x4, align 4
    int32 m_iRoundsWonWithoutPurchase; // offset 0x11C, size 0x4, align 4
    int32 m_iRoundsWonWithoutPurchaseTotal; // offset 0x120, size 0x4, align 4
    int32 m_numFirstKills; // offset 0x124, size 0x4, align 4
    int32 m_numClutchKills; // offset 0x128, size 0x4, align 4
    int32 m_numPistolKills; // offset 0x12C, size 0x4, align 4
    int32 m_numSniperKills; // offset 0x130, size 0x4, align 4
    int32 m_iNumSuicides; // offset 0x134, size 0x4, align 4
    int32 m_iNumTeamKills; // offset 0x138, size 0x4, align 4
    float32 m_flTeamDamage; // offset 0x13C, size 0x4, align 4
};
