#pragma once

class CCitadel_Ability_Bookworm_KnightBarrier : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x15D8]; // offset 0x0
    ParticleIndex_t m_nCastParticleIndex; // offset 0x15D8, size 0x4, align 255
    int32 m_iPendingBonusTargets; // offset 0x15DC, size 0x4, align 4
    char _pad_15E0[0x8]; // offset 0x15E0
};
