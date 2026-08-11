#pragma once

class CInfoWorldLayer : public CBaseEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // offset 0x778, size 0x18, align 255
    CUtlSymbolLarge m_worldName; // offset 0x790, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_layerName; // offset 0x798, size 0x8, align 8 | MNotSaved
    bool m_bWorldLayerVisible; // offset 0x7A0, size 0x1, align 1
    bool m_bEntitiesSpawned; // offset 0x7A1, size 0x1, align 1
    bool m_bCreateAsChildSpawnGroup; // offset 0x7A2, size 0x1, align 1
    char _pad_07A3[0x1]; // offset 0x7A3
    uint32 m_hLayerSpawnGroup; // offset 0x7A4, size 0x4, align 4 | MNotSaved
};
