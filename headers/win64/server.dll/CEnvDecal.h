#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x858, size 0x8, align 8
    float32 m_flWidth; // offset 0x860, size 0x4, align 4
    float32 m_flHeight; // offset 0x864, size 0x4, align 4
    float32 m_flDepth; // offset 0x868, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0x86C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0x870, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0x871, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0x872, size 0x1, align 1
    char _pad_0873[0x1]; // offset 0x873
    float32 m_flDepthSortBias; // offset 0x874, size 0x4, align 4
};
