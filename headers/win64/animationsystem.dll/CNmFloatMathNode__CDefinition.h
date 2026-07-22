#pragma once

class CNmFloatMathNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nInputValueNodeIdxA; // offset 0x10, size 0x2, align 2
    int16 m_nInputValueNodeIdxB; // offset 0x12, size 0x2, align 2
    bool m_bReturnAbsoluteResult; // offset 0x14, size 0x1, align 1
    bool m_bReturnNegatedResult; // offset 0x15, size 0x1, align 1
    CNmFloatMathNode::Operator_t m_operator; // offset 0x16, size 0x1, align 1
    char _pad_0017[0x1]; // offset 0x17
    float32 m_flValueB; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
