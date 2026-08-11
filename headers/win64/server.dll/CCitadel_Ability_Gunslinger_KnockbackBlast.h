#pragma once

class CCitadel_Ability_Gunslinger_KnockbackBlast : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1318, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vecKnockbackDirection; // offset 0xF70, size 0xC, align 4
    char _pad_0F7C[0x4]; // offset 0xF7C
    CUtlVector< CHandle< CBaseEntity > > m_vecKnockbackedUnits; // offset 0xF80, size 0x18, align 8
    char _pad_0F98[0x380]; // offset 0xF98
};
