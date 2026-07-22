#pragma once

class CNmConstTargetNode::CDefinition : public CNmTargetValueNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x10 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNmTarget m_value; // offset 0x10, size 0x30, align 16
};
