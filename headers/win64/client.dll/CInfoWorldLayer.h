#pragma once

class CInfoWorldLayer : public C_BaseEntity /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // offset 0x5F0, size 0x18, align 255
    CUtlSymbolLarge m_worldName; // offset 0x608, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_layerName; // offset 0x610, size 0x8, align 8 | MNotSaved
    bool m_bWorldLayerVisible; // offset 0x618, size 0x1, align 1
    bool m_bEntitiesSpawned; // offset 0x619, size 0x1, align 1
    bool m_bCreateAsChildSpawnGroup; // offset 0x61A, size 0x1, align 1
    char _pad_061B[0x1]; // offset 0x61B
    uint32 m_hLayerSpawnGroup; // offset 0x61C, size 0x4, align 4 | MNotSaved
    bool m_bWorldLayerActuallyVisible; // offset 0x620, size 0x1, align 1 | MNotSaved
    char _pad_0621[0x7]; // offset 0x621
};
