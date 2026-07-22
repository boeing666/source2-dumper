#pragma once

class C_InfoVisibilityBox : public C_BaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    int32 m_nMode; // offset 0x780, size 0x4, align 4
    Vector m_vBoxSize; // offset 0x784, size 0xC, align 4
    bool m_bEnabled; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x7]; // offset 0x791
};
