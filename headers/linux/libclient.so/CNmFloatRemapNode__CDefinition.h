#pragma once

class CNmFloatRemapNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    CNmFloatRemapNode::RemapRange_t m_inputRange; // offset 0xC, size 0x8, align 4
    CNmFloatRemapNode::RemapRange_t m_outputRange; // offset 0x14, size 0x8, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
