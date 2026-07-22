#pragma once

class CNmFootEventConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0x10, size 0x2, align 2
    NmFootPhaseCondition_t m_phaseCondition; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
    CNmBitFlags m_eventConditionRules; // offset 0x14, size 0x4, align 4
};
