#pragma once

class C_RectLight : public C_BarnLight /*0x0*/  // sizeof 0xEC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xEC0]; // offset 0x0
    bool m_bShowLight; // offset 0xEC0, size 0x1, align 1
    char _pad_0EC1[0x7]; // offset 0xEC1
};
