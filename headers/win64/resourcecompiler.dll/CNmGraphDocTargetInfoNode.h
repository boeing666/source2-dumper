#pragma once

class CNmGraphDocTargetInfoNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x110, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CNmTargetInfoNode::Info_t m_infoType; // offset 0x108, size 0x4, align 4
    bool m_bIsWorldSpaceTarget; // offset 0x10C, size 0x1, align 1
    char _pad_010D[0x3]; // offset 0x10D
};
