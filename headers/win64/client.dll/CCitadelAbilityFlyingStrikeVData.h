#pragma once

class CCitadelAbilityFlyingStrikeVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1EB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1820]; // offset 0x0
    float32 m_flJumpFallSpeedMax; // offset 0x1820, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpAirDrag; // offset 0x1824, size 0x4, align 4
    float32 m_flJumpAirSpeedMax; // offset 0x1828, size 0x4, align 4
    float32 m_flOnCancelVerticalSpeedBonus; // offset 0x182C, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flFlyingCloseEnoughToTarget; // offset 0x1830, size 0x4, align 4
    char _pad_1834[0x4]; // offset 0x1834
    CPiecewiseCurve m_curveSpeedScale; // offset 0x1838, size 0x40, align 8
    float32 m_flAnimToStrikePointTime; // offset 0x1878, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAnimToStrikeArrivalBias; // offset 0x187C, size 0x4, align 4
    float32 m_flGrappleShotFloatTime; // offset 0x1880, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGrappleShotDelayToFlyOnHit; // offset 0x1884, size 0x4, align 4
    float32 m_flGrappleSpeed; // offset 0x1888, size 0x4, align 4
    char _pad_188C[0x4]; // offset 0x188C
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1890, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_GrappleTargetModifier; // offset 0x18A0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x18B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LeapParticle; // offset 0x18C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x19A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlashParticle; // offset 0x1A80, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BulletGrappleTracerParticle; // offset 0x1B60, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGrappleParticle; // offset 0x1C40, size 0xE0, align 8
    CSoundEventName m_strDamageTarget; // offset 0x1D20, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartFlyingToTarget; // offset 0x1D30, size 0x10, align 8
    CSoundEventName m_strStartAttack; // offset 0x1D40, size 0x10, align 8
    CSoundEventName m_strGrappleHitTarget; // offset 0x1D50, size 0x10, align 8
    CSoundEventName m_strGrappleHitWorld; // offset 0x1D60, size 0x10, align 8
    CSoundEventName m_strGrappleHitNothing; // offset 0x1D70, size 0x10, align 8
    CSoundEventName m_strGrappleLoop; // offset 0x1D80, size 0x10, align 8
    CSoundEventName m_strFlyingLoop; // offset 0x1D90, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // offset 0x1DA0, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // offset 0x1E28, size 0x88, align 8
};
