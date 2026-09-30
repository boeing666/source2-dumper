#pragma once

class CNmIDEvent : public CNmEvent /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_ID; // offset 0x18, size 0x8, align 8
    CGlobalSymbol m_secondaryID; // offset 0x20, size 0x8, align 8
};
