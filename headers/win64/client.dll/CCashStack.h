#pragma once

class CCashStack : public C_BaseModelEntity /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    int32 m_nCashStackValue; // offset 0x1098, size 0x4, align 4
    char _pad_109C[0x4]; // offset 0x109C
};
