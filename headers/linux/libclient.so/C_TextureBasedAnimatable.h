#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    bool m_bLoop; // offset 0xD00, size 0x1, align 1
    char _pad_0D01[0x3]; // offset 0xD01
    float32 m_flFPS; // offset 0xD04, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xD08, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xD10, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xD18, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xD24, size 0xC, align 4
    float32 m_flStartTime; // offset 0xD30, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xD34, size 0x4, align 4
};
