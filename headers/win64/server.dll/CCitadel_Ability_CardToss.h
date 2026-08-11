#pragma once

class CCitadel_Ability_CardToss : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A70, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_nPreviousMaxCharges; // offset 0xF70, size 0x4, align 4
    char _pad_0F74[0x4]; // offset 0xF74
    CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecCards; // offset 0xF78, size 0x18, align 8
    CUtlVector< CCitadel_Ability_CardToss::Card_t > m_vecFlyingCards; // offset 0xF90, size 0x18, align 8
    CUtlVector< EWraithCardType > m_vCardList; // offset 0xFA8, size 0x18, align 8
    char _pad_0FC0[0xA98]; // offset 0xFC0
    bool m_bCardIsFlying; // offset 0x1A58, size 0x1, align 1 | MNetworkEnable
    char _pad_1A59[0x17]; // offset 0x1A59
};
