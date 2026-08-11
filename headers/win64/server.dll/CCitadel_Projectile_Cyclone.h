#pragma once

class CCitadel_Projectile_Cyclone : public CCitadelProjectile /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CHandle< CCitadel_Ability_Thumper_4 > m_CycloneAbility; // offset 0x860, size 0x4, align 4
    char _pad_0864[0x284]; // offset 0x864
};
