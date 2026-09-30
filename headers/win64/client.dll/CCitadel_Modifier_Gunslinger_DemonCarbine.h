#pragma once

class CCitadel_Modifier_Gunslinger_DemonCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x560, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    int32 m_nBulletCount; // offset 0x130, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0x134, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0x138, size 0x4, align 255
    char _pad_013C[0x424]; // offset 0x13C
};
