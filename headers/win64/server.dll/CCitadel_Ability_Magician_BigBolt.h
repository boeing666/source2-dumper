#pragma once

class CCitadel_Ability_Magician_BigBolt : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x13F8]; // offset 0x0
    GameTime_t m_flNextShootTime; // offset 0x13F8, size 0x4, align 255
    int32 m_iBoltsFired; // offset 0x13FC, size 0x4, align 4
    int32 m_iRemainingBolts; // offset 0x1400, size 0x4, align 4
    bool m_bPreppingShoot; // offset 0x1404, size 0x1, align 1
    char _pad_1405[0x3]; // offset 0x1405
};
