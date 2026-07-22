#pragma once

class CAnimGraphDoc_ExpressionAction : public CAnimGraphDoc_Action /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlString m_paramName; // offset 0x28, size 0x8, align 8
    AnimParamID m_param; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlString m_expression; // offset 0x38, size 0x8, align 8
};
