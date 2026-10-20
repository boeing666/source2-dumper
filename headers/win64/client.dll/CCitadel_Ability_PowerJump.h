#pragma once

class CCitadel_Ability_PowerJump : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x19B0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E4]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x16E4, size 0x4, align 255
    bool m_bAirRaiding; // offset 0x16E8, size 0x1, align 1
    char _pad_16E9[0x2C7]; // offset 0x16E9
};
