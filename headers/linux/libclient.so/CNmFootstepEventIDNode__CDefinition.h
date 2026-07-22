#pragma once

class CNmFootstepEventIDNode::CDefinition : public CNmIDValueNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0xA, size 0x2, align 2
    CNmBitFlags m_eventConditionRules; // offset 0xC, size 0x4, align 4
};
