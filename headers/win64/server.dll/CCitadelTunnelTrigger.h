#pragma once

class CCitadelTunnelTrigger : public CCitadelSpeedBoostTrigger /*0x0*/  // sizeof 0xA00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F9]; // offset 0x0
    bool m_bKillWhenNotTiny; // offset 0x9F9, size 0x1, align 1
    char _pad_09FA[0x2]; // offset 0x9FA
    int32 m_nTunnelID; // offset 0x9FC, size 0x4, align 4
};
