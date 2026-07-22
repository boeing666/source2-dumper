#pragma once

class CNmChainLookatNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_chainEndBoneID; // offset 0x18, size 0x8, align 8
    int16 m_nLookatTargetNodeIdx; // offset 0x20, size 0x2, align 2
    int16 m_nEnabledNodeIdx; // offset 0x22, size 0x2, align 2
    float32 m_flBlendTimeSeconds; // offset 0x24, size 0x4, align 4
    uint8 m_nChainLength; // offset 0x28, size 0x1, align 1
    bool m_bIsTargetInWorldSpace; // offset 0x29, size 0x1, align 1
    char _pad_002A[0x2]; // offset 0x2A
    Vector m_chainForwardDir; // offset 0x2C, size 0xC, align 4
};
