#pragma once

class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x12E0]; // offset 0x0
    ELashGrappleState m_EGrappleState; // offset 0x12E0, size 0x1, align 1 | MNetworkEnable
    char _pad_12E1[0x3]; // offset 0x12E1
    GameTime_t m_flStateEnterTime; // offset 0x12E4, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flNextStateTime; // offset 0x12E8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flBoostEndTime; // offset 0x12EC, size 0x4, align 255 | MNetworkEnable
    char _pad_12F0[0x320]; // offset 0x12F0
};
