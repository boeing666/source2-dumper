#pragma once

class CAbilityLashDownStrikeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1988, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // offset 0x1720, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingParticle; // offset 0x1800, size 0xE0, align 8
    CSoundEventName m_StompExplosionSound; // offset 0x18E0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_StompEnemyImpactSound; // offset 0x18F0, size 0x10, align 8
    CSoundEventName m_strFallCollideImpactSound; // offset 0x1900, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // offset 0x1910, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // offset 0x1920, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1930, size 0x10, align 8
    float32 m_flHeightUILingerTime; // offset 0x1940, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageFrustumHalfWidth; // offset 0x1944, size 0x4, align 4
    float32 m_flDamageFrustumAngle; // offset 0x1948, size 0x4, align 4
    float32 m_flDamageWaveSpeed; // offset 0x194C, size 0x4, align 4
    float32 m_flDamageTraceProbeDamageRadius; // offset 0x1950, size 0x4, align 4
    float32 m_flDamageTraceProbeWorldRadius; // offset 0x1954, size 0x4, align 4
    float32 m_flDamageTraceProbeStepUpHeight; // offset 0x1958, size 0x4, align 4
    float32 m_flDamageTraceProbeStepDownHeight; // offset 0x195C, size 0x4, align 4
    float32 m_flDamageTraceProbeDropDownRate; // offset 0x1960, size 0x4, align 4
    float32 m_flInitialDamageRadiusInMeters; // offset 0x1964, size 0x4, align 4
    int32 m_nGroundCrackGap; // offset 0x1968, size 0x4, align 4
    float32 m_flGroupLengthTolerance; // offset 0x196C, size 0x4, align 4
    float32 m_flDamageEffectScaleMin; // offset 0x1970, size 0x4, align 4
    float32 m_flDamageEffectScaleMax; // offset 0x1974, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1978, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x197C, size 0x4, align 4
    float32 m_flMaxTurnAmount; // offset 0x1980, size 0x4, align 4
    char _pad_1984[0x4]; // offset 0x1984
};
