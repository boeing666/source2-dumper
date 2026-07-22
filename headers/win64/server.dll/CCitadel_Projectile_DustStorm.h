#pragma once

class CCitadel_Projectile_DustStorm : public CCitadelProjectile /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    int32 m_cTicksNoMovement; // offset 0x860, size 0x4, align 4
    CHandle< CCitadel_Ability_Dust_Storm > m_DustStormAbility; // offset 0x864, size 0x4, align 4
    char _pad_0868[0x400]; // offset 0x868
};
