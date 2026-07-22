#pragma once

class CDOTA_Ability_DoomBringer_Devour : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    bool m_bIsAltCastState; // offset 0x580, size 0x1, align 1
    char _pad_0581[0x3]; // offset 0x581
    int32 ability_bonus_level; // offset 0x584, size 0x4, align 4
    CUtlVector< CHandle< CDOTABaseAbility > > m_vecAbilityDraftStolenAbilities; // offset 0x588, size 0x18, align 8
};
