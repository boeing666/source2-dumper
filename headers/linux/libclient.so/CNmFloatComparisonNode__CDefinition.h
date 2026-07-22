#pragma once

class CNmFloatComparisonNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nComparandValueNodeIdx; // offset 0xC, size 0x2, align 2
    CNmFloatComparisonNode::Comparison_t m_comparison; // offset 0xE, size 0x1, align 1
    char _pad_000F[0x1]; // offset 0xF
    float32 m_flEpsilon; // offset 0x10, size 0x4, align 4
    float32 m_flComparisonValue; // offset 0x14, size 0x4, align 4
};
