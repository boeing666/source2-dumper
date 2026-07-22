#pragma once

class C_EntityFlame : public C_BaseEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    CHandle< C_BaseEntity > m_hEntAttached; // offset 0x76C, size 0x4, align 4
    char _pad_0770[0x20]; // offset 0x770
    CHandle< C_BaseEntity > m_hOldAttached; // offset 0x790, size 0x4, align 4
    bool m_bCheapEffect; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x1B]; // offset 0x795
};
