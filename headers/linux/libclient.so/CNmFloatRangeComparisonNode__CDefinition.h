#pragma once

class CNmFloatRangeComparisonNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    Range_t m_range; // offset 0xC, size 0x8, align 4
    int16 m_nInputValueNodeIdx; // offset 0x14, size 0x2, align 2
    bool m_bIsInclusiveCheck; // offset 0x16, size 0x1, align 1
    char _pad_0017[0x1]; // offset 0x17
};
