#pragma once

class C_DOTA_Ability_DoomBringer_Devour : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    bool m_bIsAltCastState; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    int32 ability_bonus_level; // offset 0x6AC, size 0x4, align 4
    CUtlVector< CHandle< C_DOTABaseAbility > > m_vecAbilityDraftStolenAbilities; // offset 0x6B0, size 0x18, align 8
};
