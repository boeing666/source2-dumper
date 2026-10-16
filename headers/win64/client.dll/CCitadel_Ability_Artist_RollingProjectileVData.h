#pragma once

class CCitadel_Ability_Artist_RollingProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1830, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    bool m_bShouldDamageOnPassthrough; // offset 0x13E8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bShouldExplodeCameraForward; // offset 0x13E9, size 0x1, align 1
    bool m_bAllowCameraSteering; // offset 0x13EA, size 0x1, align 1
    bool m_bAttachProjectileWhileCharging; // offset 0x13EB, size 0x1, align 1
    float32 m_flAttachForwardDistance; // offset 0x13EC, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x13F0, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x13F4, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x13F8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x13FC, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1400, size 0x4, align 4
    float32 m_flSlideDotThreshold; // offset 0x1404, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1408, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x140C, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1410, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x1414, size 0x4, align 4
    float32 m_flTurnMultiplier; // offset 0x1418, size 0x4, align 4
    float32 m_flSinRate; // offset 0x141C, size 0x4, align 4
    float32 m_flSinScale; // offset 0x1420, size 0x4, align 4
    float32 m_flAccelerationSpeed; // offset 0x1424, size 0x4, align 4
    float32 m_flBonusProjectileBackOffset; // offset 0x1428, size 0x4, align 4
    float32 m_flBonusProjectileLeftOffset; // offset 0x142C, size 0x4, align 4
    CPiecewiseCurve m_SteeringSpeedCurve; // offset 0x1430, size 0x40, align 8
    CEmbeddedSubclass< CBaseModifier > m_GroundAuraModifier; // offset 0x1470, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1480, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x1490, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConeParticle; // offset 0x14A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1580, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1660, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileHelperParticle; // offset 0x1740, size 0xE0, align 8
    CSoundEventName m_strExplode; // offset 0x1820, size 0x10, align 8 | MPropertyStartGroup
};
