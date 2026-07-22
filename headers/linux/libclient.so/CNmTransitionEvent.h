#pragma once

class CNmTransitionEvent : public CNmEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    NmTransitionRule_t m_rule; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
    CGlobalSymbol m_ID; // offset 0x20, size 0x8, align 8
};
