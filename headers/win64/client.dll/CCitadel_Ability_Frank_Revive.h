#pragma once

class CCitadel_Ability_Frank_Revive : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E2]; // offset 0x0
    bool m_bReviveIsActive; // offset 0x16E2, size 0x1, align 1
    char _pad_16E3[0x1]; // offset 0x16E3
    GameTime_t m_TimeOfDeath; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_TimeOfRevive; // offset 0x16E8, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x16EC, size 0x4, align 4
    char _pad_16F0[0x850]; // offset 0x16F0
};
