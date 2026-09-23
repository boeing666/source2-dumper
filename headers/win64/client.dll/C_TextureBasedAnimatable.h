#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0x10D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    bool m_bLoop; // offset 0x1098, size 0x1, align 1
    char _pad_1099[0x3]; // offset 0x1099
    float32 m_flFPS; // offset 0x109C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0x10A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0x10A8, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0x10B0, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0x10BC, size 0xC, align 4
    float32 m_flStartTime; // offset 0x10C8, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0x10CC, size 0x4, align 4
};
