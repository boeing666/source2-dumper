#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bLoop; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    float32 m_flFPS; // offset 0x77C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x780, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x788, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0x790, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0x79C, size 0xC, align 4
    float32 m_flStartTime; // offset 0x7A8, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0x7AC, size 0x4, align 4
};
