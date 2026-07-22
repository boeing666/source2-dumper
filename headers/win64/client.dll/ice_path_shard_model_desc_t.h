#pragma once

struct ice_path_shard_model_desc_t  // sizeof 0x38, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nModelID; // offset 0x8, size 0x4, align 4 | MNetworkEnable
    Vector2D m_vecPanelSize; // offset 0xC, size 0x8, align 4 | MNetworkEnable
    char _pad_0014[0x4]; // offset 0x14
    C_NetworkUtlVectorBase< Vector > m_vecPanelVertices; // offset 0x18, size 0x18, align 8 | MNetworkEnable
    float32 m_flThickness; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    CUtlStringToken m_SurfacePropStringToken; // offset 0x34, size 0x4, align 4 | MNetworkEnable
};
