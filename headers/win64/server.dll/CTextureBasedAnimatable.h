#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bLoop; // offset 0x780, size 0x1, align 1 | MNetworkEnable
    char _pad_0781[0x3]; // offset 0x781
    float32 m_flFPS; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x788, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x790, size 0x8, align 8 | MNetworkEnable
    Vector m_vAnimationBoundsMin; // offset 0x798, size 0xC, align 4 | MNetworkEnable
    Vector m_vAnimationBoundsMax; // offset 0x7A4, size 0xC, align 4 | MNetworkEnable
    float32 m_flStartTime; // offset 0x7B0, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flStartFrame; // offset 0x7B4, size 0x4, align 4 | MNetworkEnable
};
