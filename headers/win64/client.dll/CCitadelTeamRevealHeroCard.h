#pragma once

class CCitadelTeamRevealHeroCard : public C_DynamicProp /*0x0*/  // sizeof 0xF00, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames}
{
public:
    char _pad_0000[0xEF4]; // offset 0x0
    HeroID_t m_unHeroID; // offset 0xEF4, size 0x4, align 255 | MNetworkEnable
    char _pad_0EF8[0x8]; // offset 0xEF8
};
