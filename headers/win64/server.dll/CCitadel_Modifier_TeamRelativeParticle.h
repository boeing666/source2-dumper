#pragma once

class CCitadel_Modifier_TeamRelativeParticle : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    ParticleIndex_t m_nParentViewParticle; // offset 0x140, size 0x4, align 255
    ParticleIndex_t m_nOtherPlayerViewParticle; // offset 0x144, size 0x4, align 255
};
