#pragma once

class CNmGraphDocIDComparisonNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CNmIDComparisonNode::Comparison_t m_comparison; // offset 0x100, size 0x1, align 1
    char _pad_0101[0x7]; // offset 0x101
    CUtlVector< CGlobalSymbol > m_values; // offset 0x108, size 0x18, align 8 | MPropertyAttributeEditor MPropertyAutoExpandSelf
};
