#pragma once

class CCitadel_Modifier_GraveStone : public CCitadelModifierAura /*0x0*/  // sizeof 0xA98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x198]; // offset 0x0
    ParticleIndex_t m_nParticleIndexAura; // offset 0x198, size 0x4, align 255
    ParticleIndex_t m_nParticleIndex; // offset 0x19C, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x1A0, size 0x4, align 255
    char _pad_01A4[0x8F4]; // offset 0x1A4
};
