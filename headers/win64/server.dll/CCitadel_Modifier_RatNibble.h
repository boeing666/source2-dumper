#pragma once

class CCitadel_Modifier_RatNibble : public CCitadelModifier /*0x0*/  // sizeof 0x5B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecRatParticles; // offset 0x150, size 0x18, align 8
    char _pad_0168[0x4]; // offset 0x168
    GameTime_t m_flDestroyTime; // offset 0x16C, size 0x4, align 255
    char _pad_0170[0x20]; // offset 0x170
    int32 m_nRatsRemaining; // offset 0x190, size 0x4, align 4
    int32 m_nArmorStacks; // offset 0x194, size 0x4, align 4
    char _pad_0198[0x420]; // offset 0x198
};
