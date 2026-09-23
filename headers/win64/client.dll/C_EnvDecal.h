#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0x10D0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x1098, size 0x8, align 8
    float32 m_flWidth; // offset 0x10A0, size 0x4, align 4
    float32 m_flHeight; // offset 0x10A4, size 0x4, align 4
    float32 m_flDepth; // offset 0x10A8, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x10AC, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x10B0, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x10B1, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x10B2, size 0x1, align 1
    char _pad_10B3[0x1]; // offset 0x10B3
    float32 m_flDepthSortBias; // offset 0x10B4, size 0x4, align 4
    char _pad_10B8[0x18]; // offset 0x10B8
};
