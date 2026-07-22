#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xF70, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xF38, size 0x8, align 8
    float32 m_flWidth; // offset 0xF40, size 0x4, align 4
    float32 m_flHeight; // offset 0xF44, size 0x4, align 4
    float32 m_flDepth; // offset 0xF48, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xF4C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xF50, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xF51, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xF52, size 0x1, align 1
    char _pad_0F53[0x1]; // offset 0xF53
    float32 m_flDepthSortBias; // offset 0xF54, size 0x4, align 4
    char _pad_0F58[0x18]; // offset 0xF58
};
