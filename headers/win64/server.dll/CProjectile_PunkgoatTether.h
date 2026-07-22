#pragma once

class CProjectile_PunkgoatTether : public CCitadelTrackedProjectile /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x890]; // offset 0x0
    ParticleIndex_t m_nRopeProjectileParticle; // offset 0x890, size 0x4, align 255
    char _pad_0894[0x4]; // offset 0x894
};
