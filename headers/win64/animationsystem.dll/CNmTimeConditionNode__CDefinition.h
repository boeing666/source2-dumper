#pragma once

class CNmTimeConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_sourceStateNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_nInputValueNodeIdx; // offset 0x12, size 0x2, align 2
    float32 m_flComparand; // offset 0x14, size 0x4, align 4
    CNmTimeConditionNode::ComparisonType_t m_type; // offset 0x18, size 0x1, align 1
    CNmTimeConditionNode::Operator_t m_operator; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x6]; // offset 0x1A
};
