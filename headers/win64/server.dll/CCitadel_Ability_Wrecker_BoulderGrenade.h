#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitTroopers; // offset 0xF70, size 0x18, align 8
    char _pad_0F88[0x4]; // offset 0xF88
    ParticleIndex_t m_nBallParticle; // offset 0xF8C, size 0x4, align 255
    char _pad_0F90[0x300]; // offset 0xF90
};
