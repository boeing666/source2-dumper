#pragma once

class CCitadel_Ability_Gunslinger_KnockbackBlast : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    Vector m_vecKnockbackDirection; // offset 0x16D8, size 0xC, align 4
    char _pad_16E4[0x4]; // offset 0x16E4
    CUtlVector< CHandle< C_BaseEntity > > m_vecKnockbackedUnits; // offset 0x16E8, size 0x18, align 8
    char _pad_1700[0x4D0]; // offset 0x1700
};
