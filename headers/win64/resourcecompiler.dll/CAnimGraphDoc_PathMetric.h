#pragma once

class CAnimGraphDoc_PathMetric : public CAnimGraphDoc_MotionMetric /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flDistance; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_002C[0x4]; // offset 0x2C
    CUtlVector< float32 > m_pathSamples; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bExtrapolateMovement; // offset 0x48, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0049[0x3]; // offset 0x49
    float32 m_flMinExtrapolationSpeed; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
};
