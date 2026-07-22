#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x568, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x498, size 0x20, align 8
    int32 m_nSpawnIndex; // offset 0x4B8, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x4BC, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x4C0, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x4C4, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x4C8, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x4E8, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x4EC, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x4F0, size 0x4, align 255
    bool m_bEnabled; // offset 0x4F4, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x4F5, size 0x1, align 1
    char _pad_04F6[0x2]; // offset 0x4F6
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x4F8, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x510, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x528, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x540, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x548, size 0x1, align 1
    char _pad_0549[0x7]; // offset 0x549
    CUtlSymbolLarge m_iszPathNodeStartName; // offset 0x550, size 0x8, align 8
    char _pad_0558[0x10]; // offset 0x558
};
