#pragma once

class C_HandleTest : public C_BaseEntity /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CHandle< C_BaseEntity > m_Handle; // offset 0x5F0, size 0x4, align 4 | MNetworkEnable
    bool m_bSendHandle; // offset 0x5F4, size 0x1, align 1 | MNetworkEnable
    char _pad_05F5[0x3]; // offset 0x5F5
};
