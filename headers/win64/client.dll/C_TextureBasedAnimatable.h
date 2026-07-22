#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xFE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    bool m_bLoop; // offset 0xFB0, size 0x1, align 1
    char _pad_0FB1[0x3]; // offset 0xFB1
    float32 m_flFPS; // offset 0xFB4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xFB8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xFC0, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xFC8, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xFD4, size 0xC, align 4
    float32 m_flStartTime; // offset 0xFE0, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xFE4, size 0x4, align 4
};
