#pragma once

class CnmGraphDocTwoBoneIKNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x208]; // offset 0x0
    bool m_bIsTargetInWorldSpace; // offset 0x208, size 0x1, align 1
    NmIKBlendMode_t m_blendMode; // offset 0x209, size 0x1, align 1
    char _pad_020A[0x2]; // offset 0x20A
    float32 m_flChainRotationWeight; // offset 0x20C, size 0x4, align 4 | MPropertyDescription
};
