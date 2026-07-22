#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    bool m_bLoop; // offset 0x9A8, size 0x1, align 1 | MNetworkEnable
    char _pad_09A9[0x3]; // offset 0x9A9
    float32 m_flFPS; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x9B0, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x9B8, size 0x8, align 8 | MNetworkEnable
    Vector m_vAnimationBoundsMin; // offset 0x9C0, size 0xC, align 4 | MNetworkEnable
    Vector m_vAnimationBoundsMax; // offset 0x9CC, size 0xC, align 4 | MNetworkEnable
    float32 m_flStartTime; // offset 0x9D8, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flStartFrame; // offset 0x9DC, size 0x4, align 4 | MNetworkEnable
};
