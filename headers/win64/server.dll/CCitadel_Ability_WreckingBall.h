#pragma once

class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14B4]; // offset 0x0
    ParticleIndex_t m_nBallParticle; // offset 0x14B4, size 0x4, align 255
    ParticleIndex_t m_nCastCompleteParticle; // offset 0x14B8, size 0x4, align 255
    char _pad_14BC[0x4]; // offset 0x14BC
    CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // offset 0x14C0, size 0x18, align 8
    char _pad_14D8[0x2C0]; // offset 0x14D8
    bool m_bHoldingBall; // offset 0x1798, size 0x1, align 1
    char _pad_1799[0x7]; // offset 0x1799
};
