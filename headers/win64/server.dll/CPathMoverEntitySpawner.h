#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CPathMoverEntitySpawner::TemplateChoiceStrategy_t m_eTemplateChoiceStrategy; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x4B0, size 0x20, align 8
    int32[4] m_szSpawnTemplateParams; // offset 0x4D0, size 0x10, align 4
    int32[4] m_szSpawnTemplateCount; // offset 0x4E0, size 0x10, align 4
    int32 m_nSpawnIndex; // offset 0x4F0, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x4F4, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x4F8, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x4FC, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, PathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x500, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x520, size 0x4, align 4
    int32 m_nSpawnNum; // offset 0x524, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x528, size 0x4, align 255
    bool m_bEnabled; // offset 0x52C, size 0x1, align 1
    bool m_bDestroyMoverOnArrivedAtEnd; // offset 0x52D, size 0x1, align 1
    char _pad_052E[0x2]; // offset 0x52E
    CUtlVector< CHandle< CFuncMover > > m_vecQueuedRemovals; // offset 0x530, size 0x18, align 8
    CEntityIOOutput m_OnTemplateSpawned; // offset 0x548, size 0x18, align 255
    CEntityIOOutput m_OnTemplateGroupSpawned; // offset 0x560, size 0x18, align 255
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x578, size 0x8, align 8
    bool m_bPrepopulateOnSpawn; // offset 0x580, size 0x1, align 1
    char _pad_0581[0x7]; // offset 0x581
    CUtlSymbolLarge m_iszPathNodeStartName; // offset 0x588, size 0x8, align 8
    char _pad_0590[0xC]; // offset 0x590
    VectorWS m_vMoverSpawnPos; // offset 0x59C, size 0xC, align 4
    bool m_bRunningDebugThink; // offset 0x5A8, size 0x1, align 1
    char _pad_05A9[0x7]; // offset 0x5A9
};
