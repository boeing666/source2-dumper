#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CPathMoverEntitySpawner::TemplateChoiceStrategy_t m_eTemplateChoiceStrategy; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x790, size 0x20, align 8
    int32[4] m_szSpawnTemplateParams; // offset 0x7B0, size 0x10, align 4
    int32[4] m_szSpawnTemplateCount; // offset 0x7C0, size 0x10, align 4
    int32 m_nSpawnIndex; // offset 0x7D0, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x7D4, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x7D8, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x7DC, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x7E0, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x800, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x804, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x808, size 0x4, align 255
    bool m_bEnabled; // offset 0x80C, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x80D, size 0x1, align 1
    char _pad_080E[0x2]; // offset 0x80E
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x810, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x828, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x840, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x858, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x7]; // offset 0x861
    CUtlSymbolLarge m_iszPathNodeStartName; // offset 0x868, size 0x8, align 8
    char _pad_0870[0x10]; // offset 0x870
    VectorWS m_vMoverSpawnPos; // offset 0x880, size 0xC, align 4
    bool m_bRunningDebugThink; // offset 0x88C, size 0x1, align 1
    char _pad_088D[0x3]; // offset 0x88D
};
