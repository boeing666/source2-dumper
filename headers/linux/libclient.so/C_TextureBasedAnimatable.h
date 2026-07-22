#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xF70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    bool m_bLoop; // offset 0xF38, size 0x1, align 1
    char _pad_0F39[0x3]; // offset 0xF39
    float32 m_flFPS; // offset 0xF3C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xF40, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xF48, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xF50, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xF5C, size 0xC, align 4
    float32 m_flStartTime; // offset 0xF68, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xF6C, size 0x4, align 4
};
