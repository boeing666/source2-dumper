#pragma once

class CAbilityLashDownStrikeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1668, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineParticle; // offset 0x1240, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompLineObstructedParticle; // offset 0x1320, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StompImpactParticle; // offset 0x1400, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingParticle; // offset 0x14E0, size 0xE0, align 8
    CSoundEventName m_StompExplosionSound; // offset 0x15C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_StompEnemyImpactSound; // offset 0x15D0, size 0x10, align 8
    CSoundEventName m_strFallCollideImpactSound; // offset 0x15E0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DownStrikeModifier; // offset 0x15F0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ImpactModifier; // offset 0x1600, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DragModifier; // offset 0x1610, size 0x10, align 8
    float32 m_flHeightUILingerTime; // offset 0x1620, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDamageFrustumHalfWidth; // offset 0x1624, size 0x4, align 4
    float32 m_flDamageFrustumAngle; // offset 0x1628, size 0x4, align 4
    float32 m_flDamageWaveSpeed; // offset 0x162C, size 0x4, align 4
    float32 m_flDamageTraceProbeDamageRadius; // offset 0x1630, size 0x4, align 4
    float32 m_flDamageTraceProbeWorldRadius; // offset 0x1634, size 0x4, align 4
    float32 m_flDamageTraceProbeStepUpHeight; // offset 0x1638, size 0x4, align 4
    float32 m_flDamageTraceProbeStepDownHeight; // offset 0x163C, size 0x4, align 4
    float32 m_flDamageTraceProbeDropDownRate; // offset 0x1640, size 0x4, align 4
    float32 m_flInitialDamageRadiusInMeters; // offset 0x1644, size 0x4, align 4
    int32 m_nGroundCrackGap; // offset 0x1648, size 0x4, align 4
    float32 m_flGroupLengthTolerance; // offset 0x164C, size 0x4, align 4
    float32 m_flDamageEffectScaleMin; // offset 0x1650, size 0x4, align 4
    float32 m_flDamageEffectScaleMax; // offset 0x1654, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1658, size 0x4, align 4
    float32 m_flCollideRadius; // offset 0x165C, size 0x4, align 4
    float32 m_flMaxTurnAmount; // offset 0x1660, size 0x4, align 4
    char _pad_1664[0x4]; // offset 0x1664
};
