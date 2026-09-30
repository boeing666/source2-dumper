#pragma once

class CCitadel_Modifier_Bookworm_AOEMagic_AreaModifier : public CCitadelModifier /*0x0*/  // sizeof 0x620, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_hAOEWarningParticle; // offset 0x140, size 0x4, align 255
    char _pad_0144[0x4D4]; // offset 0x144
    ParticleIndex_t m_nCastParticleIndex; // offset 0x618, size 0x4, align 255
    char _pad_061C[0x4]; // offset 0x61C
};
