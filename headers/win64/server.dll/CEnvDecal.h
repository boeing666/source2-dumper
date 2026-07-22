#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x770, size 0x8, align 8
    float32 m_flWidth; // offset 0x778, size 0x4, align 4
    float32 m_flHeight; // offset 0x77C, size 0x4, align 4
    float32 m_flDepth; // offset 0x780, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x784, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x788, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x789, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x78A, size 0x1, align 1
    char _pad_078B[0x1]; // offset 0x78B
    float32 m_flDepthSortBias; // offset 0x78C, size 0x4, align 4
};
