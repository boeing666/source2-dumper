#pragma once

class CNmFloatComparisonNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nComparandValueNodeIdx; // offset 0x12, size 0x2, align 2
    CNmFloatComparisonNode::Comparison_t m_comparison; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    float32 m_flEpsilon; // offset 0x18, size 0x4, align 4
    float32 m_flComparisonValue; // offset 0x1C, size 0x4, align 4
};
