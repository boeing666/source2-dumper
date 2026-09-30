#pragma once

class CCitadel_Ability_Magician_BigBolt : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D10]; // offset 0x0
    GameTime_t m_flNextShootTime; // offset 0x1D10, size 0x4, align 255
    int32 m_iBoltsFired; // offset 0x1D14, size 0x4, align 4
    int32 m_iRemainingBolts; // offset 0x1D18, size 0x4, align 4
    bool m_bPreppingShoot; // offset 0x1D1C, size 0x1, align 1
    char _pad_1D1D[0x3]; // offset 0x1D1D
};
