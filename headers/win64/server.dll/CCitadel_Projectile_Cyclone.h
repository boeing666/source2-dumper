#pragma once

class CCitadel_Projectile_Cyclone : public CCitadelProjectile /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    CHandle< CCitadel_Ability_Thumper_4 > m_CycloneAbility; // offset 0x968, size 0x4, align 4
    char _pad_096C[0x374]; // offset 0x96C
};
