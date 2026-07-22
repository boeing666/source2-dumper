#pragma once

class IntervalTimer  // sizeof 0x10, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_timestamp; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    WorldGroupId_t m_nWorldGroupId; // offset 0xC, size 0x4, align 4 | MNetworkEnable
};
