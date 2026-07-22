#pragma once

class CNmConstVectorNode::CDefinition : public CNmVectorValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    Vector m_value; // offset 0x10, size 0xC, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
