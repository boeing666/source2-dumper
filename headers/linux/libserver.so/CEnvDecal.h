#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0xA78, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xA58, size 0x8, align 8
    float32 m_flWidth; // offset 0xA60, size 0x4, align 4
    float32 m_flHeight; // offset 0xA64, size 0x4, align 4
    float32 m_flDepth; // offset 0xA68, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xA6C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xA70, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xA71, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xA72, size 0x1, align 1
    char _pad_0A73[0x1]; // offset 0xA73
    float32 m_flDepthSortBias; // offset 0xA74, size 0x4, align 4
};
