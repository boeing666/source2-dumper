#pragma once

class C_HeroPreview : public C_BaseEntity /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x5F0, size 0x40, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
};
