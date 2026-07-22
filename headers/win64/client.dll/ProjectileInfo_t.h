#pragma once

struct ProjectileInfo_t  // sizeof 0x398, align 0x8 (client) {MGetKV3ClassDefaults}
{
    ProjectileBehaviorFlag_t m_nBehaviors; // offset 0x0, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFriction; // offset 0x8, size 0x4, align 4
    float32 m_flElasticity; // offset 0xC, size 0x4, align 4
    float32 m_flSpeed; // offset 0x10, size 0x4, align 4
    float32 m_flUpSpeed; // offset 0x14, size 0x4, align 4
    float32 m_flMaxLinearRange; // offset 0x18, size 0x4, align 4
    float32 m_flVerticalAimBias; // offset 0x1C, size 0x4, align 4
    ProjectileShape_t m_eProjectileShape; // offset 0x20, size 0x4, align 4
    float32 m_flTriggerRadius; // offset 0x24, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPhysicsRadius; // offset 0x28, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flBulletOnlyTriggerRadius; // offset 0x2C, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName MPropertyDescription
    Vector m_vecCapsulePhysicsCenter1; // offset 0x30, size 0xC, align 4 | MPropertySuppressExpr
    Vector m_vecCapsulePhysicsCenter2; // offset 0x3C, size 0xC, align 4 | MPropertySuppressExpr
    float32 m_flCapsulePhysicsRadius; // offset 0x48, size 0x4, align 4 | MPropertySuppressExpr
    Vector m_vecCapsuleTriggerCenter1; // offset 0x4C, size 0xC, align 4 | MPropertySuppressExpr
    Vector m_vecCapsuleTriggerCenter2; // offset 0x58, size 0xC, align 4 | MPropertySuppressExpr
    float32 m_flCapsuleTriggerRadius; // offset 0x64, size 0x4, align 4 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_particle; // offset 0x68, size 0xE0, align 8 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bHideWarningParticle; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x7]; // offset 0x149
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_warningParticle; // offset 0x150, size 0xE0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_customModel; // offset 0x230, size 0xE0, align 8 | MPropertyFriendlyName
    float32 m_flProjectileModelScale; // offset 0x310, size 0x4, align 4
    char _pad_0314[0x4]; // offset 0x314
    CSoundEventName m_HitSound; // offset 0x318, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_HitTargetSound; // offset 0x328, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_HitWorldSound; // offset 0x338, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_DetonateSound; // offset 0x348, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_LoopingSound; // offset 0x358, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_WarningSound; // offset 0x368, size 0x10, align 8 | MPropertyDescription
    float32 m_flTrackingDampingCoefficient; // offset 0x378, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTrackingDuration; // offset 0x37C, size 0x4, align 4
    float32 m_flTrackingStartTime; // offset 0x380, size 0x4, align 4
    float32 m_flTrackingEndTime; // offset 0x384, size 0x4, align 4
    CEmbeddedSubclass< CBaseModifier > m_AutoProjectileModifier; // offset 0x388, size 0x10, align 8 | MPropertyStartGroup
};
