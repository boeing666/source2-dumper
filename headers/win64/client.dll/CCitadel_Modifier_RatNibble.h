#pragma once

class CCitadel_Modifier_RatNibble : public CCitadelModifier /*0x0*/  // sizeof 0x588, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecRatParticles; // offset 0x138, size 0x18, align 8
    char _pad_0150[0x4]; // offset 0x150
    GameTime_t m_flDestroyTime; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x4]; // offset 0x158
    int32 m_nRatsRemaining; // offset 0x15C, size 0x4, align 4
    int32 m_nArmorStacks; // offset 0x160, size 0x4, align 4
    char _pad_0164[0x424]; // offset 0x164
};
