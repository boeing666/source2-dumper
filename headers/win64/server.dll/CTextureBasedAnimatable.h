#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    bool m_bLoop; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x3]; // offset 0x859
    float32 m_flFPS; // offset 0x85C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x860, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x868, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0x870, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0x87C, size 0xC, align 4
    float32 m_flStartTime; // offset 0x888, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0x88C, size 0x4, align 4
};
