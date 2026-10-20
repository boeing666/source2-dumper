#pragma once

class CAbilityPowerSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1078]; // offset 0x0
    float32 m_flAirDrag; // offset 0x1078, size 0x4, align 4
    float32 m_flMaxPowerPadding; // offset 0x107C, size 0x4, align 4
    float32 m_flEffectGroundTrace; // offset 0x1080, size 0x4, align 4
    float32 m_flWhizbyMaxRange; // offset 0x1084, size 0x4, align 4
    float32 m_flStartPosTestCapsuleLength; // offset 0x1088, size 0x4, align 4
    float32 m_flCoverLOSBackDist; // offset 0x108C, size 0x4, align 4
    Vector m_vecLongEffectOffset; // offset 0x1090, size 0xC, align 4 | MPropertyDescription
    float32 m_vecPlayerLeftOffset; // offset 0x109C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerSlashFullParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1340, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PowerUpParticle; // offset 0x1420, size 0xE0, align 8
    CSoundEventName m_strStartSound; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1510, size 0x10, align 8
    CSoundEventName m_strPowerUp1Sounds; // offset 0x1520, size 0x10, align 8
    CSoundEventName m_strPowerUp2Sounds; // offset 0x1530, size 0x10, align 8
    CSoundEventName m_strPowerUp3Sounds; // offset 0x1540, size 0x10, align 8
    CSoundEventName m_strWhizbySound; // offset 0x1550, size 0x10, align 8
    CSoundEventName m_strSlashSound; // offset 0x1560, size 0x10, align 8
    CSoundEventName m_strSlashFullSound; // offset 0x1570, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1580, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_UnstoppableWhileCastingModifier; // offset 0x1590, size 0x10, align 8
};
