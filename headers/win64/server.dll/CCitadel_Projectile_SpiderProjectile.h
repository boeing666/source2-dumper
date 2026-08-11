#pragma once

class CCitadel_Projectile_SpiderProjectile : public CCitadelProjectile /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    GameTime_t m_flNextRandomPositionTime; // offset 0x860, size 0x4, align 255
    char _pad_0864[0x394]; // offset 0x864
};
