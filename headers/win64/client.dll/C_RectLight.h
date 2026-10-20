#pragma once

class C_RectLight : public C_BarnLight /*0x0*/  // sizeof 0xF28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF20]; // offset 0x0
    bool m_bShowLight; // offset 0xF20, size 0x1, align 1
    char _pad_0F21[0x7]; // offset 0xF21
};
