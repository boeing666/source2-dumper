#pragma once

class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1DE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C8]; // offset 0x0
    int32 m_nPowerLevel; // offset 0x14C8, size 0x4, align 4
    char _pad_14CC[0x4]; // offset 0x14CC
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0x14D0, size 0x18, align 8
    ParticleIndex_t m_nCastParticle; // offset 0x14E8, size 0x4, align 255
    char _pad_14EC[0x8F4]; // offset 0x14EC
};
