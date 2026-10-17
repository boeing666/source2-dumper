#pragma once

class CNmGraphDocFloatMathNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    bool m_bReturnAbsoluteResult; // offset 0x108, size 0x1, align 1 | MPropertyDescription
    bool m_bReturnNegatedResult; // offset 0x109, size 0x1, align 1 | MPropertyDescription
    CNmFloatMathNode::Operator_t m_operator; // offset 0x10A, size 0x1, align 1
    char _pad_010B[0x1]; // offset 0x10B
    float32 m_flValueB; // offset 0x10C, size 0x4, align 4
};
