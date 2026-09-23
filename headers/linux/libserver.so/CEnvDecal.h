#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xB30, size 0x8, align 8
    float32 m_flWidth; // offset 0xB38, size 0x4, align 4
    float32 m_flHeight; // offset 0xB3C, size 0x4, align 4
    float32 m_flDepth; // offset 0xB40, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xB44, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xB48, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xB49, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xB4A, size 0x1, align 1
    char _pad_0B4B[0x1]; // offset 0xB4B
    float32 m_flDepthSortBias; // offset 0xB4C, size 0x4, align 4
};
