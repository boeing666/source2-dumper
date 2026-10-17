#pragma once

class C_TextureBasedAnimatable : public C_BaseModelEntity /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    bool m_bLoop; // offset 0xB78, size 0x1, align 1
    char _pad_0B79[0x3]; // offset 0xB79
    float32 m_flFPS; // offset 0xB7C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xB80, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xB88, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xB90, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xB9C, size 0xC, align 4
    float32 m_flStartTime; // offset 0xBA8, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xBAC, size 0x4, align 4
};
