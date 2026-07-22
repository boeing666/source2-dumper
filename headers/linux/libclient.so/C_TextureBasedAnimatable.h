#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    bool m_bLoop; // offset 0xC10, size 0x1, align 1
    char _pad_0C11[0x3]; // offset 0xC11
    float32 m_flFPS; // offset 0xC14, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xC18, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xC20, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xC28, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xC34, size 0xC, align 4
    float32 m_flStartTime; // offset 0xC40, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xC44, size 0x4, align 4
};
