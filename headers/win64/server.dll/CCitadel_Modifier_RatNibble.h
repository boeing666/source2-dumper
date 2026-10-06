#pragma once

class CCitadel_Modifier_RatNibble : public CCitadelModifier /*0x0*/  // sizeof 0x5B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecRatParticles; // offset 0x148, size 0x18, align 8
    char _pad_0160[0x4]; // offset 0x160
    GameTime_t m_flDestroyTime; // offset 0x164, size 0x4, align 255
    char _pad_0168[0x20]; // offset 0x168
    int32 m_nRatsRemaining; // offset 0x188, size 0x4, align 4
    int32 m_nArmorStacks; // offset 0x18C, size 0x4, align 4
    char _pad_0190[0x420]; // offset 0x190
};
