#pragma once

class CAnimGraphDoc_TimeCondition : public CAnimGraphDoc_Condition /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    Comparison_t m_comparisonOp; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_comparisonString; // offset 0x30, size 0x8, align 8
};
