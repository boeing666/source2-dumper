#pragma once

class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1A08, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A8]; // offset 0x0
    float32 m_flJumpFallSpeedMax; // offset 0x13A8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpAirDrag; // offset 0x13AC, size 0x4, align 4
    float32 m_flJumpAirSpeedMax; // offset 0x13B0, size 0x4, align 4
    float32 m_flOnCancelVerticalSpeedBonus; // offset 0x13B4, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flFlyingCloseEnoughToTarget; // offset 0x13B8, size 0x4, align 4
    char _pad_13BC[0x4]; // offset 0x13BC
    CPiecewiseCurve m_curveSpeedScale; // offset 0x13C0, size 0x40, align 8
    float32 m_flAnimToStrikePointTime; // offset 0x1400, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAnimToStrikeArrivalBias; // offset 0x1404, size 0x4, align 4
    float32 m_flGrappleShotFloatTime; // offset 0x1408, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGrappleShotDelayToFlyOnHit; // offset 0x140C, size 0x4, align 4
    float32 m_flGrappleSpeed; // offset 0x1410, size 0x4, align 4
    char _pad_1414[0x4]; // offset 0x1414
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1418, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x1428, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x1438, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // offset 0x1448, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1528, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // offset 0x1608, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x16E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x17C8, size 0xE0, align 8
    CSoundEventName m_strStartFlyingToTarget; // offset 0x18A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartAttack; // offset 0x18B8, size 0x10, align 8
    CSoundEventName m_strGrappleHitTarget; // offset 0x18C8, size 0x10, align 8
    CSoundEventName m_strGrappleLoop; // offset 0x18D8, size 0x10, align 8
    CSoundEventName m_strFlyingLoop; // offset 0x18E8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x18F8, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // offset 0x1980, size 0x88, align 8
};
