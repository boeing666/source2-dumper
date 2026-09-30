#pragma once

class CCitadel_Projectile_DustStorm : public CCitadelProjectile /*0x0*/  // sizeof 0xEF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x968]; // offset 0x0
    int32 m_cTicksNoMovement; // offset 0x968, size 0x4, align 4
    CHandle< CCitadel_Ability_Dust_Storm > m_DustStormAbility; // offset 0x96C, size 0x4, align 4
    char _pad_0970[0x580]; // offset 0x970
};
