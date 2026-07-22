#pragma once

class CNmGraphDocTargetInfoNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CNmTargetInfoNode::Info_t m_infoType; // offset 0x100, size 0x4, align 4
    bool m_bIsWorldSpaceTarget; // offset 0x104, size 0x1, align 1
    char _pad_0105[0x3]; // offset 0x105
};
