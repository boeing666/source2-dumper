#pragma once

class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1000, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0xFF0, size 0x4, align 4
    GameTime_t m_tFirstPickupTime; // offset 0xFF4, size 0x4, align 255
    GameTime_t m_tLastPickupTime; // offset 0xFF8, size 0x4, align 255
    char _pad_0FFC[0x4]; // offset 0xFFC
};
