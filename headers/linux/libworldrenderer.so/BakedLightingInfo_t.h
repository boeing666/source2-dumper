#pragma once

struct BakedLightingInfo_t  // sizeof 0x48, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    uint32 m_nLightmapVersionNumber; // offset 0x0, size 0x4, align 4
    uint32 m_nLightmapGameVersionNumber; // offset 0x4, size 0x4, align 4
    Vector2D m_vLightmapUvScale; // offset 0x8, size 0x8, align 4
    bool m_bHasLightmaps; // offset 0x10, size 0x1, align 1
    bool m_bBakedShadowsGamma20; // offset 0x11, size 0x1, align 1
    bool m_bCompressionEnabled; // offset 0x12, size 0x1, align 1
    bool m_bSHLightmaps; // offset 0x13, size 0x1, align 1
    uint8 m_nChartPackIterations; // offset 0x14, size 0x1, align 1
    uint8 m_nVradQuality; // offset 0x15, size 0x1, align 1
    char _pad_0016[0x2]; // offset 0x16
    CUtlVector< CStrongHandle< InfoForResourceTypeCTextureBase > > m_lightMaps; // offset 0x18, size 0x18, align 8
    CUtlVector< BakedLightingInfo_t::BakedShadowAssignment_t > m_bakedShadows; // offset 0x30, size 0x18, align 8
};
