#pragma once

class CCitadel_Ability_Frank_Revive : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A2]; // offset 0x0
    bool m_bReviveIsActive; // offset 0x14A2, size 0x1, align 1
    char _pad_14A3[0x1]; // offset 0x14A3
    GameTime_t m_TimeOfDeath; // offset 0x14A4, size 0x4, align 255
    GameTime_t m_TimeOfRevive; // offset 0x14A8, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x850]; // offset 0x14B0
};
