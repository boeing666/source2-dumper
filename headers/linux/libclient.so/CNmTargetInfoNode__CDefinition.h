#pragma once

class CNmTargetInfoNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    CNmTargetInfoNode::Info_t m_infoType; // offset 0xC, size 0x4, align 4
    bool m_bIsWorldSpaceTarget; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
