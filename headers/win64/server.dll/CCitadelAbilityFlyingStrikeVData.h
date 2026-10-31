#pragma once

class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1728, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1088]; // offset 0x0
    float32 m_flJumpFallSpeedMax; // offset 0x1088, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpAirDrag; // offset 0x108C, size 0x4, align 4
    float32 m_flJumpAirSpeedMax; // offset 0x1090, size 0x4, align 4
    float32 m_flOnCancelVerticalSpeedBonus; // offset 0x1094, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flFlyingCloseEnoughToTarget; // offset 0x1098, size 0x4, align 4
    char _pad_109C[0x4]; // offset 0x109C
    CPiecewiseCurve m_curveSpeedScale; // offset 0x10A0, size 0x40, align 8
    float32 m_flAnimToStrikePointTime; // offset 0x10E0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAnimToStrikeArrivalBias; // offset 0x10E4, size 0x4, align 4
    float32 m_flGrappleShotFloatTime; // offset 0x10E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGrappleShotDelayToFlyOnHit; // offset 0x10EC, size 0x4, align 4
    float32 m_flGrappleSpeed; // offset 0x10F0, size 0x4, align 4
    char _pad_10F4[0x4]; // offset 0x10F4
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x10F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x1108, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_HomingTargetModifier; // offset 0x1118, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x1128, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // offset 0x1138, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1218, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // offset 0x12F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x13D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x14B8, size 0xE0, align 8
    CSoundEventName m_strStartFlyingToTarget; // offset 0x1598, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartAttack; // offset 0x15A8, size 0x10, align 8
    CSoundEventName m_strGrappleHitTarget; // offset 0x15B8, size 0x10, align 8
    CSoundEventName m_strGrappleLoop; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_strFlyingLoop; // offset 0x15D8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x15E8, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // offset 0x1688, size 0xA0, align 8
};
