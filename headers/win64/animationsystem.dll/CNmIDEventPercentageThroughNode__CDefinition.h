#pragma once

class CNmIDEventPercentageThroughNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nSourceStateNodeIdx; // offset 0x10, size 0x2, align 2
    char _pad_0012[0x2]; // offset 0x12
    CNmBitFlags m_eventConditionRules; // offset 0x14, size 0x4, align 4
    CGlobalSymbol m_eventID; // offset 0x18, size 0x8, align 8
};
