#pragma once

class CCitadel_Ability_ViperHookblade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1D40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecOutgoingHitList; // offset 0x16E0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecReturningHitList; // offset 0x16F8, size 0x18, align 8
    char _pad_1710[0x630]; // offset 0x1710
};
