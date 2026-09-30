#pragma once

class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2F80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1FA0]; // offset 0x0
    bool m_bZoomed; // offset 0x1FA0, size 0x1, align 1
    bool m_bAirCast; // offset 0x1FA1, size 0x1, align 1
    char _pad_1FA2[0x6]; // offset 0x1FA2
    CCitadelAbilityBeam_t m_beam; // offset 0x1FA8, size 0xFC8, align 255
    char _pad_2F70[0x4]; // offset 0x2F70
    float32 m_flAngleBetweenTrace; // offset 0x2F74, size 0x4, align 4
    int32 m_nTotalDamage; // offset 0x2F78, size 0x4, align 4
    GameTime_t m_flNextDamageTime; // offset 0x2F7C, size 0x4, align 255
};
