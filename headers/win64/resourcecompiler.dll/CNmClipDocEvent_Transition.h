#pragma once

class CNmClipDocEvent_Transition : public CNmClipDocEvent /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    NmTransitionRule_t m_rule; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
    CUtlString m_optionalID; // offset 0x18, size 0x8, align 8
};
