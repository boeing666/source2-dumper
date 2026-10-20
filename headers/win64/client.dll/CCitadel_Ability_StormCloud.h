#pragma once

class CCitadel_Ability_StormCloud : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x4D4]; // offset 0x16E4
    float32 m_flFloat; // offset 0x1BB8, size 0x4, align 4
    int32 m_nLightningStrikesRemaining; // offset 0x1BBC, size 0x4, align 4
    char _pad_1BC0[0x8]; // offset 0x1BC0
};
