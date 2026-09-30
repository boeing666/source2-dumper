#pragma once

class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x2018, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1700]; // offset 0x0
    int32 m_nPowerLevel; // offset 0x1700, size 0x4, align 4
    char _pad_1704[0x4]; // offset 0x1704
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x1708, size 0x18, align 8
    ParticleIndex_t m_nCastParticle; // offset 0x1720, size 0x4, align 255
    char _pad_1724[0x8F4]; // offset 0x1724
};
