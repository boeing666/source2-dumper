#pragma once

class CCitadel_Ability_Spinning_Blade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1390, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1370]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecOutgoingHits; // offset 0x1370, size 0x18, align 8
    CHandle< CCitadelProjectile > m_hActiveProjectile; // offset 0x1388, size 0x4, align 4
    char _pad_138C[0x4]; // offset 0x138C
};
