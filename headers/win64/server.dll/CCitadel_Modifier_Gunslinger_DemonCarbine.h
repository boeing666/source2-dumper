#pragma once

class CCitadel_Modifier_Gunslinger_DemonCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x580, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    int32 m_nBulletCount; // offset 0x150, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0x154, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x424]; // offset 0x15C
};
