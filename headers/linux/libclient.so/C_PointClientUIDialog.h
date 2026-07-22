#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xC48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0xC40, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xC44, size 0x1, align 1
    char _pad_0C45[0x3]; // offset 0xC45
};
