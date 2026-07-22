#pragma once

class CNmCachedBoolNode::CDefinition : public CNmBoolValueNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    NmCachedValueMode_t m_mode; // offset 0xC, size 0x4, align 4
};
