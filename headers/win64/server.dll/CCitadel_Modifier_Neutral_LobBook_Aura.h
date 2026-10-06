#pragma once

class CCitadel_Modifier_Neutral_LobBook_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x188, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    ParticleIndex_t m_nRadiusParticle; // offset 0x180, size 0x4, align 255
    ParticleIndex_t m_nSwirlParticle; // offset 0x184, size 0x4, align 255
};
