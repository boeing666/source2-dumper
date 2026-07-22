#pragma once

class CNmGraphEventConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0xA, size 0x2, align 2
    CNmBitFlags m_eventConditionRules; // offset 0xC, size 0x4, align 4
    CUtlVectorFixedGrowable< CNmGraphEventConditionNode::Condition_t, 5 > m_conditions; // offset 0x10, size 0x68, align 8
};
