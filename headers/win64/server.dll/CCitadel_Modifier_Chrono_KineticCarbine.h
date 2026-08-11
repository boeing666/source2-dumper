#pragma once

class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x5E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bShotAnimPlayed; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    int32 m_nBulletCount; // offset 0xD4, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0xD8, size 0x4, align 4
    CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // offset 0xDC, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0xE0, size 0x4, align 255
    char _pad_00E4[0x504]; // offset 0xE4
};
