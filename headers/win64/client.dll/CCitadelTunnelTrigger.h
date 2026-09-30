#pragma once

class CCitadelTunnelTrigger : public CCitadelSpeedBoostTrigger /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA0]; // offset 0x0
    bool m_bKillWhenNotTiny; // offset 0xCA0, size 0x1, align 1
    char _pad_0CA1[0x3]; // offset 0xCA1
    int32 m_nTunnelID; // offset 0xCA4, size 0x4, align 4
};
