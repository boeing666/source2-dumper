#pragma once

class CCitadel_Ability_Gunslinger_KnockbackBlast : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    Vector m_vecKnockbackDirection; // offset 0x11D8, size 0xC, align 4
    char _pad_11E4[0x4]; // offset 0x11E4
    CUtlVector< CHandle< C_BaseEntity > > m_vecKnockbackedUnits; // offset 0x11E8, size 0x18, align 8
    char _pad_1200[0x380]; // offset 0x1200
};
