#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0xFE8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0xFB0, size 0x8, align 8
    float32 m_flWidth; // offset 0xFB8, size 0x4, align 4
    float32 m_flHeight; // offset 0xFBC, size 0x4, align 4
    float32 m_flDepth; // offset 0xFC0, size 0x4, align 4
    uint32 m_nRenderOrder; // offset 0xFC4, size 0x4, align 4
    bool m_bProjectOnWorld; // offset 0xFC8, size 0x1, align 1
    bool m_bProjectOnCharacters; // offset 0xFC9, size 0x1, align 1
    bool m_bProjectOnWater; // offset 0xFCA, size 0x1, align 1
    char _pad_0FCB[0x1]; // offset 0xFCB
    float32 m_flDepthSortBias; // offset 0xFCC, size 0x4, align 4
    char _pad_0FD0[0x18]; // offset 0xFD0
};
