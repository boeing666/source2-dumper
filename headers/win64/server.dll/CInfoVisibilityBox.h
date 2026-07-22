#pragma once

class CInfoVisibilityBox : public CBaseEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4AC]; // offset 0x0
    int32 m_nMode; // offset 0x4AC, size 0x4, align 4
    Vector m_vBoxSize; // offset 0x4B0, size 0xC, align 4
    bool m_bEnabled; // offset 0x4BC, size 0x1, align 1
    char _pad_04BD[0x3]; // offset 0x4BD
};
