#pragma once

class CDOTA_NeutralSpawner : public CPointEntity /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bGameStarted; // offset 0x778, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x779, size 0x1, align 1
    char _pad_077A[0x6]; // offset 0x77A
    CountdownTimer m_SpawnTimer; // offset 0x780, size 0x18, align 8
    int32 m_iNextSpawnType; // offset 0x798, size 0x4, align 4
    int32 m_iMinSpawnType; // offset 0x79C, size 0x4, align 4
    int32 m_iMaxSpawnType; // offset 0x7A0, size 0x4, align 4
    int32 m_iSpawnSubtype; // offset 0x7A4, size 0x4, align 4
    int32 m_iPreviousSpawnType; // offset 0x7A8, size 0x4, align 4
    int32 m_iTotalToSpawn; // offset 0x7AC, size 0x4, align 4
    int32 m_iForcedSpawnType; // offset 0x7B0, size 0x4, align 4
    int32 m_iNumBatchesToSpawn; // offset 0x7B4, size 0x4, align 4
    int32 m_iMaxUpgradeCount; // offset 0x7B8, size 0x4, align 4
    int32 m_iCurrentUpgradeCount; // offset 0x7BC, size 0x4, align 4
    int32 m_iBaseType; // offset 0x7C0, size 0x4, align 4
    bool m_bLimitedBatches; // offset 0x7C4, size 0x1, align 1
    char _pad_07C5[0x3]; // offset 0x7C5
    PlayerID_t m_iStackingCreditPlayerID; // offset 0x7C8, size 0x4, align 255
    float32 m_fInternalSpawnTimerTime; // offset 0x7CC, size 0x4, align 4
    CountdownTimer m_InternalSpawnTimer; // offset 0x7D0, size 0x18, align 8
    CountdownTimer m_FXTimer; // offset 0x7E8, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_PendingUnits; // offset 0x800, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_Units; // offset 0x818, size 0x18, align 8
    int32 m_iNextTypeUnitCount; // offset 0x830, size 0x4, align 4
    bool[2] m_bSeenClearedByTeam; // offset 0x834, size 0x2, align 1
    char _pad_0836[0x2]; // offset 0x836
    CUtlSymbolLarge m_szVolumeName; // offset 0x838, size 0x8, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hVolumes; // offset 0x840, size 0x18, align 8
    CEntityIOOutput m_OnSpawnerExhausted; // offset 0x858, size 0x18, align 255
    int32 m_Type; // offset 0x870, size 0x4, align 4
    int32 m_PullType; // offset 0x874, size 0x4, align 4
    int32 m_AggroType; // offset 0x878, size 0x4, align 4
    char _pad_087C[0x4]; // offset 0x87C
};
