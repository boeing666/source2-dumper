#pragma once

class CNmGraphDocFloatRangeComparisonNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    Range_t m_range; // offset 0x100, size 0x8, align 4
    bool m_isInclusiveCheck; // offset 0x108, size 0x1, align 1
    char _pad_0109[0x7]; // offset 0x109
};
