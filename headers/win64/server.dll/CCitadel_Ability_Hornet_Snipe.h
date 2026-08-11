#pragma once

class CCitadel_Ability_Hornet_Snipe : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x160C]; // offset 0x0
    GameTime_t m_flScopeStartTime; // offset 0x160C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_iSnipeKills; // offset 0x1610, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1614[0x14]; // offset 0x1614
};
