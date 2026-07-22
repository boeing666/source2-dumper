#pragma once

class CInfoWorldLayer : public C_BaseEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // offset 0x600, size 0x18, align 255
    CUtlSymbolLarge m_worldName; // offset 0x618, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_layerName; // offset 0x620, size 0x8, align 8 | MNotSaved
    bool m_bWorldLayerVisible; // offset 0x628, size 0x1, align 1
    bool m_bEntitiesSpawned; // offset 0x629, size 0x1, align 1
    bool m_bCreateAsChildSpawnGroup; // offset 0x62A, size 0x1, align 1
    char _pad_062B[0x1]; // offset 0x62B
    uint32 m_hLayerSpawnGroup; // offset 0x62C, size 0x4, align 4 | MNotSaved
    bool m_bWorldLayerActuallyVisible; // offset 0x630, size 0x1, align 1 | MNotSaved
    char _pad_0631[0x7]; // offset 0x631
};
