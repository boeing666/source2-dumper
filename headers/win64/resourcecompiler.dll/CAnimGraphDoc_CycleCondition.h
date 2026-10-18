#pragma once

class CAnimGraphDoc_CycleCondition : public CAnimGraphDoc_Condition /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    Comparison_t m_comparisonOp; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_comparisonString; // offset 0x30, size 0x8, align 8
    float32 m_comparisonValue; // offset 0x38, size 0x4, align 4
    ComparisonValueType m_comparisonValueType; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    CUtlString m_comparisonParamName; // offset 0x40, size 0x8, align 8
    AnimParamID m_comparisonParamID; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
