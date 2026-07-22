#pragma once

class CNmConstBoolNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    bool m_bValue; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x5]; // offset 0xB
};
