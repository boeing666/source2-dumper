#pragma once

class CCitadelTeam : public CTeam /*0x0*/  // sizeof 0x620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x574]; // offset 0x0
    float32 m_flBaseObjectiveHealth; // offset 0x574, size 0x4, align 4
    int32 m_vecBaseLocationX; // offset 0x578, size 0x4, align 4
    int32 m_vecBaseLocationY; // offset 0x57C, size 0x4, align 4
    bool m_bHasValidBaseLocation; // offset 0x580, size 0x1, align 1
    char _pad_0581[0x1F]; // offset 0x581
    int32 m_nBossesAlive; // offset 0x5A0, size 0x4, align 4
    int32 m_nBossesMax; // offset 0x5A4, size 0x4, align 4
    EFlexSlotTypes_t m_nFlexSlotsUnlocked; // offset 0x5A8, size 0x2, align 2
    char _pad_05AA[0x2]; // offset 0x5AA
    int32 m_nBaseGuardianLanesCleared; // offset 0x5AC, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // offset 0x5B0, size 0x68, align 8
    int32 m_nStreetBrawlScore; // offset 0x618, size 0x4, align 4
    int32 m_nStreetBrawlScoreLastRound; // offset 0x61C, size 0x4, align 4
};
