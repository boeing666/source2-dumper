#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    bool m_bLoop; // offset 0x8B8, size 0x1, align 1
    char _pad_08B9[0x3]; // offset 0x8B9
    float32 m_flFPS; // offset 0x8BC, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x8C0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x8C8, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0x8D0, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0x8DC, size 0xC, align 4
    float32 m_flStartTime; // offset 0x8E8, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0x8EC, size 0x4, align 4
};
