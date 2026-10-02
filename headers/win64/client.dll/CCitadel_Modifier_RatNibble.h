#pragma once

class CCitadel_Modifier_RatNibble : public CCitadelModifier /*0x0*/  // sizeof 0x580, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecRatParticles; // offset 0x130, size 0x18, align 8
    char _pad_0148[0x4]; // offset 0x148
    GameTime_t m_flDestroyTime; // offset 0x14C, size 0x4, align 255
    char _pad_0150[0x4]; // offset 0x150
    int32 m_nRatsRemaining; // offset 0x154, size 0x4, align 4
    int32 m_nArmorStacks; // offset 0x158, size 0x4, align 4
    char _pad_015C[0x424]; // offset 0x15C
};
