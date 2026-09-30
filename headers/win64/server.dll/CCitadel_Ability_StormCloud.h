#pragma once

class CCitadel_Ability_StormCloud : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x14A0, size 0x4, align 255
    char _pad_14A4[0x4D4]; // offset 0x14A4
    float32 m_flFloat; // offset 0x1978, size 0x4, align 4
    int32 m_nLightningStrikesRemaining; // offset 0x197C, size 0x4, align 4
};
