#pragma once

class CCitadelProjectileVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x3D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    ProjectileBehaviorFlag_t m_nBehaviors; // offset 0x28, size 0x4, align 4
    CITADEL_UNIT_TARGET_TYPE m_nTargetTypes; // offset 0x2C, size 0x4, align 4 | MPropertyStartGroup
    CITADEL_UNIT_TARGET_FLAGS m_nTargetFlags; // offset 0x30, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x34, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFriction; // offset 0x38, size 0x4, align 4
    float32 m_flElasticity; // offset 0x3C, size 0x4, align 4
    float32 m_flSpeed; // offset 0x40, size 0x4, align 4
    float32 m_flUpSpeed; // offset 0x44, size 0x4, align 4
    float32 m_flMaxLinearRange; // offset 0x48, size 0x4, align 4
    float32 m_flArmTime; // offset 0x4C, size 0x4, align 4
    float32 m_flVerticalAimBias; // offset 0x50, size 0x4, align 4
    float32 m_flNoCollisionDuration; // offset 0x54, size 0x4, align 4
    bool m_bAllowMotionDuringNoCollisionDuration; // offset 0x58, size 0x1, align 1 | MPropertySuppressExpr
    char _pad_0059[0x3]; // offset 0x59
    ProjectileShape_t m_eProjectileShape; // offset 0x5C, size 0x4, align 4
    float32 m_flTriggerRadius; // offset 0x60, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPhysicsRadius; // offset 0x64, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flBulletOnlyTriggerRadius; // offset 0x68, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName MPropertyDescription
    Vector m_vecCapsulePhysicsCenter1; // offset 0x6C, size 0xC, align 4 | MPropertySuppressExpr
    Vector m_vecCapsulePhysicsCenter2; // offset 0x78, size 0xC, align 4 | MPropertySuppressExpr
    float32 m_flCapsulePhysicsRadius; // offset 0x84, size 0x4, align 4 | MPropertySuppressExpr
    Vector m_vecCapsuleTriggerCenter1; // offset 0x88, size 0xC, align 4 | MPropertySuppressExpr
    Vector m_vecCapsuleTriggerCenter2; // offset 0x94, size 0xC, align 4 | MPropertySuppressExpr
    float32 m_flCapsuleTriggerRadius; // offset 0xA0, size 0x4, align 4 | MPropertySuppressExpr
    char _pad_00A4[0x4]; // offset 0xA4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_particle; // offset 0xA8, size 0xE0, align 8 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bHideWarningParticle; // offset 0x188, size 0x1, align 1
    char _pad_0189[0x7]; // offset 0x189
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_warningParticle; // offset 0x190, size 0xE0, align 8 | MPropertyFriendlyName MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_customModel; // offset 0x270, size 0xE0, align 8 | MPropertyFriendlyName
    float32 m_flProjectileModelScale; // offset 0x350, size 0x4, align 4
    char _pad_0354[0x4]; // offset 0x354
    CSoundEventName m_HitSound; // offset 0x358, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_HitTargetSound; // offset 0x368, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_HitWorldSound; // offset 0x378, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_DetonateSound; // offset 0x388, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_LoopingSound; // offset 0x398, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_WarningSound; // offset 0x3A8, size 0x10, align 8 | MPropertyDescription
    float32 m_flTrackingDampingCoefficient; // offset 0x3B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTrackingDuration; // offset 0x3BC, size 0x4, align 4
    float32 m_flTrackingStartTime; // offset 0x3C0, size 0x4, align 4
    float32 m_flTrackingEndTime; // offset 0x3C4, size 0x4, align 4
    CEmbeddedSubclass< CBaseModifier > m_AutoProjectileModifier; // offset 0x3C8, size 0x10, align 8 | MPropertyStartGroup
};
