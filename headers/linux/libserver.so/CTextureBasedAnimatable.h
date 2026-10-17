#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0xB70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    bool m_bLoop; // offset 0xB34, size 0x1, align 1
    char _pad_0B35[0x3]; // offset 0xB35
    float32 m_flFPS; // offset 0xB38, size 0x4, align 4
    char _pad_0B3C[0x4]; // offset 0xB3C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xB40, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xB48, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xB50, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xB5C, size 0xC, align 4
    float32 m_flStartTime; // offset 0xB68, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xB6C, size 0x4, align 4
};
