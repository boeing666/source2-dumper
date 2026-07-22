#pragma once

class CCitadelAutoScaledTime  // sizeof 0x18, align 0xFF [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_flTime; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    char _pad_000C[0xC]; // offset 0xC
};
