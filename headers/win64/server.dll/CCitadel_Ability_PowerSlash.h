#pragma once

class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1640, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF98]; // offset 0x0
    int32 m_nPowerLevel; // offset 0xF98, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0F9C[0x4]; // offset 0xF9C
    CUtlVector< CHandle< CBaseEntity > > m_vecHitTargets; // offset 0xFA0, size 0x18, align 8
    ParticleIndex_t m_nCastParticle; // offset 0xFB8, size 0x4, align 255
    char _pad_0FBC[0x684]; // offset 0xFBC
};
