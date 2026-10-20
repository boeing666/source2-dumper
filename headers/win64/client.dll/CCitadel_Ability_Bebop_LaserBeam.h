#pragma once

class CCitadel_Ability_Bebop_LaserBeam : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x32C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x21E0]; // offset 0x0
    bool m_bZoomed; // offset 0x21E0, size 0x1, align 1
    bool m_bAirCast; // offset 0x21E1, size 0x1, align 1
    char _pad_21E2[0x6]; // offset 0x21E2
    CCitadelAbilityBeam_t m_beam; // offset 0x21E8, size 0x10D8, align 255
    char _pad_32C0[0x8]; // offset 0x32C0
};
