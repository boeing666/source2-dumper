#pragma once

class CCitadel_Modifier_Containment_Victim : public CCitadelModifier /*0x0*/  // sizeof 0x220, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    float32 m_flGoalHeight; // offset 0x148, size 0x4, align 4
    float32 m_flFallRate; // offset 0x14C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x150, size 0x4, align 255
    ParticleIndex_t m_nFXIndexVictim; // offset 0x154, size 0x4, align 255
    ParticleIndex_t m_nChainFxIndex; // offset 0x158, size 0x4, align 255
    float32 m_flTetherRadius; // offset 0x15C, size 0x4, align 4
    VectorWS m_vecOrigin; // offset 0x160, size 0xC, align 4
    char _pad_016C[0xB4]; // offset 0x16C
};
