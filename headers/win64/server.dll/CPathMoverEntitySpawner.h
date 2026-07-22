#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x568, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x4A8, size 0x20, align 8
    int32 m_nSpawnIndex; // offset 0x4C8, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x4CC, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x4D0, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x4D4, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x4D8, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x4F8, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x4FC, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x500, size 0x4, align 255
    bool m_bEnabled; // offset 0x504, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x505, size 0x1, align 1
    char _pad_0506[0x2]; // offset 0x506
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x508, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x520, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x538, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x550, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x558, size 0x1, align 1
    char _pad_0559[0xF]; // offset 0x559
};
