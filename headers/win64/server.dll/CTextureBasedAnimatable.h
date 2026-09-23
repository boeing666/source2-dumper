#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    bool m_bLoop; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x3]; // offset 0x851
    float32 m_flFPS; // offset 0x854, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x858, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x860, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0x868, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0x874, size 0xC, align 4
    float32 m_flStartTime; // offset 0x880, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0x884, size 0x4, align 4
};
