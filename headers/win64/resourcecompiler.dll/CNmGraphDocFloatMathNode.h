#pragma once

class CNmGraphDocFloatMathNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    bool m_bReturnAbsoluteResult; // offset 0x100, size 0x1, align 1 | MPropertyDescription
    bool m_bReturnNegatedResult; // offset 0x101, size 0x1, align 1 | MPropertyDescription
    CNmFloatMathNode::Operator_t m_operator; // offset 0x102, size 0x1, align 1
    char _pad_0103[0x1]; // offset 0x103
    float32 m_flValueB; // offset 0x104, size 0x4, align 4
};
