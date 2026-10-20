#pragma once

class CCitadel_Projectile_BatSwarmProjectile : public CCitadelTrackedProjectile /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA5C]; // offset 0x0
    Vector m_vecTargetVelocity; // offset 0xA5C, size 0xC, align 4
    Vector m_vecLastVelocity; // offset 0xA68, size 0xC, align 4
    GameTime_t m_SpawnTime; // offset 0xA74, size 0x4, align 255
    char _pad_0A78[0x10]; // offset 0xA78
};
