#pragma once

class C_EntityFlame : public C_BaseEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CHandle< C_BaseEntity > m_hEntAttached; // offset 0x5F0, size 0x4, align 4 | MNetworkEnable
    char _pad_05F4[0x24]; // offset 0x5F4
    CHandle< C_BaseEntity > m_hOldAttached; // offset 0x618, size 0x4, align 4
    bool m_bCheapEffect; // offset 0x61C, size 0x1, align 1 | MNetworkEnable
    char _pad_061D[0x1B]; // offset 0x61D
};
