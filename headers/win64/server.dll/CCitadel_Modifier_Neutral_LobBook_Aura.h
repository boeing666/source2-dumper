#pragma once

class CCitadel_Modifier_Neutral_LobBook_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x190, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    ParticleIndex_t m_nRadiusParticle; // offset 0x188, size 0x4, align 255
    ParticleIndex_t m_nSwirlParticle; // offset 0x18C, size 0x4, align 255
};
