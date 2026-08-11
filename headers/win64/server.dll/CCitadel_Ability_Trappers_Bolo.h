#pragma once

class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1298, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0xFF0, size 0x4, align 4
    CHandle< CBaseEntity > m_hNextTarget; // offset 0xFF4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // offset 0xFF8, size 0x18, align 8
    int32 m_iBounces; // offset 0x1010, size 0x4, align 4
    bool m_bReturning; // offset 0x1014, size 0x1, align 1
    char _pad_1015[0x283]; // offset 0x1015
};
