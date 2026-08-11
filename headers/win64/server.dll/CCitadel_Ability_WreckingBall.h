#pragma once

class CCitadel_Ability_WreckingBall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF84]; // offset 0x0
    ParticleIndex_t m_nBallParticle; // offset 0xF84, size 0x4, align 255
    ParticleIndex_t m_nCastCompleteParticle; // offset 0xF88, size 0x4, align 255
    char _pad_0F8C[0x4]; // offset 0xF8C
    CUtlVector< CHandle< CBaseEntity > > m_vecTargetsHit; // offset 0xF90, size 0x18, align 8
    char _pad_0FA8[0x200]; // offset 0xFA8
    bool m_bHoldingBall; // offset 0x11A8, size 0x1, align 1 | MNetworkEnable
    char _pad_11A9[0x7]; // offset 0x11A9
};
