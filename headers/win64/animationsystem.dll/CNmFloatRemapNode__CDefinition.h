#pragma once

class CNmFloatRemapNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0x10, size 0x2, align 2
    char _pad_0012[0x2]; // offset 0x12
    CNmFloatRemapNode::RemapRange_t m_inputRange; // offset 0x14, size 0x8, align 4
    CNmFloatRemapNode::RemapRange_t m_outputRange; // offset 0x1C, size 0x8, align 4
    char _pad_0024[0x4]; // offset 0x24
};
