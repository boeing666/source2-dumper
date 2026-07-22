#pragma once

class CPathMoverEntitySpawner : public CLogicalEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge[4] m_szSpawnTemplates; // offset 0x4A0, size 0x20, align 8
    int32 m_nSpawnIndex; // offset 0x4C0, size 0x4, align 4
    CHandle< CPathMover > m_hPathMover; // offset 0x4C4, size 0x4, align 4
    float32 m_flSpawnFrequencySeconds; // offset 0x4C8, size 0x4, align 4
    float32 m_flSpawnFrequencyDistToNearestMover; // offset 0x4CC, size 0x4, align 4
    CUtlHashtable< CHandle< CFuncMover >, CPathMoverEntitySpawn > m_mapSpawnedMoverTemplates; // offset 0x4D0, size 0x20, align 8
    int32 m_nMaxActive; // offset 0x4F0, size 0x4, align 4
    GameTime_t m_flLastSpawnTime; // offset 0x4F4, size 0x4, align 255
    bool m_bEnabled; // offset 0x4F8, size 0x1, align 1
    char _pad_04F9[0x7]; // offset 0x4F9
};
