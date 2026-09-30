#pragma once

class CCitadel_Ability_UltCombo : public CCitadelBaseAbility /*0x0*/  // sizeof 0x16D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hTargetComboModifier; // offset 0x14A0, size 0x18, align 8
    GameTime_t m_flLastAttackTime; // offset 0x14B8, size 0x4, align 255
    int32 m_nAttackNum; // offset 0x14BC, size 0x4, align 4
    char _pad_14C0[0x210]; // offset 0x14C0
    int32 m_iBonusHealth; // offset 0x16D0, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x16D4, size 0x4, align 4
};
