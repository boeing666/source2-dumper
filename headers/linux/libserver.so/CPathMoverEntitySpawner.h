#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x788, size 0x20, align 8
    int32 m_nSpawnIndex; // offset 0x7A8, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x7AC, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x7B0, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x7B4, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x7B8, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x7D8, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x7DC, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x7E0, size 0x4, align 255
    bool m_bEnabled; // offset 0x7E4, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x7E5, size 0x1, align 1
    char _pad_07E6[0x2]; // offset 0x7E6
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x7E8, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x800, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x818, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x830, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x17]; // offset 0x839
};
