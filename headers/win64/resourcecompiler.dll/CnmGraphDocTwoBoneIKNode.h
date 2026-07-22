#pragma once

class CnmGraphDocTwoBoneIKNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x200]; // offset 0x0
    bool m_bIsTargetInWorldSpace; // offset 0x200, size 0x1, align 1
    NmIKBlendMode_t m_blendMode; // offset 0x201, size 0x1, align 1
    char _pad_0202[0x2]; // offset 0x202
    float32 m_flChainRotationWeight; // offset 0x204, size 0x4, align 4 | MPropertyDescription
};
