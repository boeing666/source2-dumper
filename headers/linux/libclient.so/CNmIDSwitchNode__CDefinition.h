#pragma once

class CNmIDSwitchNode::CDefinition : public CNmIDValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nSwitchValueNodeIdx; // offset 0xA, size 0x2, align 2
    int16 m_nTrueValueNodeIdx; // offset 0xC, size 0x2, align 2
    int16 m_nFalseValueNodeIdx; // offset 0xE, size 0x2, align 2
    CGlobalSymbol m_falseValue; // offset 0x10, size 0x8, align 8
    CGlobalSymbol m_trueValue; // offset 0x18, size 0x8, align 8
};
