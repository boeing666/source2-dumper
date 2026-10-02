#pragma once

class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1918, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    float32 m_flAirDrag; // offset 0x13F0, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x13F4, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x13F8, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x13FC, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x1400, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x1404, size 0x4, align 4
    Vector m_vecLongEffectOffset; // offset 0x1408, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x1414, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // offset 0x1418, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // offset 0x14F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x15D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x16B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // offset 0x1798, size 0xE0, align 8
    CSoundEventName m_strStartSound; // offset 0x1878, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1888, size 0x10, align 8
    CSoundEventName m_strPowerUp1Sounds; // offset 0x1898, size 0x10, align 8
    CSoundEventName m_strPowerUp2Sounds; // offset 0x18A8, size 0x10, align 8
    CSoundEventName m_strPowerUp3Sounds; // offset 0x18B8, size 0x10, align 8
    CSoundEventName m_strWhizbySound; // offset 0x18C8, size 0x10, align 8
    CSoundEventName m_strSlashSound; // offset 0x18D8, size 0x10, align 8
    CSoundEventName m_strSlashFullSound; // offset 0x18E8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileCastingModifier; // offset 0x1908, size 0x10, align 8
};
