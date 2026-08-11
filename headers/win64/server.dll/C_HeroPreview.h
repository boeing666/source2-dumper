#pragma once

class C_HeroPreview : public CBaseEntity /*0x0*/  // sizeof 0x4E0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CCitadelHeroComponent m_CCitadelHeroComponent; // offset 0x4A0, size 0x40, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
};
