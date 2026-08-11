#pragma once

class CCitadel_Modifier_Containment_Victim : public CCitadelModifier /*0x0*/  // sizeof 0x178, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flGoalHeight; // offset 0xD0, size 0x4, align 4
    float32 m_flFallRate; // offset 0xD4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0xD8, size 0x4, align 255
    ParticleIndex_t m_nFXIndexVictim; // offset 0xDC, size 0x4, align 255
    ParticleIndex_t m_nChainFxIndex; // offset 0xE0, size 0x4, align 255
    float32 m_flTetherRadius; // offset 0xE4, size 0x4, align 4
    Vector m_vecOrigin; // offset 0xE8, size 0xC, align 4
    char _pad_00F4[0x84]; // offset 0xF4
};
