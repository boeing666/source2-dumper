#pragma once

class CCitadel_Ability_Bookworm_KnightBarrier : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1A38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    ParticleIndex_t m_nCastParticleIndex; // offset 0x1A28, size 0x4, align 255
    int32 m_iPendingBonusTargets; // offset 0x1A2C, size 0x4, align 4
    char _pad_1A30[0x8]; // offset 0x1A30
};
