#pragma once

class CCitadel_Ability_DeadpackRocketeerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x18D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_JetpackingModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_JetpackingVTOLModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MaxHeatModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BounceBackModifier; // offset 0x10B0, size 0x10, align 8
    CPiecewiseCurve m_IntentSpaceFwdVelocity; // offset 0x10C0, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_IntentSpaceLeftVelocity; // offset 0x1100, size 0x40, align 8
    CPiecewiseCurve m_IntentSpaceVerticalVelocity; // offset 0x1140, size 0x40, align 8
    CPiecewiseCurve m_IntentSpaceScaleWhileHolding; // offset 0x1180, size 0x40, align 8
    float32 m_flIntentSpaceStringStrengthFwd; // offset 0x11C0, size 0x4, align 4
    float32 m_flIntentSpaceStringStrengthLeft; // offset 0x11C4, size 0x4, align 4
    float32 m_flIntentSpaceStringStrengthVertical; // offset 0x11C8, size 0x4, align 4
    float32 m_flIntentSpaceSurplusSpringStrength; // offset 0x11CC, size 0x4, align 4
    float32 m_flIntentSpaceVerticalWithXYInput; // offset 0x11D0, size 0x4, align 4
    float32 m_flIntentSpaceVerticalZInputOnly; // offset 0x11D4, size 0x4, align 4
    float32 m_flVerticalIntentDiminishRangeBegin; // offset 0x11D8, size 0x4, align 4
    float32 m_flVerticalIntentDiminishRangeEnd; // offset 0x11DC, size 0x4, align 4
    float32 m_flVerticalIntentDiminishFracAtRangeEnd; // offset 0x11E0, size 0x4, align 4
    float32 m_flSlowEffectivenessLateral; // offset 0x11E4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlowEffectivenessVertical; // offset 0x11E8, size 0x4, align 4
    float32 m_flSlowEffectivenessMovementAbilitySilenceFrac; // offset 0x11EC, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x11F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashDistancePct; // offset 0x11F4, size 0x4, align 4
    float32 m_flAirSpeed; // offset 0x11F8, size 0x4, align 4
    float32 m_flDashJumpJetpackLockoutDuration; // offset 0x11FC, size 0x4, align 4
    float32 m_flJumpHeightIncreasePercent; // offset 0x1200, size 0x4, align 4
    float32 m_flColdHitHeatRemovedPercent; // offset 0x1204, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSputterChance; // offset 0x1208, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSputterDuration; // offset 0x120C, size 0x4, align 4
    float32 m_flSputterImmuneDuration; // offset 0x1210, size 0x4, align 4
    char _pad_1214[0x4]; // offset 0x1214
    CPiecewiseCurve m_FallSpeedReductionCurve; // offset 0x1218, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flGravityReductionDuration_AirDash; // offset 0x1258, size 0x4, align 4
    float32 m_flGravityReductionDuration_Shoot; // offset 0x125C, size 0x4, align 4
    float32 m_flGravityReductionDuration_Ability; // offset 0x1260, size 0x4, align 4
    float32 m_flGravityReductionDuration_JetpackInput; // offset 0x1264, size 0x4, align 4
    CPiecewiseCurve m_ImpulseAccelCurve; // offset 0x1268, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flPlayerCollisionSphereSize; // offset 0x12A8, size 0x4, align 4
    float32 m_flPlayerCollisionLookaheadFrames; // offset 0x12AC, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x12B0, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x12B4, size 0x4, align 4
    float32 m_flFromGroundThrustAddZ; // offset 0x12B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFromGroundThrustXYMultiplier; // offset 0x12BC, size 0x4, align 4
    float32 m_flFromGroundThrustFwd; // offset 0x12C0, size 0x4, align 4
    float32 m_flFromGroundNoThrustAddZ; // offset 0x12C4, size 0x4, align 4
    float32 m_flInSlideThrustMultiplier; // offset 0x12C8, size 0x4, align 4
    float32 m_flTimeOnGroundBeforeLaunchAllowed; // offset 0x12CC, size 0x4, align 4
    float32 m_flBounceBackZSpeed; // offset 0x12D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBounceBackXYSpeedLimit; // offset 0x12D4, size 0x4, align 4
    CSoundEventName m_strMaxHeatLoopingSound; // offset 0x12D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaunchGroundSound; // offset 0x12E8, size 0x10, align 8
    CSoundEventName m_strLaunchAirSound; // offset 0x12F8, size 0x10, align 8
    CSoundEventName m_strRocketeerLoopingSound; // offset 0x1308, size 0x10, align 8
    CSoundEventName m_strRocketeerLoopStopSound; // offset 0x1318, size 0x10, align 8
    CSoundEventName m_strRocketeerOverheatedLoopingSound; // offset 0x1328, size 0x10, align 8
    CSoundEventName m_strRocketeerAirDashJumpSound; // offset 0x1338, size 0x10, align 8
    CSoundEventName m_strHeatWarningSound; // offset 0x1348, size 0x10, align 8
    CSoundEventName m_strMaxHeatSound; // offset 0x1358, size 0x10, align 8
    CSoundEventName m_strChimeraDiveSound; // offset 0x1368, size 0x10, align 8
    float32 m_flHeatWarningFraction; // offset 0x1378, size 0x4, align 4
    char _pad_137C[0x4]; // offset 0x137C
    CSoundEventName m_strLaunchInCooldownSound; // offset 0x1380, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathExplosionWarningFX; // offset 0x1390, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionFX; // offset 0x1470, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLImpactOnGroundFX; // offset 0x1550, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLTargetingPreviewFX; // offset 0x1630, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x1710, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchInCooldownParticle; // offset 0x17F0, size 0xE0, align 8
};
