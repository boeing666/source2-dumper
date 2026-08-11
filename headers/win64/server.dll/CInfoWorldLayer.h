#pragma once

class CInfoWorldLayer : public CBaseEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEntityIOOutput m_pOutputOnEntitiesSpawned; // offset 0x4A0, size 0x18, align 255
    CUtlSymbolLarge m_worldName; // offset 0x4B8, size 0x8, align 8 | MNetworkEnable MNotSaved
    CUtlSymbolLarge m_layerName; // offset 0x4C0, size 0x8, align 8 | MNetworkEnable MNotSaved
    bool m_bWorldLayerVisible; // offset 0x4C8, size 0x1, align 1 | MNetworkEnable
    bool m_bEntitiesSpawned; // offset 0x4C9, size 0x1, align 1 | MNetworkEnable
    bool m_bCreateAsChildSpawnGroup; // offset 0x4CA, size 0x1, align 1
    char _pad_04CB[0x1]; // offset 0x4CB
    uint32 m_hLayerSpawnGroup; // offset 0x4CC, size 0x4, align 4 | MNotSaved
};
