#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CPathMoverEntitySpawner::TemplateChoiceStrategy_t m_eTemplateChoiceStrategy; // offset 0x498, size 0x4, align 4
    char _pad_049C[0x4]; // offset 0x49C
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x4A0, size 0x20, align 8
    int32[4] m_szSpawnTemplateParams; // offset 0x4C0, size 0x10, align 4
    int32[4] m_szSpawnTemplateCount; // offset 0x4D0, size 0x10, align 4
    int32 m_nSpawnIndex; // offset 0x4E0, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x4E4, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x4E8, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x4EC, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x4F0, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x510, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x514, size 0x4, align 4
    int32 m_nSpawnActive; // offset 0x518, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x51C, size 0x4, align 255
    bool m_bEnabled; // offset 0x520, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x521, size 0x1, align 1
    char _pad_0522[0x6]; // offset 0x522
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x528, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x540, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x558, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x570, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x578, size 0x1, align 1
    char _pad_0579[0x7]; // offset 0x579
    CUtlSymbolLarge m_iszPathNodeStartName; // offset 0x580, size 0x8, align 8
    char _pad_0588[0xC]; // offset 0x588
    VectorWS m_vMoverSpawnPos; // offset 0x594, size 0xC, align 4
    bool m_bRunningDebugThink; // offset 0x5A0, size 0x1, align 1
    char _pad_05A1[0x7]; // offset 0x5A1
};
