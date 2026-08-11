#pragma once

class CCSPlayer_PingServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    GameTime_t[5] m_flPlayerPingTokens; // offset 0x48, size 0x14, align 4
    CHandle< CPlayerPing > m_hPlayerPing; // offset 0x5C, size 0x4, align 4
};
