#pragma once

class CNmGraphDocFloatComparisonNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CNmFloatComparisonNode::Comparison_t m_comparison; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x3]; // offset 0x109
    float32 m_flComparisonValue; // offset 0x10C, size 0x4, align 4
    float32 m_flEpsilon; // offset 0x110, size 0x4, align 4
    char _pad_0114[0x4]; // offset 0x114
};
