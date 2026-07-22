#pragma once

class CDOTA_Ability_WitchDoctor_ParalyzingCask : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_iBounces; // offset 0x580, size 0x4, align 4
    int32 bounces; // offset 0x584, size 0x4, align 4
    int32 bounce_bonus_damage; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x4]; // offset 0x58C
    CUtlVector< CHandle< CBaseEntity > > m_vecHitHeroes; // offset 0x590, size 0x18, align 8
};
