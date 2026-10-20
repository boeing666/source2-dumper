#pragma once

class CCitadel_Ability_Artist_RollingProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    bool m_bShouldDamageOnPassthrough; // offset 0x1070, size 0x1, align 1 | MPropertyStartGroup
    bool m_bShouldExplodeCameraForward; // offset 0x1071, size 0x1, align 1
    bool m_bAllowCameraSteering; // offset 0x1072, size 0x1, align 1
    bool m_bAttachProjectileWhileCharging; // offset 0x1073, size 0x1, align 1
    float32 m_flAttachForwardDistance; // offset 0x1074, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x1078, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x107C, size 0x4, align 4
    float32 m_flFloatDownRate; // offset 0x1080, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1084, size 0x4, align 4
    float32 m_flStepDownHeight; // offset 0x1088, size 0x4, align 4
    float32 m_flSlideDotThreshold; // offset 0x108C, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1090, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x1094, size 0x4, align 4
    float32 m_flJumpHeight; // offset 0x1098, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x109C, size 0x4, align 4
    float32 m_flTurnMultiplier; // offset 0x10A0, size 0x4, align 4
    float32 m_flSinRate; // offset 0x10A4, size 0x4, align 4
    float32 m_flSinScale; // offset 0x10A8, size 0x4, align 4
    float32 m_flAccelerationSpeed; // offset 0x10AC, size 0x4, align 4
    float32 m_flBonusProjectileBackOffset; // offset 0x10B0, size 0x4, align 4
    float32 m_flBonusProjectileLeftOffset; // offset 0x10B4, size 0x4, align 4
    CPiecewiseCurve m_SteeringSpeedCurve; // offset 0x10B8, size 0x40, align 8
    CEmbeddedSubclass< CBaseModifier > m_GroundAuraModifier; // offset 0x10F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1108, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x1118, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ConeParticle; // offset 0x1128, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1208, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x12E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProjectileHelperParticle; // offset 0x13C8, size 0xE0, align 8
    CSoundEventName m_strExplode; // offset 0x14A8, size 0x10, align 8 | MPropertyStartGroup
};
