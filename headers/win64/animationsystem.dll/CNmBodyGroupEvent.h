#pragma once

class CNmBodyGroupEvent : public CNmEvent /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_groupName; // offset 0x20, size 0x8, align 8
    int32 m_nGroupValue; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
