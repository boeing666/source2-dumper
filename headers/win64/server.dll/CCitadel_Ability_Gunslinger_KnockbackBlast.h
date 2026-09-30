#pragma once

class CCitadel_Ability_Gunslinger_KnockbackBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1998, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    Vector m_vecKnockbackDirection; // offset 0x14A0, size 0xC, align 4
    char _pad_14AC[0x4]; // offset 0x14AC
    CUtlVector< CHandle< CBaseEntity > > m_vecKnockbackedUnits; // offset 0x14B0, size 0x18, align 8
    char _pad_14C8[0x4D0]; // offset 0x14C8
};
