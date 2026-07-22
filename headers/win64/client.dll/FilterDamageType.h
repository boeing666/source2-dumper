#pragma once

class FilterDamageType : public CBaseFilter /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x628]; // offset 0x0
    int32 m_iDamageType; // offset 0x628, size 0x4, align 4
    char _pad_062C[0x4]; // offset 0x62C
};
