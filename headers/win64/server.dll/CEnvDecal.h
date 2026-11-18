#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x8B8, size 0x8, align 8
    float32 m_flWidth; // offset 0x8C0, size 0x4, align 4
    float32 m_flHeight; // offset 0x8C4, size 0x4, align 4
    float32 m_flDepth; // offset 0x8C8, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x8CC, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x8D0, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x8D1, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x8D2, size 0x1, align 1
    char _pad_08D3[0x1]; // offset 0x8D3
    float32 m_flDepthSortBias; // offset 0x8D4, size 0x4, align 4
};
