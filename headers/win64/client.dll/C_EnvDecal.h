#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xB78, size 0x8, align 8
    float32 m_flWidth; // offset 0xB80, size 0x4, align 4
    float32 m_flHeight; // offset 0xB84, size 0x4, align 4
    float32 m_flDepth; // offset 0xB88, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xB8C, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xB90, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xB91, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xB92, size 0x1, align 1
    char _pad_0B93[0x1]; // offset 0xB93
    float32 m_flDepthSortBias; // offset 0xB94, size 0x4, align 4
    char _pad_0B98[0x18]; // offset 0xB98
};
