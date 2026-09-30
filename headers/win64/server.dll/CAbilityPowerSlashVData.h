#pragma once

class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x18D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A8]; // offset 0x0
    float32 m_flAirDrag; // offset 0x13A8, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x13AC, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x13B0, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x13B4, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x13B8, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x13BC, size 0x4, align 4
    Vector m_vecLongEffectOffset; // offset 0x13C0, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x13CC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // offset 0x13D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // offset 0x14B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1590, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1670, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // offset 0x1750, size 0xE0, align 8
    CSoundEventName m_strStartSound; // offset 0x1830, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1840, size 0x10, align 8
    CSoundEventName m_strPowerUp1Sounds; // offset 0x1850, size 0x10, align 8
    CSoundEventName m_strPowerUp2Sounds; // offset 0x1860, size 0x10, align 8
    CSoundEventName m_strPowerUp3Sounds; // offset 0x1870, size 0x10, align 8
    CSoundEventName m_strWhizbySound; // offset 0x1880, size 0x10, align 8
    CSoundEventName m_strSlashSound; // offset 0x1890, size 0x10, align 8
    CSoundEventName m_strSlashFullSound; // offset 0x18A0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x18B0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileCastingModifier; // offset 0x18C0, size 0x10, align 8
};
