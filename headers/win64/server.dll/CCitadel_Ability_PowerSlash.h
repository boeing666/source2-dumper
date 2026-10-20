#pragma once

class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1DE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D0]; // offset 0x0
    int32 m_nPowerLevel; // offset 0x14D0, size 0x4, align 4
    char _pad_14D4[0x4]; // offset 0x14D4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x14D8, size 0x18, align 8
    ParticleIndex_t m_nCastParticle; // offset 0x14F0, size 0x4, align 255
    char _pad_14F4[0x8F4]; // offset 0x14F4
};
