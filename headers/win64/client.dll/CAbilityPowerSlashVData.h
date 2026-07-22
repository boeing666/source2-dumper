#pragma once

class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1D48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1820]; // offset 0x0
    float32 m_flAirDrag; // offset 0x1820, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x1824, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x1828, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x182C, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x1830, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x1834, size 0x4, align 4
    Vector m_vecLongEffectOffset; // offset 0x1838, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x1844, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // offset 0x1848, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // offset 0x1928, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1A08, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1AE8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // offset 0x1BC8, size 0xE0, align 8
    CSoundEventName m_strStartSound; // offset 0x1CA8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1CB8, size 0x10, align 8
    CSoundEventName m_strPowerUp1Sounds; // offset 0x1CC8, size 0x10, align 8
    CSoundEventName m_strPowerUp2Sounds; // offset 0x1CD8, size 0x10, align 8
    CSoundEventName m_strPowerUp3Sounds; // offset 0x1CE8, size 0x10, align 8
    CSoundEventName m_strWhizbySound; // offset 0x1CF8, size 0x10, align 8
    CSoundEventName m_strSlashSound; // offset 0x1D08, size 0x10, align 8
    CSoundEventName m_strSlashFullSound; // offset 0x1D18, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1D28, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileCastingModifier; // offset 0x1D38, size 0x10, align 8
};
