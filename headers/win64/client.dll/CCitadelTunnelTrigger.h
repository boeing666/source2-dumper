#pragma once

class CCitadelTunnelTrigger : public CCitadelSpeedBoostTrigger /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA80]; // offset 0x0
    bool m_bKillWhenNotTiny; // offset 0xA80, size 0x1, align 1
    char _pad_0A81[0x7]; // offset 0xA81
};
