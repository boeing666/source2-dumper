#pragma once

class CHandleTest : public CBaseEntity /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CHandle< CBaseEntity > m_Handle; // offset 0x4A0, size 0x4, align 4 | MNetworkEnable
    bool m_bSendHandle; // offset 0x4A4, size 0x1, align 1 | MNetworkEnable
    char _pad_04A5[0x3]; // offset 0x4A5
};
