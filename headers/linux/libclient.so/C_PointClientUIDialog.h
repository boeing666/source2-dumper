#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xDA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD98]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0xD98, size 0x4, align 4
    bool m_bStartEnabled; // offset 0xD9C, size 0x1, align 1
    char _pad_0D9D[0x3]; // offset 0xD9D
};
