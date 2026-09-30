#pragma once

class CNmBodyGroupNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int16 m_nEnabledNodeIdx; // offset 0x18, size 0x2, align 2
    char _pad_001A[0x6]; // offset 0x1A
    CNmBodyGroupEvent m_event; // offset 0x20, size 0x30, align 8
};
