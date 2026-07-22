#pragma once

class C_DOTA_Ability_DoomBringer_Devour : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bIsAltCastState; // offset 0x824, size 0x1, align 1
    char _pad_0825[0x3]; // offset 0x825
    int32 ability_bonus_level; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
    CUtlVector< CHandle< C_DOTABaseAbility > > m_vecAbilityDraftStolenAbilities; // offset 0x830, size 0x18, align 8
};
