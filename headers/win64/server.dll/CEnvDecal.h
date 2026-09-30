#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x878, size 0x8, align 8
    float32 m_flWidth; // offset 0x880, size 0x4, align 4
    float32 m_flHeight; // offset 0x884, size 0x4, align 4
    float32 m_flDepth; // offset 0x888, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x88C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x890, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x891, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x892, size 0x1, align 1
    char _pad_0893[0x1]; // offset 0x893
    float32 m_flDepthSortBias; // offset 0x894, size 0x4, align 4
};
