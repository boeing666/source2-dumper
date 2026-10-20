#pragma once

class CCitadel_Ability_StormCloud : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1988, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    ParticleIndex_t m_nTargetingParticleIndex; // offset 0x14A8, size 0x4, align 255
    char _pad_14AC[0x4D4]; // offset 0x14AC
    float32 m_flFloat; // offset 0x1980, size 0x4, align 4
    int32 m_nLightningStrikesRemaining; // offset 0x1984, size 0x4, align 4
};
