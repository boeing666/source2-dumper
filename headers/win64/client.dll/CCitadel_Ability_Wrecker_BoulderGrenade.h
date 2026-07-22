#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x14F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hHitTroopers; // offset 0x11D8, size 0x18, align 8
    char _pad_11F0[0x4]; // offset 0x11F0
    ParticleIndex_t m_nBallParticle; // offset 0x11F4, size 0x4, align 255
    char _pad_11F8[0x300]; // offset 0x11F8
};
