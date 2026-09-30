#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xBB0, size 0x8, align 8
    float32 m_flWidth; // offset 0xBB8, size 0x4, align 4
    float32 m_flHeight; // offset 0xBBC, size 0x4, align 4
    float32 m_flDepth; // offset 0xBC0, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xBC4, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xBC8, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xBC9, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xBCA, size 0x1, align 1
    char _pad_0BCB[0x1]; // offset 0xBCB
    float32 m_flDepthSortBias; // offset 0xBCC, size 0x4, align 4
    char _pad_0BD0[0x18]; // offset 0xBD0
};
