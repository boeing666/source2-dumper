#pragma once

class CCitadel_Ability_Airheart_Rocketeer4 : public CCitadelBaseAbility /*0x0*/  // sizeof 0xFA0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vImpulseDirection; // offset 0xF70, size 0xC, align 4 | MNetworkEnable
    Vector m_vVelocity; // offset 0xF7C, size 0xC, align 4 | MNetworkEnable
    Vector m_vThrustingVelocity; // offset 0xF88, size 0xC, align 4 | MNetworkEnable
    GameTime_t m_tStateEnterTime; // offset 0xF94, size 0x4, align 255 | MNetworkEnable
    ERocketeerState m_eState; // offset 0xF98, size 0x1, align 1 | MNetworkEnable
    char _pad_0F99[0x7]; // offset 0xF99
};
