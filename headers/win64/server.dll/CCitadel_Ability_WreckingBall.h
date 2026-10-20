#pragma once

class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14BC]; // offset 0x0
    ParticleIndex_t m_nBallParticle; // offset 0x14BC, size 0x4, align 255
    ParticleIndex_t m_nCastCompleteParticle; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0x4]; // offset 0x14C4
    CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // offset 0x14C8, size 0x18, align 8
    char _pad_14E0[0x2C0]; // offset 0x14E0
    bool m_bHoldingBall; // offset 0x17A0, size 0x1, align 1
    char _pad_17A1[0x7]; // offset 0x17A1
};
