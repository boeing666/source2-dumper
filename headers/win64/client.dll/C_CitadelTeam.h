#pragma once

class C_CitadelTeam : public C_Team /*0x0*/  // sizeof 0x738, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 m_flBaseObjectiveHealth; // offset 0x6A8, size 0x4, align 4 | MNetworkEnable
    int32 m_vecBaseLocationX; // offset 0x6AC, size 0x4, align 4 | MNetworkEnable
    int32 m_vecBaseLocationY; // offset 0x6B0, size 0x4, align 4 | MNetworkEnable
    bool m_bHasValidBaseLocation; // offset 0x6B4, size 0x1, align 1 | MNetworkEnable
    char _pad_06B5[0x3]; // offset 0x6B5
    int32 m_nBossesAlive; // offset 0x6B8, size 0x4, align 4 | MNetworkEnable
    int32 m_nBossesMax; // offset 0x6BC, size 0x4, align 4 | MNetworkEnable
    EFlexSlotTypes_t m_nFlexSlotsUnlocked; // offset 0x6C0, size 0x2, align 2 | MNetworkEnable
    char _pad_06C2[0x2]; // offset 0x6C2
    int32 m_nBaseGuardianLanesCleared; // offset 0x6C4, size 0x4, align 4 | MNetworkEnable
    C_UtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // offset 0x6C8, size 0x68, align 8 | MNetworkEnable
    int32 m_nStreetBrawlScore; // offset 0x730, size 0x4, align 4 | MNetworkEnable
    int32 m_nStreetBrawlScoreLastRound; // offset 0x734, size 0x4, align 4 | MNetworkEnable
};
