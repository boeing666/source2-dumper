#pragma once

class C_Citadel_Pickup_Currency : public C_Citadel_Pickup /*0x0*/  // sizeof 0xDE8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    int32 m_nCurrencyAmount; // offset 0xDE0, size 0x4, align 4 | MNetworkEnable
    char _pad_0DE4[0x4]; // offset 0xDE4
};
