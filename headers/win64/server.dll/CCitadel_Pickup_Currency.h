#pragma once

class CCitadel_Pickup_Currency : public CCitadel_Pickup /*0x0*/  // sizeof 0xB30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB20]; // offset 0x0
    int32 m_nCurrencyAmount; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0xC]; // offset 0xB24
};
