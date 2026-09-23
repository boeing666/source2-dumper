#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x850, size 0x8, align 8
    float32 m_flWidth; // offset 0x858, size 0x4, align 4
    float32 m_flHeight; // offset 0x85C, size 0x4, align 4
    float32 m_flDepth; // offset 0x860, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x864, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x868, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x869, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x86A, size 0x1, align 1
    char _pad_086B[0x1]; // offset 0x86B
    float32 m_flDepthSortBias; // offset 0x86C, size 0x4, align 4
};
