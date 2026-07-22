#pragma once

class C_EntityFlame : public C_BaseEntity /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CHandle< C_BaseEntity > m_hEntAttached; // offset 0x600, size 0x4, align 4
    char _pad_0604[0x24]; // offset 0x604
    CHandle< C_BaseEntity > m_hOldAttached; // offset 0x628, size 0x4, align 4
    bool m_bCheapEffect; // offset 0x62C, size 0x1, align 1
    char _pad_062D[0x1B]; // offset 0x62D
};
