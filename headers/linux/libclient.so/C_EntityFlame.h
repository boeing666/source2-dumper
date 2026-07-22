#pragma once

class C_EntityFlame : public C_BaseEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    CHandle< C_BaseEntity > m_hEntAttached; // offset 0x77C, size 0x4, align 4
    char _pad_0780[0x20]; // offset 0x780
    CHandle< C_BaseEntity > m_hOldAttached; // offset 0x7A0, size 0x4, align 4
    bool m_bCheapEffect; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x1B]; // offset 0x7A5
};
