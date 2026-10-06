#pragma once

class CCitadel_Modifier_Neutral_ShotCounter : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    int32 m_nShotCount; // offset 0x148, size 0x4, align 4
    float32 m_flCastDelay; // offset 0x14C, size 0x4, align 4
    ParticleIndex_t m_nCoreParticle; // offset 0x150, size 0x4, align 255
    char _pad_0154[0x4]; // offset 0x154
};
