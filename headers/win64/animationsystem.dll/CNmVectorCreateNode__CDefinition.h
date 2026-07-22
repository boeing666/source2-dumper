#pragma once

class CNmVectorCreateNode::CDefinition : public CNmVectorValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_inputVectorValueNodeIdx; // offset 0x10, size 0x2, align 2
    int16 m_inputValueXNodeIdx; // offset 0x12, size 0x2, align 2
    int16 m_inputValueYNodeIdx; // offset 0x14, size 0x2, align 2
    int16 m_inputValueZNodeIdx; // offset 0x16, size 0x2, align 2
};
