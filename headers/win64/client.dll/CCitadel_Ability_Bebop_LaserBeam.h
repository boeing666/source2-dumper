#pragma once

class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x2AB8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x19D8]; // offset 0x0
    bool m_bZoomed; // offset 0x19D8, size 0x1, align 1
    bool m_bAirCast; // offset 0x19D9, size 0x1, align 1 | MNetworkEnable
    char _pad_19DA[0x6]; // offset 0x19DA
    CCitadelAbilityBeam_t m_beam; // offset 0x19E0, size 0x10D0, align 255 | MNetworkEnable
    char _pad_2AB0[0x8]; // offset 0x2AB0
};
