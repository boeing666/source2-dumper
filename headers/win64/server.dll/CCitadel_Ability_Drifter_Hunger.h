#pragma once

class CCitadel_Ability_Drifter_Hunger : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecCurrentTargets; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x4]; // offset 0x14C0
    CUtlStringToken m_TypeIDDarkness; // offset 0x14C4, size 0x4, align 4
    char _pad_14C8[0x840]; // offset 0x14C8
};
