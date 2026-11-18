#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    bool m_bLoop; // offset 0xBD8, size 0x1, align 1
    char _pad_0BD9[0x3]; // offset 0xBD9
    float32 m_flFPS; // offset 0xBDC, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xBE0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xBE8, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xBF0, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xBFC, size 0xC, align 4
    float32 m_flStartTime; // offset 0xC08, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xC0C, size 0x4, align 4
};
