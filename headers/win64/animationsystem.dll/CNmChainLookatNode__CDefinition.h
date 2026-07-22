#pragma once

class CNmChainLookatNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_endEffectorBoneID; // offset 0x18, size 0x8, align 8
    Vector m_endEffectorForwardAxis; // offset 0x20, size 0xC, align 4
    Vector m_endEffectorOffset; // offset 0x2C, size 0xC, align 4
    int16 m_nLookatTargetNodeIdx; // offset 0x38, size 0x2, align 2
    int16 m_nEnabledNodeIdx; // offset 0x3A, size 0x2, align 2
    float32 m_flBlendTimeSeconds; // offset 0x3C, size 0x4, align 4
    CUtlVectorFixedGrowable< float32, 5 > m_chainWeights; // offset 0x40, size 0x30, align 8
    uint8 m_nChainLength; // offset 0x70, size 0x1, align 1
    bool m_bIsTargetInWorldSpace; // offset 0x71, size 0x1, align 1
    char _pad_0072[0x6]; // offset 0x72
};
