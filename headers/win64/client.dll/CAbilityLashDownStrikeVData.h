#pragma once

class CAbilityLashDownStrikeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1D30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CGlobalSymbol m_strGroundCastAnimGraphParam; // offset 0x18F8, size 0x8, align 8 | MPropertyLeafSuggestionProviderFn
    CGlobalSymbol m_strAirCastAnimGraphParam; // offset 0x1900, size 0x8, align 8 | MPropertyLeafSuggestionProviderFn
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // offset 0x19E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // offset 0x1AC8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // offset 0x1BA8, size 0xE0, align 8
    CSoundEventName m_StompExplosionSound; // offset 0x1C88, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_StompEnemyImpactSound; // offset 0x1C98, size 0x10, align 8
    CSoundEventName m_strFallCollideImpactSound; // offset 0x1CA8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // offset 0x1CB8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // offset 0x1CC8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1CD8, size 0x10, align 8
    float32 m_flHeightUILingerTime; // offset 0x1CE8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageFrustumHalfWidth; // offset 0x1CEC, size 0x4, align 4
    float32 m_flDamageFrustumAngle; // offset 0x1CF0, size 0x4, align 4
    float32 m_flDamageWaveSpeed; // offset 0x1CF4, size 0x4, align 4
    float32 m_flDamageTraceProbeDamageRadius; // offset 0x1CF8, size 0x4, align 4
    float32 m_flDamageTraceProbeWorldRadius; // offset 0x1CFC, size 0x4, align 4
    float32 m_flDamageTraceProbeStepUpHeight; // offset 0x1D00, size 0x4, align 4
    float32 m_flDamageTraceProbeStepDownHeight; // offset 0x1D04, size 0x4, align 4
    float32 m_flDamageTraceProbeDropDownRate; // offset 0x1D08, size 0x4, align 4
    float32 m_flInitialDamageRadiusInMeters; // offset 0x1D0C, size 0x4, align 4
    int32 m_nGroundCrackGap; // offset 0x1D10, size 0x4, align 4
    float32 m_flGroupLengthTolerance; // offset 0x1D14, size 0x4, align 4
    float32 m_flDamageEffectScaleMin; // offset 0x1D18, size 0x4, align 4
    float32 m_flDamageEffectScaleMax; // offset 0x1D1C, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1D20, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x1D24, size 0x4, align 4
    float32 m_flMaxTurnAmount; // offset 0x1D28, size 0x4, align 4
    char _pad_1D2C[0x4]; // offset 0x1D2C
};
