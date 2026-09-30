#pragma once

class CCitadel_Ability_CardToss : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2390, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    int32 m_nPreviousMaxCharges; // offset 0x14A0, size 0x4, align 4
    char _pad_14A4[0x4]; // offset 0x14A4
    CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecCards; // offset 0x14A8, size 0x18, align 8
    CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecFlyingCards; // offset 0x14C0, size 0x18, align 8
    CUtlVector< EWraithCardType > m_vCardList; // offset 0x14D8, size 0x18, align 8
    char _pad_14F0[0xE88]; // offset 0x14F0
    bool m_bCardIsFlying; // offset 0x2378, size 0x1, align 1
    char _pad_2379[0x17]; // offset 0x2379
};
