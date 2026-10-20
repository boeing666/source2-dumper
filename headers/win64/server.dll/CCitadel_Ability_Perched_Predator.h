#pragma once

class CCitadel_Ability_Perched_Predator : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1820, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CHandle< CBaseEntity > m_hActiveProjectile; // offset 0x1818, size 0x4, align 4
    char _pad_181C[0x4]; // offset 0x181C
};
