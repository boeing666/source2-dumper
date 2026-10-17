#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0xD30, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xD34, size 0x1, align 1
    char _pad_0D35[0x3]; // offset 0xD35
};
