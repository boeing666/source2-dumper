#pragma once

class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1A80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    float32 m_flJumpFallSpeedMax; // offset 0x13F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpAirDrag; // offset 0x13F4, size 0x4, align 4
    float32 m_flJumpAirSpeedMax; // offset 0x13F8, size 0x4, align 4
    float32 m_flOnCancelVerticalSpeedBonus; // offset 0x13FC, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flFlyingCloseEnoughToTarget; // offset 0x1400, size 0x4, align 4
    char _pad_1404[0x4]; // offset 0x1404
    CPiecewiseCurve m_curveSpeedScale; // offset 0x1408, size 0x40, align 8
    float32 m_flAnimToStrikePointTime; // offset 0x1448, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAnimToStrikeArrivalBias; // offset 0x144C, size 0x4, align 4
    float32 m_flGrappleShotFloatTime; // offset 0x1450, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGrappleShotDelayToFlyOnHit; // offset 0x1454, size 0x4, align 4
    float32 m_flGrappleSpeed; // offset 0x1458, size 0x4, align 4
    char _pad_145C[0x4]; // offset 0x145C
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1460, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x1470, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x1480, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // offset 0x1490, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1570, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // offset 0x1650, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x1730, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x1810, size 0xE0, align 8
    CSoundEventName m_strStartFlyingToTarget; // offset 0x18F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartAttack; // offset 0x1900, size 0x10, align 8
    CSoundEventName m_strGrappleHitTarget; // offset 0x1910, size 0x10, align 8
    CSoundEventName m_strGrappleLoop; // offset 0x1920, size 0x10, align 8
    CSoundEventName m_strFlyingLoop; // offset 0x1930, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x1940, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // offset 0x19E0, size 0xA0, align 8
};
