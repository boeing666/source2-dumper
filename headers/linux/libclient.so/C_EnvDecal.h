#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xD00, size 0x8, align 8
    float32 m_flWidth; // offset 0xD08, size 0x4, align 4
    float32 m_flHeight; // offset 0xD0C, size 0x4, align 4
    float32 m_flDepth; // offset 0xD10, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xD14, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xD18, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xD19, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xD1A, size 0x1, align 1
    char _pad_0D1B[0x1]; // offset 0xD1B
    float32 m_flDepthSortBias; // offset 0xD1C, size 0x4, align 4
    char _pad_0D20[0x18]; // offset 0xD20
};
