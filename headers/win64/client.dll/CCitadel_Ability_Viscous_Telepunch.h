#pragma once

class CCitadel_Ability_Viscous_Telepunch : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1908, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x18D8]; // offset 0x0
    Vector m_vecTeleportPosition; // offset 0x18D8, size 0xC, align 4 | MNetworkEnable
    Vector m_vecTeleportPositionNormal; // offset 0x18E4, size 0xC, align 4 | MNetworkEnable
    ETelepunchState_t m_eTelepunchState; // offset 0x18F0, size 0x1, align 1 | MNetworkEnable
    char _pad_18F1[0x3]; // offset 0x18F1
    GameTime_t m_flNextStateTime; // offset 0x18F4, size 0x4, align 255 | MNetworkEnable
    char _pad_18F8[0x10]; // offset 0x18F8
};
