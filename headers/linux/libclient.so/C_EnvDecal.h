#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0x1058, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x1020, size 0x8, align 8
    float32 m_flWidth; // offset 0x1028, size 0x4, align 4
    float32 m_flHeight; // offset 0x102C, size 0x4, align 4
    float32 m_flDepth; // offset 0x1030, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x1034, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x1038, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x1039, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x103A, size 0x1, align 1
    char _pad_103B[0x1]; // offset 0x103B
    float32 m_flDepthSortBias; // offset 0x103C, size 0x4, align 4
    char _pad_1040[0x18]; // offset 0x1040
};
