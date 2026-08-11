#pragma once

class CDOTA_Ability_Zuus_Thunder_Trail : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x580, size 0x18, align 8
    char _pad_0598[0x14]; // offset 0x598
    int32 damage; // offset 0x5AC, size 0x4, align 4
    int32 debuff_spell_amp_min; // offset 0x5B0, size 0x4, align 4
    int32 debuff_spell_amp_max; // offset 0x5B4, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x5B8, size 0xC, align 4
    int32 m_nMaxRange; // offset 0x5C4, size 0x4, align 4
};
