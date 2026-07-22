#pragma once

class CCitadel_Ability_PowerSlash : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x18A8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1200]; // offset 0x0
    int32 m_nPowerLevel; // offset 0x1200, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1204[0x4]; // offset 0x1204
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargets; // offset 0x1208, size 0x18, align 8
    ParticleIndex_t m_nCastParticle; // offset 0x1220, size 0x4, align 255
    char _pad_1224[0x684]; // offset 0x1224
};
