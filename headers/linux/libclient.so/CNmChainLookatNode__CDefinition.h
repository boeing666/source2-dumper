#pragma once

class CNmChainLookatNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CGlobalSymbol m_endEffectorBoneID; // offset 0x10, size 0x8, align 8
    Vector m_endEffectorForwardAxis; // offset 0x18, size 0xC, align 4
    Vector m_endEffectorOffset; // offset 0x24, size 0xC, align 4
    int16 m_nLookatTargetNodeIdx; // offset 0x30, size 0x2, align 2
    int16 m_nEnabledNodeIdx; // offset 0x32, size 0x2, align 2
    float32 m_flBlendTimeSeconds; // offset 0x34, size 0x4, align 4
    CUtlVectorFixedGrowable< float32, 5 > m_chainWeights; // offset 0x38, size 0x30, align 8
    uint8 m_nChainLength; // offset 0x68, size 0x1, align 1
    bool m_bIsTargetInWorldSpace; // offset 0x69, size 0x1, align 1
    char _pad_006A[0x6]; // offset 0x6A
};
