#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xDA0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xD68, size 0x8, align 8
    float32 m_flWidth; // offset 0xD70, size 0x4, align 4
    float32 m_flHeight; // offset 0xD74, size 0x4, align 4
    float32 m_flDepth; // offset 0xD78, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xD7C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xD80, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xD81, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xD82, size 0x1, align 1
    char _pad_0D83[0x1]; // offset 0xD83
    float32 m_flDepthSortBias; // offset 0xD84, size 0x4, align 4
    char _pad_0D88[0x18]; // offset 0xD88
};
