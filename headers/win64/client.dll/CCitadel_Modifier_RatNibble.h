#pragma once

class CCitadel_Modifier_RatNibble : public CCitadelModifier /*0x0*/  // sizeof 0x590, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecRatParticles; // offset 0x140, size 0x18, align 8
    char _pad_0158[0x4]; // offset 0x158
    GameTime_t m_flDestroyTime; // offset 0x15C, size 0x4, align 255
    char _pad_0160[0x4]; // offset 0x160
    int32 m_nRatsRemaining; // offset 0x164, size 0x4, align 4
    int32 m_nArmorStacks; // offset 0x168, size 0x4, align 4
    char _pad_016C[0x424]; // offset 0x16C
};
