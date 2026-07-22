#pragma once

class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C8]; // offset 0x0
    Vector m_vMin; // offset 0x4C8, size 0xC, align 4
    Vector m_vMax; // offset 0x4D4, size 0xC, align 4
};
