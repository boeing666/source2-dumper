#pragma once

class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x830, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    bool m_bShotAnimPlayed; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    int32 m_nBulletCount; // offset 0x13C, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0x140, size 0x4, align 4
    CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // offset 0x144, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x6E4]; // offset 0x14C
};
