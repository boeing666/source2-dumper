#pragma once

class CCashStack : public C_BaseModelEntity /*0x0*/  // sizeof 0xF40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    int32 m_nCashStackValue; // offset 0xF38, size 0x4, align 4
    char _pad_0F3C[0x4]; // offset 0xF3C
};
