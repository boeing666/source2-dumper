#pragma once

class CCitadel_Modifier_Chrono_KineticCarbine : public CCitadelModifier /*0x0*/  // sizeof 0x5D8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bShotAnimPlayed; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    int32 m_nBulletCount; // offset 0xC4, size 0x4, align 4
    float32 m_flElapsedPct; // offset 0xC8, size 0x4, align 4
    CHandle< CCitadelBulletTimeWarp > m_hTimeWarp; // offset 0xCC, size 0x4, align 4
    ParticleIndex_t m_nFullyChargedParticle; // offset 0xD0, size 0x4, align 255
    char _pad_00D4[0x504]; // offset 0xD4
};
