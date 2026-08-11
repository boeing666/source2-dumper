#pragma once

class CCitadel_Ability_Dust_Storm : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1090, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CHandle< CCitadel_Ability_Spinning_Blade > m_hSpinningBladeAbility; // offset 0xF70, size 0x4, align 4
    char _pad_0F74[0x4]; // offset 0xF74
    CUtlVector< CHandle< CBaseEntity > > m_vTargets; // offset 0xF78, size 0x18, align 8
    char _pad_0F90[0x100]; // offset 0xF90
};
