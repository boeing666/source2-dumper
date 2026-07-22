#pragma once

class CNmBodyGroupNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    int16 m_nEnabledNodeIdx; // offset 0xC, size 0x2, align 2
    char _pad_000E[0x2]; // offset 0xE
    CNmBodyGroupEvent m_event; // offset 0x10, size 0x30, align 8
};
