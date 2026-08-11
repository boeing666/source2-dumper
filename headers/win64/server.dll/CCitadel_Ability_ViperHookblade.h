#pragma once

class CCitadel_Ability_ViperHookblade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHitList; // offset 0xF70, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecReturningHitList; // offset 0xF88, size 0x18, align 8
    char _pad_0FA0[0x480]; // offset 0xFA0
};
