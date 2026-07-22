#pragma once

class CNmClipDocEvent_ID : public CNmClipDocEvent /*0x0*/  // sizeof 0x20, align 0x8 [vtable trivial_dtor] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CGlobalSymbol m_ID; // offset 0x10, size 0x8, align 8
    CGlobalSymbol m_secondaryID; // offset 0x18, size 0x8, align 8 | MPropertyGroupName
};
