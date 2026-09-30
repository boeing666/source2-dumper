#pragma once

class CCitadel_Ability_UltCombo : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x18F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    GameTime_t m_flLastAttackTime; // offset 0x16D8, size 0x4, align 255
    int32 m_nAttackNum; // offset 0x16DC, size 0x4, align 4
    char _pad_16E0[0x210]; // offset 0x16E0
    int32 m_iBonusHealth; // offset 0x18F0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x18F4, size 0x4, align 4
};
