#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenade : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hHitTroopers; // offset 0x16E0, size 0x18, align 8
    char _pad_16F8[0x4]; // offset 0x16F8
    ParticleIndex_t m_nBallParticle; // offset 0x16FC, size 0x4, align 255
    char _pad_1700[0x420]; // offset 0x1700
};
