#pragma once

class CSurvivorsEnemyDefinition  // sizeof 0x288, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    SurvivorsEnemyID_t m_unEnemyID; // offset 0x8, size 0x4, align 255
    char _pad_000C[0xC]; // offset 0xC
    CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > > m_vecModelNames; // offset 0x18, size 0x18, align 8
    CUtlString m_sStatsName; // offset 0x30, size 0x8, align 8
    CUtlString m_sDisplayName; // offset 0x38, size 0x8, align 8
    CPanoramaImageName m_sImageThumbnail; // offset 0x40, size 0x10, align 8
    bool m_bUseHeroModel; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x3]; // offset 0x51
    HeroID_t m_nDOTAHeroID; // offset 0x54, size 0x4, align 255
    CUtlVector< item_definition_index_t > m_vecEconItems; // offset 0x58, size 0x18, align 8
    style_index_t m_unStyleIndex; // offset 0x70, size 0x1, align 255
    char _pad_0071[0x7]; // offset 0x71
    CUtlString m_sSkinName; // offset 0x78, size 0x8, align 8
    CUtlVector< CUtlString > m_sSkinNames; // offset 0x80, size 0x18, align 8
    float32 m_flTouchDamage; // offset 0x98, size 0x4, align 4
    bool m_bDieOnTouch; // offset 0x9C, size 0x1, align 1
    char _pad_009D[0x3]; // offset 0x9D
    CUtlVector< CSurvivorsEnemyDefinition::Attack > m_vecAttacks; // offset 0xA0, size 0x18, align 8
    CUtlVector< CSurvivorsEnemyDefinition::PickupChance > m_vecPickupChances; // offset 0xB8, size 0x18, align 8
    CUtlVector< CSurvivorsEnemyDefinition::PickupChance > m_vecLootTable; // offset 0xD0, size 0x18, align 8
    CSurvivorsLootTable m_fullLootTable; // offset 0xE8, size 0x18, align 8
    float32 m_flMaxHealth; // offset 0x100, size 0x4, align 4
    float32 m_flMaxHealthPerPlayerLevel; // offset 0x104, size 0x4, align 4
    float32 m_flMoveSpeed; // offset 0x108, size 0x4, align 4
    float32 m_flModelScale; // offset 0x10C, size 0x4, align 4
    float32 m_flMaxModelScaleVariance; // offset 0x110, size 0x4, align 4
    float32 m_flCollisionRadius; // offset 0x114, size 0x4, align 4
    bool m_bHasSolidBody; // offset 0x118, size 0x1, align 1
    bool m_bUndespawnable; // offset 0x119, size 0x1, align 1
    char _pad_011A[0x2]; // offset 0x11A
    float32 m_flOverrideDespawnRadiusBuffer; // offset 0x11C, size 0x4, align 4
    bool m_bHasDeathAnimation; // offset 0x120, size 0x1, align 1
    bool m_bDissolveOnDeath; // offset 0x121, size 0x1, align 1
    char _pad_0122[0x2]; // offset 0x122
    float32 m_flDeathDuration; // offset 0x124, size 0x4, align 4
    float32 m_flDeathEffect_DissolveEdgeWidth; // offset 0x128, size 0x4, align 4
    float32 m_flDeathEffect_DissolveScale; // offset 0x12C, size 0x4, align 4
    Vector m_flDeathEffect_DissolveColor; // offset 0x130, size 0xC, align 4
    bool m_bRandomFacing; // offset 0x13C, size 0x1, align 1
    bool m_bPlayerFacing; // offset 0x13D, size 0x1, align 1
    char _pad_013E[0x2]; // offset 0x13E
    Vector2D m_vFixedFacing; // offset 0x140, size 0x8, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDeathEffectParticle; // offset 0x148, size 0xE0, align 8
    float32 m_flMoveAnimPlaybackRate; // offset 0x228, size 0x4, align 4
    float32 m_flIdleAnimPlaybackRate; // offset 0x22C, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x230, size 0x4, align 4
    float32 m_flSinMovementAngle; // offset 0x234, size 0x4, align 4
    float32 m_flSinMovementPeriodMultiplier; // offset 0x238, size 0x4, align 4
    float32 m_flMass; // offset 0x23C, size 0x4, align 4
    float32 m_flKnockbackResistance; // offset 0x240, size 0x4, align 4
    float32 m_flStatusResistance; // offset 0x244, size 0x4, align 4
    bool m_bIsElite; // offset 0x248, size 0x1, align 1
    bool m_bIsMiniboss; // offset 0x249, size 0x1, align 1
    bool m_bIsDestructible; // offset 0x24A, size 0x1, align 1
    bool m_bHasGlowOutline; // offset 0x24B, size 0x1, align 1
    bool m_bOverrideGlowColor; // offset 0x24C, size 0x1, align 1
    Color m_cOverriddenGlowColor; // offset 0x24D, size 0x4, align 1
    bool m_bShowHealthBar; // offset 0x251, size 0x1, align 1
    bool m_bCenterRooted; // offset 0x252, size 0x1, align 1
    bool m_bRotates; // offset 0x253, size 0x1, align 1
    bool m_bRandomizeSinTurnTimerOnSpawn; // offset 0x254, size 0x1, align 1
    bool m_bInvulnerable; // offset 0x255, size 0x1, align 1
    bool m_bPlayerFriendly; // offset 0x256, size 0x1, align 1
    char _pad_0257[0x1]; // offset 0x257
    int32 m_nSplitOnDeathNumUnits; // offset 0x258, size 0x4, align 4
    SurvivorsEnemyID_t m_unSplitOnDeathEnemyID; // offset 0x25C, size 0x4, align 255
    float32 m_flSplitOnDeathKnockbackDistance; // offset 0x260, size 0x4, align 4
    ESurvivorsEnemyMovementBehavior m_eMovementBehavior; // offset 0x264, size 0x4, align 4
    ESurvivorsEnemyMovementCapability m_eMovementCapability; // offset 0x268, size 0x4, align 4
    GameActivity_t m_activityIdle; // offset 0x26C, size 0x4, align 4
    GameActivity_t m_activityMove; // offset 0x270, size 0x4, align 4
    GameActivity_t m_activityDie; // offset 0x274, size 0x4, align 4
    GameActivity_t m_activityDisabled; // offset 0x278, size 0x4, align 4
    bool m_bPlayDeathSound; // offset 0x27C, size 0x1, align 1
    char _pad_027D[0x3]; // offset 0x27D
    ESurvivorsEnemySeparationLayer m_eSeparationLayer; // offset 0x280, size 0x4, align 4
    char _pad_0284[0x4]; // offset 0x284
};
