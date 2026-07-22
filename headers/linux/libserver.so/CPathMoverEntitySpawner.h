#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x778, size 0x20, align 8
    int32 m_nSpawnIndex; // offset 0x798, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x79C, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x7A0, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x7A4, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x7A8, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x7C8, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x7CC, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x7D0, size 0x4, align 255
    bool m_bEnabled; // offset 0x7D4, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x7D5, size 0x1, align 1
    char _pad_07D6[0x2]; // offset 0x7D6
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x7D8, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x7F0, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x808, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x820, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x7]; // offset 0x829
    CUtlSymbolLarge m_iszPathNodeStartName; // offset 0x830, size 0x8, align 8
    char _pad_0838[0x10]; // offset 0x838
};
