#pragma once

class CCitadel_Ability_BaseHeldItem : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1568, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1558]; // offset 0x0
    CHandle< CBaseEntity > m_hProjectile; // offset 0x1558, size 0x4, align 4
    GameTime_t m_tFirstPickupTime; // offset 0x155C, size 0x4, align 255
    GameTime_t m_tLastPickupTime; // offset 0x1560, size 0x4, align 255
    char _pad_1564[0x4]; // offset 0x1564
};
