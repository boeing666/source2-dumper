#pragma once

class CCitadel_Ability_Wrecker_BoulderGrenade : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitTroopers; // offset 0x14A0, size 0x18, align 8
    char _pad_14B8[0x4]; // offset 0x14B8
    ParticleIndex_t m_nBallParticle; // offset 0x14BC, size 0x4, align 255
    char _pad_14C0[0x420]; // offset 0x14C0
};
