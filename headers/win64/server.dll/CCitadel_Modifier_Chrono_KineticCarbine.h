#pragma once

class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x840, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bShotAnimPlayed; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x3]; // offset 0x149
    int32 m_nBulletCount; // offset 0x14C, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0x150, size 0x4, align 4
    CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // offset 0x154, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x6E4]; // offset 0x15C
};
