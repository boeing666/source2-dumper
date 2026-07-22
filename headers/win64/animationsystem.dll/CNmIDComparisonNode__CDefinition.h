#pragma once

class CNmIDComparisonNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0x10, size 0x2, align 2
    CNmIDComparisonNode::Comparison_t m_comparison; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x5]; // offset 0x13
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > m_comparisionIDs; // offset 0x18, size 0x28, align 8
};
