#pragma once

class CNmFloatMathNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdxA; // offset 0xA, size 0x2, align 2
    int16 m_nInputValueNodeIdxB; // offset 0xC, size 0x2, align 2
    bool m_bReturnAbsoluteResult; // offset 0xE, size 0x1, align 1
    bool m_bReturnNegatedResult; // offset 0xF, size 0x1, align 1
    CNmFloatMathNode::Operator_t m_operator; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 m_flValueB; // offset 0x14, size 0x4, align 4
};
