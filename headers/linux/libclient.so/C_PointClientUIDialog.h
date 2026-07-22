#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xF70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF68]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0xF68, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xF6C, size 0x1, align 1
    char _pad_0F6D[0x3]; // offset 0xF6D
};
