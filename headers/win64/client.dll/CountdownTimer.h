#pragma once

class CountdownTimer  // sizeof 0x18, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_duration; // offset 0x8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_timestamp; // offset 0xC, size 0x4, align 255 | MNetworkEnable
    float32 m_timescale; // offset 0x10, size 0x4, align 4 | MNetworkEnable
    WorldGroupId_t m_nWorldGroupId; // offset 0x14, size 0x4, align 4 | MNetworkEnable
};
