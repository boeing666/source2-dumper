#pragma once

class CCitadelTeam : public CTeam /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x564]; // offset 0x0
    float32 m_flBaseObjectiveHealth; // offset 0x564, size 0x4, align 4 | MNetworkEnable
    int32 m_vecBaseLocationX; // offset 0x568, size 0x4, align 4 | MNetworkEnable
    int32 m_vecBaseLocationY; // offset 0x56C, size 0x4, align 4 | MNetworkEnable
    bool m_bHasValidBaseLocation; // offset 0x570, size 0x1, align 1 | MNetworkEnable
    char _pad_0571[0x1F]; // offset 0x571
    int32 m_nBossesAlive; // offset 0x590, size 0x4, align 4 | MNetworkEnable
    int32 m_nBossesMax; // offset 0x594, size 0x4, align 4 | MNetworkEnable
    EFlexSlotTypes_t m_nFlexSlotsUnlocked; // offset 0x598, size 0x2, align 2 | MNetworkEnable
    char _pad_059A[0x2]; // offset 0x59A
    int32 m_nBaseGuardianLanesCleared; // offset 0x59C, size 0x4, align 4 | MNetworkEnable
    CUtlVectorEmbeddedNetworkVar< STeamFOWEntity > m_vecFOWEntities; // offset 0x5A0, size 0x68, align 8 | MNetworkEnable MNetworkSendProxyRecipientsFilter MNetworkPriority
    int32 m_nStreetBrawlScore; // offset 0x608, size 0x4, align 4 | MNetworkEnable
    int32 m_nStreetBrawlScoreLastRound; // offset 0x60C, size 0x4, align 4 | MNetworkEnable
};
