#pragma once

class CCitadel_Ability_Lash_Ultimate : public CCitadelBaseLockonAbility /*0x0*/  // sizeof 0x1868, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1552]; // offset 0x0
    ELashGrappleState m_EGrappleState; // offset 0x1552, size 0x1, align 1 | MNetworkEnable
    char _pad_1553[0x1]; // offset 0x1553
    GameTime_t m_flStateEnterTime; // offset 0x1554, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flNextStateTime; // offset 0x1558, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flBoostEndTime; // offset 0x155C, size 0x4, align 255 | MNetworkEnable
    char _pad_1560[0x308]; // offset 0x1560
};
