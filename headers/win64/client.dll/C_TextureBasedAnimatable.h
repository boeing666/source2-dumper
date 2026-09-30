#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bLoop; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    float32 m_flFPS; // offset 0xBB4, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xBB8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xBC0, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xBC8, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xBD4, size 0xC, align 4
    float32 m_flStartTime; // offset 0xBE0, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xBE4, size 0x4, align 4
};
