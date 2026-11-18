#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xBA0, size 0x8, align 8
    float32 m_flWidth; // offset 0xBA8, size 0x4, align 4
    float32 m_flHeight; // offset 0xBAC, size 0x4, align 4
    float32 m_flDepth; // offset 0xBB0, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xBB4, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xBB8, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xBB9, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xBBA, size 0x1, align 1
    char _pad_0BBB[0x1]; // offset 0xBBB
    float32 m_flDepthSortBias; // offset 0xBBC, size 0x4, align 4
};
