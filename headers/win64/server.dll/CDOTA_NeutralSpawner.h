#pragma once

class CDOTA_NeutralSpawner : public CPointEntity /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bGameStarted; // offset 0x498, size 0x1, align 1
    bool m_bFirstSpawn; // offset 0x499, size 0x1, align 1
    char _pad_049A[0x6]; // offset 0x49A
    CountdownTimer m_SpawnTimer; // offset 0x4A0, size 0x18, align 8
    int32 m_iNextSpawnType; // offset 0x4B8, size 0x4, align 4
    int32 m_iMinSpawnType; // offset 0x4BC, size 0x4, align 4
    int32 m_iMaxSpawnType; // offset 0x4C0, size 0x4, align 4
    int32 m_iSpawnSubtype; // offset 0x4C4, size 0x4, align 4
    int32 m_iPreviousSpawnType; // offset 0x4C8, size 0x4, align 4
    int32 m_iTotalToSpawn; // offset 0x4CC, size 0x4, align 4
    int32 m_iForcedSpawnType; // offset 0x4D0, size 0x4, align 4
    int32 m_iNumBatchesToSpawn; // offset 0x4D4, size 0x4, align 4
    int32 m_iMaxUpgradeCount; // offset 0x4D8, size 0x4, align 4
    int32 m_iCurrentUpgradeCount; // offset 0x4DC, size 0x4, align 4
    int32 m_iBaseType; // offset 0x4E0, size 0x4, align 4
    bool m_bLimitedBatches; // offset 0x4E4, size 0x1, align 1
    char _pad_04E5[0x3]; // offset 0x4E5
    PlayerID_t m_iStackingCreditPlayerID; // offset 0x4E8, size 0x4, align 255
    float32 m_fInternalSpawnTimerTime; // offset 0x4EC, size 0x4, align 4
    CountdownTimer m_InternalSpawnTimer; // offset 0x4F0, size 0x18, align 8
    CountdownTimer m_FXTimer; // offset 0x508, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_PendingUnits; // offset 0x520, size 0x18, align 8
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_Units; // offset 0x538, size 0x18, align 8
    int32 m_iNextTypeUnitCount; // offset 0x550, size 0x4, align 4
    bool[2] m_bSeenClearedByTeam; // offset 0x554, size 0x2, align 1
    char _pad_0556[0x2]; // offset 0x556
    CUtlSymbolLarge m_szVolumeName; // offset 0x558, size 0x8, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hVolumes; // offset 0x560, size 0x18, align 8
    CEntityIOOutput m_OnSpawnerExhausted; // offset 0x578, size 0x18, align 255
    int32 m_Type; // offset 0x590, size 0x4, align 4
    int32 m_PullType; // offset 0x594, size 0x4, align 4
    int32 m_AggroType; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
};
