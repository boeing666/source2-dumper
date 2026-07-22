#pragma once

class CDOTA_Ability_Luna_MoonGlaive : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecMarkedUnits; // offset 0x580, size 0x18, align 8
    int32 m_iAttackIndex; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
    CUtlVector< sGlaiveInfo > m_GlaiveInfo; // offset 0x5A0, size 0x18, align 8
};
