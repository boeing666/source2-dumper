#pragma once

class CCitadel_Ability_Burrow : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1428, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    bool m_bInGround; // offset 0x13F0, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_13F1[0x3]; // offset 0x13F1
    GameTime_t m_flLastDamageTime; // offset 0x13F4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_SpinEndTime; // offset 0x13F8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_13FC[0x2C]; // offset 0x13FC
};
