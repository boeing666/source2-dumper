#pragma once

class CSurvivorsGameModeDefinition  // sizeof 0xE18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    SurvivorsGameModeID_t m_unGameModeID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0xC]; // offset 0x4
    Vector m_vCameraOffset; // offset 0x10, size 0xC, align 4
    float32 m_flEnemyRadius; // offset 0x1C, size 0x4, align 4
    float32 m_flEnemyRadiusVariance; // offset 0x20, size 0x4, align 4
    float32 m_flEnemyDespawnBuffer; // offset 0x24, size 0x4, align 4
    float32 m_flEnemyDespawnTime; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_sLevelName; // offset 0x30, size 0x8, align 8
    float32 m_flRequiredExperienceBase; // offset 0x38, size 0x4, align 4
    float32 m_flRequiredExperienceExponent; // offset 0x3C, size 0x4, align 4
    char _pad_0040[0x4]; // offset 0x40
    CrownfallSurvivorsLightingEnvironment_t[3] m_TimeBasedLightingEnvironments; // offset 0x44, size 0x78, align 4
    char _pad_00BC[0x4]; // offset 0xBC
    CUtlString m_sDifficultyName; // offset 0xC0, size 0x8, align 8
    float32 m_flPlayerReviveTimer; // offset 0xC8, size 0x4, align 4
    char _pad_00CC[0x4]; // offset 0xCC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sReviveEffect; // offset 0xD0, size 0xE0, align 8
    int32 m_nMaxActiveSlots; // offset 0x1B0, size 0x4, align 4
    int32 m_nMaxPassiveSlots; // offset 0x1B4, size 0x4, align 4
    int32 m_nLevelUpChoices; // offset 0x1B8, size 0x4, align 4
    int32 m_nMaxXPPickupsInWorld; // offset 0x1BC, size 0x4, align 4
    float32 m_flKnockbackDuration; // offset 0x1C0, size 0x4, align 4
    float32 m_flSeperationVelocityInfluence; // offset 0x1C4, size 0x4, align 4
    float32 m_flSeperationVelocityInterpolationSpeed; // offset 0x1C8, size 0x4, align 4
    float32 m_flPlayerPositionHistoryBufferDuration; // offset 0x1CC, size 0x4, align 4
    float32 m_flExistingItemGenerationWeight; // offset 0x1D0, size 0x4, align 4
    float32 m_flNewItemGenerationWeight; // offset 0x1D4, size 0x4, align 4
    float32 m_flPassiveItemGenerationWeight; // offset 0x1D8, size 0x4, align 4
    float32 m_flFirstFloorTimeLimit; // offset 0x1DC, size 0x4, align 4
    float32 m_flEliteRoomTriggerChannelTime; // offset 0x1E0, size 0x4, align 4
    float32 m_flEliteRoomTriggerRadius; // offset 0x1E4, size 0x4, align 4
    int32 m_nInitialItemSpawns; // offset 0x1E8, size 0x4, align 4
    int32 m_nInitialMagnetSpawns; // offset 0x1EC, size 0x4, align 4
    CUtlVector< float32 > m_vecEliteRoomUnlockTimes; // offset 0x1F0, size 0x18, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEliteRoomChannelEffect; // offset 0x208, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sEliteRoomDirectionalArrowEffect; // offset 0x2E8, size 0xE0, align 8
    CUtlVector< CUtlString > m_vecEliteRoomChoices; // offset 0x3C8, size 0x18, align 8
    char _pad_03E0[0x18]; // offset 0x3E0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sHealthBarEffect; // offset 0x3F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAttackIndicatorParticleEffect; // offset 0x4D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDamageNumbersEffectEnemy; // offset 0x5B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDamageNumbersEffectPlayer; // offset 0x698, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDamageNumbersEffectCriticalStrike; // offset 0x778, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sCollisionIndicatorEffect; // offset 0x858, size 0xE0, align 8
    Vector m_vCollisionIndicatorColorPlayer; // offset 0x938, size 0xC, align 4
    Vector m_vCollisionIndicatorColorEnemy; // offset 0x944, size 0xC, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sPhysicalWeaknessEffect; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sGenericStunEffect; // offset 0xA30, size 0xE0, align 8
    Color m_cEliteGlowColor; // offset 0xB10, size 0x4, align 1
    float32 m_flLevelUpDelay; // offset 0xB14, size 0x4, align 4
    float32 m_flLevelUpKnockbackRadius; // offset 0xB18, size 0x4, align 4
    float32 m_flLevelUpKnockbackDistance; // offset 0xB1C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sLevelUpEffect; // offset 0xB20, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sLevelUpKnockbackEffect; // offset 0xC00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sPlayerHitEffect; // offset 0xCE0, size 0xE0, align 8
    CUtlVector< CSurvivorsGameModeDefinition::SeparationLayerData > m_vecSeperationLayerData; // offset 0xDC0, size 0x18, align 8
    CSurvivorsLootTable m_luckyLootTable; // offset 0xDD8, size 0x18, align 8
    char _pad_0DF0[0x28]; // offset 0xDF0
};
