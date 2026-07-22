#pragma once

class CNmIDComparisonNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    CNmIDComparisonNode::Comparison_t m_comparison; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 4 > m_comparisionIDs; // offset 0x10, size 0x28, align 8
};
