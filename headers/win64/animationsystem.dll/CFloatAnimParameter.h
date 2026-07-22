#pragma once

class CFloatAnimParameter : public CConcreteAnimParameter /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    float32 m_fDefaultValue; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fMinValue; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fMaxValue; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInterpolate; // offset 0x8C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_008D[0x3]; // offset 0x8D
};
