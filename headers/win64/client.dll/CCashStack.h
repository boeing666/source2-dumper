#pragma once

class CCashStack : public C_BaseModelEntity /*0x0*/  // sizeof 0xFB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    int32 m_nCashStackValue; // offset 0xFB0, size 0x4, align 4
    char _pad_0FB4[0x4]; // offset 0xFB4
};
