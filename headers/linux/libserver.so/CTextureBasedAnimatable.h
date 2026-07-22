#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    bool m_bLoop; // offset 0xA4C, size 0x1, align 1
    char _pad_0A4D[0x3]; // offset 0xA4D
    float32 m_flFPS; // offset 0xA50, size 0x4, align 4
    char _pad_0A54[0x4]; // offset 0xA54
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xA58, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xA60, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xA68, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xA74, size 0xC, align 4
    float32 m_flStartTime; // offset 0xA80, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xA84, size 0x4, align 4
};
