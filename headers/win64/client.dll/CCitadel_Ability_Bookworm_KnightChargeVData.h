#pragma once

class CCitadel_Ability_Bookworm_KnightChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeChannelParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnightChargeCastParticle; // offset 0x18F8, size 0xE0, align 8
    CSoundEventName m_strKnightChargeExplosionSound; // offset 0x19D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strCastDelayLocalPlayerSound; // offset 0x19E8, size 0x10, align 8
    CSoundEventName m_strExpireSound; // offset 0x19F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1A08, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1A18, size 0x10, align 8
    float32 m_flNavMeshSearchRange; // offset 0x1A28, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flNavMeshSearchForwardOffset; // offset 0x1A2C, size 0x4, align 4
    float32 m_flObstacleAvoidanceAmount; // offset 0x1A30, size 0x4, align 4
    float32 m_flGravity; // offset 0x1A34, size 0x4, align 4
    float32 m_flGroundCheckDistance; // offset 0x1A38, size 0x4, align 4
    float32 m_flGroundSnapDistance; // offset 0x1A3C, size 0x4, align 4
    float32 m_flJumpSpeed; // offset 0x1A40, size 0x4, align 4
    float32 m_flTimescale; // offset 0x1A44, size 0x4, align 4
    float32 m_flHintRecoveryStrength; // offset 0x1A48, size 0x4, align 4
    char _pad_1A4C[0x4]; // offset 0x1A4C
    CPiecewiseCurve m_worldPositionHeightCurveX; // offset 0x1A50, size 0x40, align 8
    CPiecewiseCurve m_worldPositionHeightCurveY; // offset 0x1A90, size 0x40, align 8
    float32 m_flDestroyLeashDistance; // offset 0x1AD0, size 0x4, align 4
    float32 m_flDestroyMapDistance; // offset 0x1AD4, size 0x4, align 4
    float32 m_flQAngleSpringConstant; // offset 0x1AD8, size 0x4, align 4
    float32 m_flMiniHopSpeedMin; // offset 0x1ADC, size 0x4, align 4
    float32 m_flMiniHopSpeedMax; // offset 0x1AE0, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1AE4, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1AE8, size 0x4, align 4
    bool m_bDebug; // offset 0x1AEC, size 0x1, align 1
    char _pad_1AED[0x3]; // offset 0x1AED
};
