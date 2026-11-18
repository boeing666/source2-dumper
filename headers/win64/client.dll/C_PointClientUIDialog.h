#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC08]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0xC08, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xC0C, size 0x1, align 1
    char _pad_0C0D[0x3]; // offset 0xC0D
};
