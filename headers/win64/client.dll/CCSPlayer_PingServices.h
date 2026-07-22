#pragma once

class CCSPlayer_PingServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CHandle< C_PlayerPing > m_hPlayerPing; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
