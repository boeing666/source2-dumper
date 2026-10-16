#pragma once

class CCitadel_Modifier_Artist_DelayedAOERoot : public CCitadelModifier /*0x0*/  // sizeof 0x578, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    ParticleIndex_t m_hAOEWarningParticle; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x424]; // offset 0x14C
    ParticleIndex_t m_nCastParticleIndex; // offset 0x570, size 0x4, align 255
    char _pad_0574[0x4]; // offset 0x574
};
