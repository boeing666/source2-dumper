#pragma once

class CNmFootIKNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_leftEffectorBoneID; // offset 0x18, size 0x8, align 8
    CGlobalSymbol m_rightEffectorBoneID; // offset 0x20, size 0x8, align 8
    int16 m_nLeftTargetNodeIdx; // offset 0x28, size 0x2, align 2
    int16 m_nRightTargetNodeIdx; // offset 0x2A, size 0x2, align 2
    int16 m_nEnabledNodeIdx; // offset 0x2C, size 0x2, align 2
    char _pad_002E[0x2]; // offset 0x2E
    float32 m_flBlendTimeSeconds; // offset 0x30, size 0x4, align 4
    NmIKBlendMode_t m_blendMode; // offset 0x34, size 0x1, align 1
    bool m_bIsTargetInWorldSpace; // offset 0x35, size 0x1, align 1
    char _pad_0036[0x2]; // offset 0x36
};
