#pragma once

class CCitadel_Ability_Airheart_Rocketeer4 : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    Vector m_vImpulseDirection; // offset 0x11D8, size 0xC, align 4 | MNetworkEnable
    Vector m_vVelocity; // offset 0x11E4, size 0xC, align 4 | MNetworkEnable
    Vector m_vThrustingVelocity; // offset 0x11F0, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_tStateEnterTime; // offset 0x11FC, size 0x4, align 255 | MNetworkEnable
    ERocketeerState m_eState; // offset 0x1200, size 0x1, align 1 | MNetworkEnable
    char _pad_1201[0x7]; // offset 0x1201
};
