#pragma once

class CEnvDecal : public CBaseModelEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hDecalMaterial; // offset 0x780, size 0x8, align 8 | MNetworkEnable
    float32 m_flWidth; // offset 0x788, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flHeight; // offset 0x78C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flDepth; // offset 0x790, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    uint32 m_nRenderOrder; // offset 0x794, size 0x4, align 4 | MNetworkEnable
    bool m_bProjectOnWorld; // offset 0x798, size 0x1, align 1 | MNetworkEnable
    bool m_bProjectOnCharacters; // offset 0x799, size 0x1, align 1 | MNetworkEnable
    bool m_bProjectOnWater; // offset 0x79A, size 0x1, align 1 | MNetworkEnable
    char _pad_079B[0x1]; // offset 0x79B
    float32 m_flDepthSortBias; // offset 0x79C, size 0x4, align 4 | MNetworkEnable
};
