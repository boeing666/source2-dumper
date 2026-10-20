#pragma once

class CCitadel_Modifier_Artist_Pillar_AreaModifier : public CCitadelModifier /*0x0*/  // sizeof 0x6E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    ParticleIndex_t m_hAOEWarningParticle; // offset 0x150, size 0x4, align 255
    char _pad_0154[0x584]; // offset 0x154
    ParticleIndex_t m_nCastParticleIndex; // offset 0x6D8, size 0x4, align 255
    char _pad_06DC[0x4]; // offset 0x6DC
};
