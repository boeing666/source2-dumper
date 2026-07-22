#pragma once

struct CitadelHeroSpawnData_t  // sizeof 0x10, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    HeroID_t m_nHeroID; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    HeroBadgeXP_t m_unHeroBadgeXP; // offset 0xC, size 0x4, align 255 | MNetworkEnable
};
