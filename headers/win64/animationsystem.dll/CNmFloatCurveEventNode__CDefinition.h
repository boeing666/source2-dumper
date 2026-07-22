#pragma once

class CNmFloatCurveEventNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CGlobalSymbol m_eventID; // offset 0x10, size 0x8, align 8
    int16 m_nDefaultNodeIdx; // offset 0x18, size 0x2, align 2
    char _pad_001A[0x2]; // offset 0x1A
    float32 m_flDefaultValue; // offset 0x1C, size 0x4, align 4
    CNmBitFlags m_eventConditionRules; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
