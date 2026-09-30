#pragma once

class CCitadel_Ability_PowerJump : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x16DC, size 0x4, align 255
    bool m_bAirRaiding; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x2C7]; // offset 0x16E1
};
