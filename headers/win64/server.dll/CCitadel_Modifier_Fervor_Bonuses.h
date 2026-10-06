#pragma once

class CCitadel_Modifier_Fervor_Bonuses : public CCitadelModifier /*0x0*/  // sizeof 0x200, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    ParticleIndex_t m_nBonusesParticle; // offset 0x148, size 0x4, align 255
    char _pad_014C[0xB4]; // offset 0x14C
};
