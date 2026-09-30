#pragma once

class CCitadel_Modifier_Neutral_LobBook_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    ParticleIndex_t m_nRadiusParticle; // offset 0x178, size 0x4, align 255
    ParticleIndex_t m_nSwirlParticle; // offset 0x17C, size 0x4, align 255
};
