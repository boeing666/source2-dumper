#pragma once

class CCitadel_Modifier_RatNibble : public CCitadelModifier /*0x0*/  // sizeof 0x5A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecRatParticles; // offset 0x140, size 0x18, align 8
    char _pad_0158[0x4]; // offset 0x158
    GameTime_t m_flDestroyTime; // offset 0x15C, size 0x4, align 255
    char _pad_0160[0x20]; // offset 0x160
    int32 m_nRatsRemaining; // offset 0x180, size 0x4, align 4
    int32 m_nArmorStacks; // offset 0x184, size 0x4, align 4
    char _pad_0188[0x420]; // offset 0x188
};
