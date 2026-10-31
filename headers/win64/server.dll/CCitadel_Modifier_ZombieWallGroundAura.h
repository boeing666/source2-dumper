#pragma once

class CCitadel_Modifier_ZombieWallGroundAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x468, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    ParticleIndex_t m_WallWarningParticle; // offset 0x188, size 0x4, align 255
    char _pad_018C[0x2DC]; // offset 0x18C
};
