#pragma once

class CCitadel_Ability_DeadpackRocketeerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_JetpackingModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_JetpackingVTOLModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MaxHeatModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BounceBackModifier; // offset 0x10A0, size 0x10, align 8
    CPiecewiseCurve m_IntentSpaceFwdVelocity; // offset 0x10B0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_IntentSpaceLeftVelocity; // offset 0x10F0, size 0x40, align 8
    CPiecewiseCurve m_IntentSpaceVerticalVelocity; // offset 0x1130, size 0x40, align 8
    CPiecewiseCurve m_IntentSpaceScaleWhileHolding; // offset 0x1170, size 0x40, align 8
    float32 m_flIntentSpaceStringStrengthFwd; // offset 0x11B0, size 0x4, align 4
    float32 m_flIntentSpaceStringStrengthLeft; // offset 0x11B4, size 0x4, align 4
    float32 m_flIntentSpaceStringStrengthVertical; // offset 0x11B8, size 0x4, align 4
    float32 m_flIntentSpaceSurplusSpringStrength; // offset 0x11BC, size 0x4, align 4
    float32 m_flIntentSpaceVerticalWithXYInput; // offset 0x11C0, size 0x4, align 4
    float32 m_flIntentSpaceVerticalZInputOnly; // offset 0x11C4, size 0x4, align 4
    float32 m_flVerticalIntentDiminishRangeBegin; // offset 0x11C8, size 0x4, align 4
    float32 m_flVerticalIntentDiminishRangeEnd; // offset 0x11CC, size 0x4, align 4
    float32 m_flVerticalIntentDiminishFracAtRangeEnd; // offset 0x11D0, size 0x4, align 4
    float32 m_flSlowEffectivenessLateral; // offset 0x11D4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlowEffectivenessVertical; // offset 0x11D8, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x11DC, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashDistancePct; // offset 0x11E0, size 0x4, align 4
    float32 m_flAirSpeed; // offset 0x11E4, size 0x4, align 4
    float32 m_flDashJumpJetpackLockoutDuration; // offset 0x11E8, size 0x4, align 4
    float32 m_flJumpHeightIncreasePercent; // offset 0x11EC, size 0x4, align 4
    float32 m_flColdHitHeatRemovedPercent; // offset 0x11F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSputterChance; // offset 0x11F4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSputterDuration; // offset 0x11F8, size 0x4, align 4
    float32 m_flSputterImmuneDuration; // offset 0x11FC, size 0x4, align 4
    CPiecewiseCurve m_FallSpeedReductionCurve; // offset 0x1200, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flGravityReductionDuration_AirDash; // offset 0x1240, size 0x4, align 4
    float32 m_flGravityReductionDuration_Shoot; // offset 0x1244, size 0x4, align 4
    float32 m_flGravityReductionDuration_Ability; // offset 0x1248, size 0x4, align 4
    float32 m_flGravityReductionDuration_JetpackInput; // offset 0x124C, size 0x4, align 4
    CPiecewiseCurve m_ImpulseAccelCurve; // offset 0x1250, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flPlayerCollisionSphereSize; // offset 0x1290, size 0x4, align 4
    float32 m_flPlayerCollisionLookaheadFrames; // offset 0x1294, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1298, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x129C, size 0x4, align 4
    float32 m_flFromGroundThrustAddZ; // offset 0x12A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFromGroundThrustXYMultiplier; // offset 0x12A4, size 0x4, align 4
    float32 m_flFromGroundThrustFwd; // offset 0x12A8, size 0x4, align 4
    float32 m_flFromGroundNoThrustAddZ; // offset 0x12AC, size 0x4, align 4
    float32 m_flInSlideThrustMultiplier; // offset 0x12B0, size 0x4, align 4
    float32 m_flTimeOnGroundBeforeLaunchAllowed; // offset 0x12B4, size 0x4, align 4
    float32 m_flBounceBackZSpeed; // offset 0x12B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBounceBackXYSpeedLimit; // offset 0x12BC, size 0x4, align 4
    CSoundEventName m_strMaxHeatLoopingSound; // offset 0x12C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaunchGroundSound; // offset 0x12D0, size 0x10, align 8
    CSoundEventName m_strLaunchAirSound; // offset 0x12E0, size 0x10, align 8
    CSoundEventName m_strRocketeerLoopingSound; // offset 0x12F0, size 0x10, align 8
    CSoundEventName m_strRocketeerLoopStopSound; // offset 0x1300, size 0x10, align 8
    CSoundEventName m_strRocketeerOverheatedLoopingSound; // offset 0x1310, size 0x10, align 8
    CSoundEventName m_strRocketeerAirDashJumpSound; // offset 0x1320, size 0x10, align 8
    CSoundEventName m_strHeatWarningSound; // offset 0x1330, size 0x10, align 8
    CSoundEventName m_strMaxHeatSound; // offset 0x1340, size 0x10, align 8
    CSoundEventName m_strChimeraDiveSound; // offset 0x1350, size 0x10, align 8
    float32 m_flHeatWarningFraction; // offset 0x1360, size 0x4, align 4
    char _pad_1364[0x4]; // offset 0x1364
    CSoundEventName m_strLaunchInCooldownSound; // offset 0x1368, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathExplosionWarningFX; // offset 0x1378, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionFX; // offset 0x1458, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLImpactOnGroundFX; // offset 0x1538, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLTargetingPreviewFX; // offset 0x1618, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x16F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchInCooldownParticle; // offset 0x17D8, size 0xE0, align 8
};
