#pragma once

class C_EnvDecal : public C_BaseModelEntity /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x9A8, size 0x8, align 8 | MNetworkEnable
    float32 m_flWidth; // offset 0x9B0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flHeight; // offset 0x9B4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flDepth; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    uint32 m_nRenderOrder; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable
    bool m_bProjectOnWorld; // offset 0x9C0, size 0x1, align 1 | MNetworkEnable
    bool m_bProjectOnCharacters; // offset 0x9C1, size 0x1, align 1 | MNetworkEnable
    bool m_bProjectOnWater; // offset 0x9C2, size 0x1, align 1 | MNetworkEnable
    char _pad_09C3[0x1]; // offset 0x9C3
    float32 m_flDepthSortBias; // offset 0x9C4, size 0x4, align 4 | MNetworkEnable
    char _pad_09C8[0x18]; // offset 0x9C8
};
