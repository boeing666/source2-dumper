#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitTroopers; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x4]; // offset 0x14C0
    ParticleIndex_t m_nBallParticle; // offset 0x14C4, size 0x4, align 255
    char _pad_14C8[0x420]; // offset 0x14C8
};
