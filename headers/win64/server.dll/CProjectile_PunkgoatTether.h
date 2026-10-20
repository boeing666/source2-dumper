#pragma once

class CProjectile_PunkgoatTether : public CCitadelTrackedProjectile /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9A0]; // offset 0x0
    ParticleIndex_t m_nRopeProjectileParticle; // offset 0x9A0, size 0x4, align 255
    char _pad_09A4[0x4]; // offset 0x9A4
};
