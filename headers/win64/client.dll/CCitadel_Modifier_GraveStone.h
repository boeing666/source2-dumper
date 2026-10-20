#pragma once

class CCitadel_Modifier_GraveStone : public CCitadelModifierAura /*0x0*/  // sizeof 0xAA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A8]; // offset 0x0
    ParticleIndex_t m_nParticleIndexAura; // offset 0x1A8, size 0x4, align 255
    ParticleIndex_t m_nParticleIndex; // offset 0x1AC, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1B0, size 0x4, align 255
    char _pad_01B4[0x8F4]; // offset 0x1B4
};
