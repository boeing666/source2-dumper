#pragma once

class CAnimGraphDoc_ParameterCondition : public CAnimGraphDoc_Condition /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlString m_paramName; // offset 0x28, size 0x8, align 8
    AnimParamID m_paramID; // offset 0x30, size 0x4, align 4
    Comparison_t m_comparisonOp; // offset 0x34, size 0x4, align 4
    CAnimVariant m_comparisonValue; // offset 0x38, size 0x11, align 1
    char _pad_0049[0x7]; // offset 0x49
    CUtlString m_comparisonString; // offset 0x50, size 0x8, align 8
};
