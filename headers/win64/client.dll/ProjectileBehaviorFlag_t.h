#pragma once

enum ProjectileBehaviorFlag_t : uint32_t  // sizeof 0x4
{
    PBF_None = 0,
    PBF_BounceOffWall = 1,
    PBF_StickToTarget = 2,
    PBF_StickToWorld = 4,
    PBF_NotTurnTowardVelocity = 8,
    PBF_DetonateOnHitTarget = 16,
    PBF_DetonateOnHitWorld = 32,
    PBF_DetonateOnHitIgnoreArmingTime = 64,
    PBF_StartDetonateTimeOnHitTarget = 128,
    PBF_StartDetonateTimeOnHitWorld = 256,
    PBF_DisableTouchOnHit = 512,
    PBF_DisableRemoveOnTouchTrackedTarget = 1024,
    PBF_DisableTriggerProjectileImpactBehavior = 2048,
    PBF_DetonateOnLifetimeExpire = 4096,
    PBF_ValidateTargetLineOfSight = 8192,
    PBF_AllowHitOnNonTrackedTargets = 16384,
    PBF_OnlyTouchWorld = 32768,
    PBF_DisableRemoveOnDoneTracking = 65536,
    PBF_DontTravelThroughPortals = 131072,
    PBF_LocationTrackingOnTargetDeath = 262144,
    PBF_DetonateWhenReachingTrackedPosition = 524288,
    PBF_TouchAllEntitiesEachTick = 1048576,
};
