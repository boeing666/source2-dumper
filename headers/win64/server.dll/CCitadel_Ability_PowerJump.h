#pragma once

class CCitadel_Ability_PowerJump : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1770, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x14A8, size 0x4, align 255
    bool m_bAirRaiding; // offset 0x14AC, size 0x1, align 1
    char _pad_14AD[0x2C3]; // offset 0x14AD
};
