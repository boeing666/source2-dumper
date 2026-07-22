#pragma once

class CCitadel_Ability_Magician_BigBolt : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1670, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1660]; // offset 0x0
    GameTime_t m_flNextShootTime; // offset 0x1660, size 0x4, align 255
    int32 m_iBoltsFired; // offset 0x1664, size 0x4, align 4
    int32 m_iRemainingBolts; // offset 0x1668, size 0x4, align 4
    bool m_bPreppingShoot; // offset 0x166C, size 0x1, align 1
    char _pad_166D[0x3]; // offset 0x166D
};
