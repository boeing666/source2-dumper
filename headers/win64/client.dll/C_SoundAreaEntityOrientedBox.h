#pragma once

class C_SoundAreaEntityOrientedBox : public C_SoundAreaEntityBase /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x618]; // offset 0x0
    Vector m_vMin; // offset 0x618, size 0xC, align 4
    Vector m_vMax; // offset 0x624, size 0xC, align 4
};
