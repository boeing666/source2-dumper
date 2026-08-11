#pragma once

class CCitadel_Modifier_T3Boss_Phase1 : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    ParticleIndex_t m_nGroundParticle; // offset 0xD0, size 0x4, align 255
    ParticleIndex_t m_nShieldParticle; // offset 0xD4, size 0x4, align 255
};
