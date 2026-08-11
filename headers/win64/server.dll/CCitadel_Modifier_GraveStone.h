#pragma once

class CCitadel_Modifier_GraveStone : public CCitadelModifierAura /*0x0*/  // sizeof 0x7B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x120]; // offset 0x0
    ParticleIndex_t m_nParticleIndexAura; // offset 0x120, size 0x4, align 255
    ParticleIndex_t m_nParticleIndex; // offset 0x124, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x128, size 0x4, align 255
    char _pad_012C[0x684]; // offset 0x12C
};
