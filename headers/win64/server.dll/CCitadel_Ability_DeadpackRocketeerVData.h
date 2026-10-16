#pragma once

class CCitadel_Ability_DeadpackRocketeerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_JetpackingModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_JetpackingVTOLModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_MaxHeatModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BounceBackModifier; // offset 0x1418, size 0x10, align 8
    CPiecewiseCurve m_IntentSpaceFwdVelocity; // offset 0x1428, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_IntentSpaceLeftVelocity; // offset 0x1468, size 0x40, align 8
    CPiecewiseCurve m_IntentSpaceVerticalVelocity; // offset 0x14A8, size 0x40, align 8
    CPiecewiseCurve m_IntentSpaceScaleWhileHolding; // offset 0x14E8, size 0x40, align 8
    float32 m_flIntentSpaceStringStrengthFwd; // offset 0x1528, size 0x4, align 4
    float32 m_flIntentSpaceStringStrengthLeft; // offset 0x152C, size 0x4, align 4
    float32 m_flIntentSpaceStringStrengthVertical; // offset 0x1530, size 0x4, align 4
    float32 m_flIntentSpaceSurplusSpringStrength; // offset 0x1534, size 0x4, align 4
    float32 m_flIntentSpaceVerticalWithXYInput; // offset 0x1538, size 0x4, align 4
    float32 m_flIntentSpaceVerticalZInputOnly; // offset 0x153C, size 0x4, align 4
    float32 m_flVerticalIntentDiminishRangeBegin; // offset 0x1540, size 0x4, align 4
    float32 m_flVerticalIntentDiminishRangeEnd; // offset 0x1544, size 0x4, align 4
    float32 m_flVerticalIntentDiminishFracAtRangeEnd; // offset 0x1548, size 0x4, align 4
    float32 m_flSlowEffectivenessLateral; // offset 0x154C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlowEffectivenessVertical; // offset 0x1550, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1554, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashDistancePct; // offset 0x1558, size 0x4, align 4
    float32 m_flAirSpeed; // offset 0x155C, size 0x4, align 4
    float32 m_flDashJumpJetpackLockoutDuration; // offset 0x1560, size 0x4, align 4
    float32 m_flJumpHeightIncreasePercent; // offset 0x1564, size 0x4, align 4
    float32 m_flColdHitHeatRemovedPercent; // offset 0x1568, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSputterChance; // offset 0x156C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSputterDuration; // offset 0x1570, size 0x4, align 4
    float32 m_flSputterImmuneDuration; // offset 0x1574, size 0x4, align 4
    CPiecewiseCurve m_FallSpeedReductionCurve; // offset 0x1578, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flGravityReductionDuration_AirDash; // offset 0x15B8, size 0x4, align 4
    float32 m_flGravityReductionDuration_Shoot; // offset 0x15BC, size 0x4, align 4
    float32 m_flGravityReductionDuration_Ability; // offset 0x15C0, size 0x4, align 4
    float32 m_flGravityReductionDuration_JetpackInput; // offset 0x15C4, size 0x4, align 4
    CPiecewiseCurve m_ImpulseAccelCurve; // offset 0x15C8, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flPlayerCollisionSphereSize; // offset 0x1608, size 0x4, align 4
    float32 m_flPlayerCollisionLookaheadFrames; // offset 0x160C, size 0x4, align 4
    float32 m_flTrackAmount; // offset 0x1610, size 0x4, align 4
    float32 m_flMinAimAngle; // offset 0x1614, size 0x4, align 4
    float32 m_flFromGroundThrustAddZ; // offset 0x1618, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFromGroundThrustXYMultiplier; // offset 0x161C, size 0x4, align 4
    float32 m_flFromGroundThrustFwd; // offset 0x1620, size 0x4, align 4
    float32 m_flFromGroundNoThrustAddZ; // offset 0x1624, size 0x4, align 4
    float32 m_flInSlideThrustMultiplier; // offset 0x1628, size 0x4, align 4
    float32 m_flTimeOnGroundBeforeLaunchAllowed; // offset 0x162C, size 0x4, align 4
    float32 m_flBounceBackZSpeed; // offset 0x1630, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBounceBackXYSpeedLimit; // offset 0x1634, size 0x4, align 4
    CSoundEventName m_strMaxHeatLoopingSound; // offset 0x1638, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaunchGroundSound; // offset 0x1648, size 0x10, align 8
    CSoundEventName m_strLaunchAirSound; // offset 0x1658, size 0x10, align 8
    CSoundEventName m_strRocketeerLoopingSound; // offset 0x1668, size 0x10, align 8
    CSoundEventName m_strRocketeerLoopStopSound; // offset 0x1678, size 0x10, align 8
    CSoundEventName m_strRocketeerOverheatedLoopingSound; // offset 0x1688, size 0x10, align 8
    CSoundEventName m_strRocketeerAirDashJumpSound; // offset 0x1698, size 0x10, align 8
    CSoundEventName m_strHeatWarningSound; // offset 0x16A8, size 0x10, align 8
    CSoundEventName m_strMaxHeatSound; // offset 0x16B8, size 0x10, align 8
    CSoundEventName m_strChimeraDiveSound; // offset 0x16C8, size 0x10, align 8
    float32 m_flHeatWarningFraction; // offset 0x16D8, size 0x4, align 4
    char _pad_16DC[0x4]; // offset 0x16DC
    CSoundEventName m_strLaunchInCooldownSound; // offset 0x16E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathExplosionWarningFX; // offset 0x16F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplosionFX; // offset 0x17D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLImpactOnGroundFX; // offset 0x18B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VTOLTargetingPreviewFX; // offset 0x1990, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x1A70, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchInCooldownParticle; // offset 0x1B50, size 0xE0, align 8
};
