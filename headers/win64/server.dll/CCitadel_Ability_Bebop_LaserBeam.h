#pragma once

class CCitadel_Ability_Bebop_LaserBeam : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2748, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1770]; // offset 0x0
    bool m_bZoomed; // offset 0x1770, size 0x1, align 1
    bool m_bAirCast; // offset 0x1771, size 0x1, align 1 | MNetworkEnable
    char _pad_1772[0x6]; // offset 0x1772
    CCitadelAbilityBeam_t m_beam; // offset 0x1778, size 0xFC0, align 255 | MNetworkEnable
    char _pad_2738[0x4]; // offset 0x2738
    float32 m_flAngleBetweenTrace; // offset 0x273C, size 0x4, align 4
    int32 m_nTotalDamage; // offset 0x2740, size 0x4, align 4
    GameTime_t m_flNextDamageTime; // offset 0x2744, size 0x4, align 255
};
