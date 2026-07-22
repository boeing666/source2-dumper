#pragma once

class C_InfoVisibilityBox : public C_BaseEntity /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x604]; // offset 0x0
    int32 m_nMode; // offset 0x604, size 0x4, align 4
    Vector m_vBoxSize; // offset 0x608, size 0xC, align 4
    bool m_bEnabled; // offset 0x614, size 0x1, align 1
    char _pad_0615[0x3]; // offset 0x615
};
