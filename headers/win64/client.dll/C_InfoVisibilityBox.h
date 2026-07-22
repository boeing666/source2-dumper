#pragma once

class C_InfoVisibilityBox : public C_BaseEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F4]; // offset 0x0
    int32 m_nMode; // offset 0x5F4, size 0x4, align 4 | MNetworkEnable
    Vector m_vBoxSize; // offset 0x5F8, size 0xC, align 4 | MNetworkEnable
    bool m_bEnabled; // offset 0x604, size 0x1, align 1 | MNetworkEnable
    char _pad_0605[0x3]; // offset 0x605
};
