#pragma once

class CCitadel_Ability_Frank_Revive : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AA]; // offset 0x0
    bool m_bReviveIsActive; // offset 0x14AA, size 0x1, align 1
    char _pad_14AB[0x1]; // offset 0x14AB
    GameTime_t m_TimeOfDeath; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_TimeOfRevive; // offset 0x14B0, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x14B4, size 0x4, align 4
    char _pad_14B8[0x850]; // offset 0x14B8
};
