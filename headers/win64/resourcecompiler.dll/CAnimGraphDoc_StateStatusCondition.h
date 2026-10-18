#pragma once

class CAnimGraphDoc_StateStatusCondition : public CAnimGraphDoc_Condition /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    StateValue m_sourceValue; // offset 0x28, size 0x4, align 4
    StateComparisonValueType m_comparisonValueType; // offset 0x2C, size 0x4, align 4
    float32 m_comparisonFixedValue; // offset 0x30, size 0x4, align 4
    StateValue m_comparisonStateValue; // offset 0x34, size 0x4, align 4
    CUtlString m_comparisonParamName; // offset 0x38, size 0x8, align 8
    AnimParamID m_comparisonParamID; // offset 0x40, size 0x4, align 4
    Comparison_t m_comparisonOp; // offset 0x44, size 0x4, align 4
};
