#pragma once

class FilterDamageType : public CBaseFilter /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    int32 m_iDamageType; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
};
