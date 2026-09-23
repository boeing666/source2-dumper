#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    bool m_bLoop; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    float32 m_flFPS; // offset 0xB30, size 0x4, align 4
    char _pad_0B34[0x4]; // offset 0xB34
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xB38, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xB40, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xB48, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xB54, size 0xC, align 4
    float32 m_flStartTime; // offset 0xB60, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xB64, size 0x4, align 4
};
