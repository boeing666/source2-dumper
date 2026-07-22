#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xAC0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xA88, size 0x8, align 8
    float32 m_flWidth; // offset 0xA90, size 0x4, align 4
    float32 m_flHeight; // offset 0xA94, size 0x4, align 4
    float32 m_flDepth; // offset 0xA98, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xA9C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xAA0, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xAA1, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xAA2, size 0x1, align 1
    char _pad_0AA3[0x1]; // offset 0xAA3
    float32 m_flDepthSortBias; // offset 0xAA4, size 0x4, align 4
    char _pad_0AA8[0x18]; // offset 0xAA8
};
