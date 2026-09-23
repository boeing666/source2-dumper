#pragma once

class C_PointClientUIDialog : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x1058, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    CHandle< C_BaseEntity > m_hActivator; // offset 0x1050, size 0x4, align 4
    bool m_bStartEnabled; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x3]; // offset 0x1055
};
