#pragma once

class CTextureBasedAnimatable : public CBaseModelEntity /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    bool m_bLoop; // offset 0xA54, size 0x1, align 1
    char _pad_0A55[0x3]; // offset 0xA55
    float32 m_flFPS; // offset 0xA58, size 0x4, align 4
    char _pad_0A5C[0x4]; // offset 0xA5C
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hPositionKeys; // offset 0xA60, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_hRotationKeys; // offset 0xA68, size 0x8, align 8
    Vector m_vAnimationBoundsMin; // offset 0xA70, size 0xC, align 4
    Vector m_vAnimationBoundsMax; // offset 0xA7C, size 0xC, align 4
    float32 m_flStartTime; // offset 0xA88, size 0x4, align 4 | MNotSaved
    float32 m_flStartFrame; // offset 0xA8C, size 0x4, align 4
};
