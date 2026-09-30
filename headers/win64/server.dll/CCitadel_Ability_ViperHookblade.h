#pragma once

class CCitadel_Ability_ViperHookblade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHitList; // offset 0x14A0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecReturningHitList; // offset 0x14B8, size 0x18, align 8
    char _pad_14D0[0x630]; // offset 0x14D0
};
