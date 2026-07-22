#pragma once

class CInfoVisibilityBox : public CBaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x78C]; // offset 0x0
    int32 m_nMode; // offset 0x78C, size 0x4, align 4
    Vector m_vBoxSize; // offset 0x790, size 0xC, align 4
    bool m_bEnabled; // offset 0x79C, size 0x1, align 1
    char _pad_079D[0x3]; // offset 0x79D
};
