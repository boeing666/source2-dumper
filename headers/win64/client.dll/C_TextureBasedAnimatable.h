#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xAC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    bool m_bLoop; // offset 0xA88, size 0x1, align 1
    char _pad_0A89[0x3]; // offset 0xA89
    float32 m_flFPS; // offset 0xA8C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xA90, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xA98, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xAA0, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xAAC, size 0xC, align 4
    float32 m_flStartTime; // offset 0xAB8, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xABC, size 0x4, align 4
};
