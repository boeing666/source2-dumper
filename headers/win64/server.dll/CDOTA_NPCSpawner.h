#pragma once

class CDOTA_NPCSpawner : public CPointEntity /*0x0*/  // sizeof 0x518, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge m_szNPCScriptName; // offset 0x498, size 0x8, align 8
    CUtlSymbolLarge m_szNPCName; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_szNPCFirstWaypoint; // offset 0x4A8, size 0x8, align 8
    CountdownTimer m_SpawnTimer; // offset 0x4B0, size 0x18, align 8
    CountdownTimer m_IntervalTimer; // offset 0x4C8, size 0x18, align 8
    int32 m_iTeam; // offset 0x4E0, size 0x4, align 4
    int32 m_iUpgradeMelee; // offset 0x4E4, size 0x4, align 4
    int32 m_iUpgradeRange; // offset 0x4E8, size 0x4, align 4
    int32 m_iMeleeCount; // offset 0x4EC, size 0x4, align 4
    int32 m_iSiegeCount; // offset 0x4F0, size 0x4, align 4
    int32 m_iRangeCount; // offset 0x4F4, size 0x4, align 4
    int32 m_iWaves; // offset 0x4F8, size 0x4, align 4
    bool m_bFirstWave; // offset 0x4FC, size 0x1, align 1
    bool m_bShouldSpawnStrongCreep; // offset 0x4FD, size 0x1, align 1
    bool m_bEnabled; // offset 0x4FE, size 0x1, align 1
    char _pad_04FF[0x1]; // offset 0x4FF
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_Units; // offset 0x500, size 0x18, align 8
};
