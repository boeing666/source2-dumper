#pragma once

class CDOTA_Ability_DoomBringer_Devour : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    bool m_bIsAltCastState; // offset 0x85B, size 0x1, align 1
    int32 ability_bonus_level; // offset 0x85C, size 0x4, align 4
    CUtlVector< CHandle< CDOTABaseAbility > > m_vecAbilityDraftStolenAbilities; // offset 0x860, size 0x18, align 8
};
