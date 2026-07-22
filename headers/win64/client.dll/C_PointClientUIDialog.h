#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xFE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFE0]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0xFE0, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xFE4, size 0x1, align 1
    char _pad_0FE5[0x3]; // offset 0xFE5
};
