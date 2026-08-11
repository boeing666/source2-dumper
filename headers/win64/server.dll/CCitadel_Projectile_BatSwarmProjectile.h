#pragma once

class CCitadel_Projectile_BatSwarmProjectile : public CCitadelTrackedProjectile /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x91C]; // offset 0x0
    Vector m_vecTargetVelocity; // offset 0x91C, size 0xC, align 4
    Vector m_vecLastVelocity; // offset 0x928, size 0xC, align 4
    GameTime_t m_SpawnTime; // offset 0x934, size 0x4, align 255
    char _pad_0938[0x10]; // offset 0x938
};
