#pragma once

class CCitadel_Ability_Trappers_Bolo : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1558]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0x1558, size 0x4, align 4
    CHandle< CBaseEntity > m_hNextTarget; // offset 0x155C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // offset 0x1560, size 0x18, align 8
    int32 m_iBounces; // offset 0x1578, size 0x4, align 4
    bool m_bReturning; // offset 0x157C, size 0x1, align 1
    char _pad_157D[0x373]; // offset 0x157D
};
