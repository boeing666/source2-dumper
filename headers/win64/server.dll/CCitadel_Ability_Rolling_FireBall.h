#pragma once

class CCitadel_Ability_Rolling_FireBall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CBaseEntity > m_hActiveProjectile; // offset 0x14A8, size 0x4, align 4
    char _pad_14AC[0xB4]; // offset 0x14AC
};
