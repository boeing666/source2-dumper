#pragma once

class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x2020, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1708]; // offset 0x0
    int32 m_nPowerLevel; // offset 0x1708, size 0x4, align 4
    char _pad_170C[0x4]; // offset 0x170C
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x1710, size 0x18, align 8
    ParticleIndex_t m_nCastParticle; // offset 0x1728, size 0x4, align 255
    char _pad_172C[0x8F4]; // offset 0x172C
};
