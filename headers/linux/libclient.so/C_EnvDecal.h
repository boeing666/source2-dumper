#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xC10, size 0x8, align 8
    float32 m_flWidth; // offset 0xC18, size 0x4, align 4
    float32 m_flHeight; // offset 0xC1C, size 0x4, align 4
    float32 m_flDepth; // offset 0xC20, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xC24, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xC28, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xC29, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xC2A, size 0x1, align 1
    char _pad_0C2B[0x1]; // offset 0xC2B
    float32 m_flDepthSortBias; // offset 0xC2C, size 0x4, align 4
    char _pad_0C30[0x18]; // offset 0xC30
};
