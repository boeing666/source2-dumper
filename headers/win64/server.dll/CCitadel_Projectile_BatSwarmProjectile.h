#pragma once

class CCitadel_Projectile_BatSwarmProjectile : public CCitadelTrackedProjectile /*0x0*/  // sizeof 0xA80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    Vector m_vecTargetVelocity; // offset 0xA54, size 0xC, align 4
    Vector m_vecLastVelocity; // offset 0xA60, size 0xC, align 4
    GameTime_t m_SpawnTime; // offset 0xA6C, size 0x4, align 255
    char _pad_0A70[0x10]; // offset 0xA70
};
