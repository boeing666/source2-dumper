#pragma once

class CNmGraphDocTimeConditionNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    float32 m_flComparand; // offset 0x100, size 0x4, align 4
    CNmTimeConditionNode::ComparisonType_t m_type; // offset 0x104, size 0x1, align 1
    CNmTimeConditionNode::Operator_t m_operator; // offset 0x105, size 0x1, align 1
    char _pad_0106[0x2]; // offset 0x106
};
