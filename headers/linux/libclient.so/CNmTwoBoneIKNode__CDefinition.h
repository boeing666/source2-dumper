#pragma once

class CNmTwoBoneIKNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CGlobalSymbol m_effectorBoneID; // offset 0x10, size 0x8, align 8
    int16 m_nEffectorTargetNodeIdx; // offset 0x18, size 0x2, align 2
    int16 m_nEnabledNodeIdx; // offset 0x1A, size 0x2, align 2
    float32 m_flBlendTimeSeconds; // offset 0x1C, size 0x4, align 4
    NmIKBlendMode_t m_blendMode; // offset 0x20, size 0x1, align 1
    bool m_bIsTargetInWorldSpace; // offset 0x21, size 0x1, align 1
    char _pad_0022[0x2]; // offset 0x22
    float32 m_flChainRotationWeight; // offset 0x24, size 0x4, align 4
};
