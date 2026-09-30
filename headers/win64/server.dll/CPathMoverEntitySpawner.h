#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CPathMoverEntitySpawner::TemplateChoiceStrategy_t m_eTemplateChoiceStrategy; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x4B8, size 0x20, align 8
    int32[4] m_szSpawnTemplateParams; // offset 0x4D8, size 0x10, align 4
    int32[4] m_szSpawnTemplateCount; // offset 0x4E8, size 0x10, align 4
    int32 m_nSpawnIndex; // offset 0x4F8, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x4FC, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x500, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x504, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x508, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x528, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x52C, size 0x4, align 4
    int32 m_nSpawnActive; // offset 0x530, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x534, size 0x4, align 255
    bool m_bEnabled; // offset 0x538, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x539, size 0x1, align 1
    char _pad_053A[0x6]; // offset 0x53A
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x540, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x558, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x570, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x588, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x7]; // offset 0x591
    CUtlSymbolLarge m_iszPathNodeStartName; // offset 0x598, size 0x8, align 8
    char _pad_05A0[0xC]; // offset 0x5A0
    VectorWS m_vMoverSpawnPos; // offset 0x5AC, size 0xC, align 4
    bool m_bRunningDebugThink; // offset 0x5B8, size 0x1, align 1
    char _pad_05B9[0x7]; // offset 0x5B9
};
