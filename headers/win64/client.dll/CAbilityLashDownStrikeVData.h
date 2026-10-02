#pragma once

class CAbilityLashDownStrikeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // offset 0x1688, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // offset 0x1768, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingParticle; // offset 0x1848, size 0xE0, align 8
    CSoundEventName m_StompExplosionSound; // offset 0x1928, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_StompEnemyImpactSound; // offset 0x1938, size 0x10, align 8
    CSoundEventName m_strFallCollideImpactSound; // offset 0x1948, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // offset 0x1958, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // offset 0x1968, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1978, size 0x10, align 8
    float32 m_flHeightUILingerTime; // offset 0x1988, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageFrustumHalfWidth; // offset 0x198C, size 0x4, align 4
    float32 m_flDamageFrustumAngle; // offset 0x1990, size 0x4, align 4
    float32 m_flDamageWaveSpeed; // offset 0x1994, size 0x4, align 4
    float32 m_flDamageTraceProbeDamageRadius; // offset 0x1998, size 0x4, align 4
    float32 m_flDamageTraceProbeWorldRadius; // offset 0x199C, size 0x4, align 4
    float32 m_flDamageTraceProbeStepUpHeight; // offset 0x19A0, size 0x4, align 4
    float32 m_flDamageTraceProbeStepDownHeight; // offset 0x19A4, size 0x4, align 4
    float32 m_flDamageTraceProbeDropDownRate; // offset 0x19A8, size 0x4, align 4
    float32 m_flInitialDamageRadiusInMeters; // offset 0x19AC, size 0x4, align 4
    int32 m_nGroundCrackGap; // offset 0x19B0, size 0x4, align 4
    float32 m_flGroupLengthTolerance; // offset 0x19B4, size 0x4, align 4
    float32 m_flDamageEffectScaleMin; // offset 0x19B8, size 0x4, align 4
    float32 m_flDamageEffectScaleMax; // offset 0x19BC, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x19C0, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x19C4, size 0x4, align 4
    float32 m_flMaxTurnAmount; // offset 0x19C8, size 0x4, align 4
    char _pad_19CC[0x4]; // offset 0x19CC
};
