#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xDA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    bool m_bLoop; // offset 0xD68, size 0x1, align 1
    char _pad_0D69[0x3]; // offset 0xD69
    float32 m_flFPS; // offset 0xD6C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xD70, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xD78, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xD80, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xD8C, size 0xC, align 4
    float32 m_flStartTime; // offset 0xD98, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xD9C, size 0x4, align 4
};
