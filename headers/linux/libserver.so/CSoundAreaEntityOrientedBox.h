#pragma once

class CSoundAreaEntityOrientedBox : public CSoundAreaEntityBase /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x794]; // offset 0x0
    Vector m_vMin; // offset 0x794, size 0xC, align 4
    Vector m_vMax; // offset 0x7A0, size 0xC, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
};
