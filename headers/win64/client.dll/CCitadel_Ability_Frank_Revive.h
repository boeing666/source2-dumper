#pragma once

class CCitadel_Ability_Frank_Revive : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DA]; // offset 0x0
    bool m_bReviveIsActive; // offset 0x16DA, size 0x1, align 1
    char _pad_16DB[0x1]; // offset 0x16DB
    GameTime_t m_TimeOfDeath; // offset 0x16DC, size 0x4, align 255
    GameTime_t m_TimeOfRevive; // offset 0x16E0, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x16E4, size 0x4, align 4
    char _pad_16E8[0x850]; // offset 0x16E8
};
