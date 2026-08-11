#pragma once

class CCitadel_Ability_Viscous_Telepunch : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1670]; // offset 0x0
    Vector m_vecTeleportPosition; // offset 0x1670, size 0xC, align 4 | MNetworkEnable
    Vector m_vecTeleportPositionNormal; // offset 0x167C, size 0xC, align 4 | MNetworkEnable
    ETelepunchState_t m_eTelepunchState; // offset 0x1688, size 0x1, align 1 | MNetworkEnable
    char _pad_1689[0x3]; // offset 0x1689
    GameTime_t m_flNextStateTime; // offset 0x168C, size 0x4, align 255 | MNetworkEnable
    char _pad_1690[0x10]; // offset 0x1690
};
