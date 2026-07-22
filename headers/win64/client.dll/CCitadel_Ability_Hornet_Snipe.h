#pragma once

class CCitadel_Ability_Hornet_Snipe : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x18A0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1874]; // offset 0x0
    GameTime_t m_flScopeStartTime; // offset 0x1874, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_iSnipeKills; // offset 0x1878, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_187C[0x24]; // offset 0x187C
};
