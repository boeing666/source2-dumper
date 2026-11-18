#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    bool m_bLoop; // offset 0xB9C, size 0x1, align 1
    char _pad_0B9D[0x3]; // offset 0xB9D
    float32 m_flFPS; // offset 0xBA0, size 0x4, align 4
    char _pad_0BA4[0x4]; // offset 0xBA4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xBA8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xBB0, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xBB8, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xBC4, size 0xC, align 4
    float32 m_flStartTime; // offset 0xBD0, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xBD4, size 0x4, align 4
};
