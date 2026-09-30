#pragma once

class CCitadel_Ability_Dust_Storm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CHandle< CCitadel_Ability_Spinning_Blade > m_hSpinningBladeAbility; // offset 0x14A0, size 0x4, align 4
    char _pad_14A4[0x4]; // offset 0x14A4
    CUtlVector< CHandle< CBaseEntity > > m_vTargets; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x160]; // offset 0x14C0
};
