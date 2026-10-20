#pragma once

class CCitadel_Ability_Bookworm_KnightBarrier : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C60]; // offset 0x0
    ParticleIndex_t m_nCastParticleIndex; // offset 0x1C60, size 0x4, align 255
    int32 m_iPendingBonusTargets; // offset 0x1C64, size 0x4, align 4
    char _pad_1C68[0x8]; // offset 0x1C68
};
