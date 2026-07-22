#pragma once

class CNmFootEventConditionNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0xA, size 0x2, align 2
    NmFootPhaseCondition_t m_phaseCondition; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    CNmBitFlags m_eventConditionRules; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
