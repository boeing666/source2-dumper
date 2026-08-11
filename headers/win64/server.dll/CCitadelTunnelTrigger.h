#pragma once

class CCitadelTunnelTrigger : public CCitadelSpeedBoostTrigger /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E9]; // offset 0x0
    bool m_bKillWhenNotTiny; // offset 0x8E9, size 0x1, align 1
    char _pad_08EA[0x6]; // offset 0x8EA
};
