#pragma once

class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x78C]; // offset 0x0
    Vector m_vMin; // offset 0x78C, size 0xC, align 4
    Vector m_vMax; // offset 0x798, size 0xC, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
