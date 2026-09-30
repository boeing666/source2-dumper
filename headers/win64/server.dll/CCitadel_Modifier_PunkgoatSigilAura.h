#pragma once

class CCitadel_Modifier_PunkgoatSigilAura : public CCitadelModifierAura /*0x0*/  // sizeof 0x9E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x178, size 0x18, align 8
    float32 m_flWaveRadius; // offset 0x190, size 0x4, align 4
    ParticleIndex_t m_nWaveParticleEnemy; // offset 0x194, size 0x4, align 255
    ParticleIndex_t m_nWaveParticleFriendly; // offset 0x198, size 0x4, align 255
    char _pad_019C[0x844]; // offset 0x19C
};
