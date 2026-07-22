#pragma once

class CCitadelRecentDamage  // sizeof 0x18, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_flLastDamageTime; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flStartTime; // offset 0xC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flEndTime; // offset 0x10, size 0x4, align 255 | MNetworkEnable
    CHandle< C_BaseEntity > m_hPlayerEntToStore; // offset 0x14, size 0x4, align 4 | MNetworkEnable
};
