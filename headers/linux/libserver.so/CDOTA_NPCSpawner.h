#pragma once

class CDOTA_NPCSpawner : public CPointEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_szNPCScriptName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_szNPCName; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_szNPCFirstWaypoint; // offset 0x788, size 0x8, align 8
    CountdownTimer m_SpawnTimer; // offset 0x790, size 0x18, align 8
    CountdownTimer m_IntervalTimer; // offset 0x7A8, size 0x18, align 8
    int32 m_iTeam; // offset 0x7C0, size 0x4, align 4
    int32 m_iUpgradeMelee; // offset 0x7C4, size 0x4, align 4
    int32 m_iUpgradeRange; // offset 0x7C8, size 0x4, align 4
    int32 m_iMeleeCount; // offset 0x7CC, size 0x4, align 4
    int32 m_iSiegeCount; // offset 0x7D0, size 0x4, align 4
    int32 m_iRangeCount; // offset 0x7D4, size 0x4, align 4
    int32 m_iWaves; // offset 0x7D8, size 0x4, align 4
    bool m_bFirstWave; // offset 0x7DC, size 0x1, align 1
    bool m_bShouldSpawnStrongCreep; // offset 0x7DD, size 0x1, align 1
    bool m_bEnabled; // offset 0x7DE, size 0x1, align 1
    char _pad_07DF[0x1]; // offset 0x7DF
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_Units; // offset 0x7E0, size 0x18, align 8
};
