#pragma once

class CSurvivorsDifficultyDefinition  // sizeof 0xB0, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sLocDifficultyName; // offset 0x0, size 0x8, align 8
    CUtlString m_sLocDifficultyDescription; // offset 0x8, size 0x8, align 8
    CUtlString m_sLocDifficultyUpgradeText; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
    float32 m_flPlayerMaxHPMultiplier; // offset 0x20, size 0x4, align 4
    float32 m_flPlayerHPRegenerationMultiplier; // offset 0x24, size 0x4, align 4
    float32 m_flEnemyHealthMultiplier; // offset 0x28, size 0x4, align 4
    float32 m_flEnemyDamageMultiplier; // offset 0x2C, size 0x4, align 4
    float32 m_flEnemyMovementSpeedMultiplier; // offset 0x30, size 0x4, align 4
    float32 m_flEnemyTurnRateMultiplier; // offset 0x34, size 0x4, align 4
    float32 m_flEnemySpawnCountMuliplier; // offset 0x38, size 0x4, align 4
    float32 m_flEnemyTouchMovementSlowDuration; // offset 0x3C, size 0x4, align 4
    float32 m_flXPDropChanceMultiplier; // offset 0x40, size 0x4, align 4
    float32 m_flXPLevelUpRequirementMultiplier; // offset 0x44, size 0x4, align 4
    float32 m_flAdditionalFirstFloorTime; // offset 0x48, size 0x4, align 4
    bool m_bEnableMeteorModifier; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
    CUtlVector< CSurvivorsSpawnerDefinition > m_vecAdditionalEnemySpawners; // offset 0x50, size 0x18, align 8
    CUtlVector< CSurvivorsEnemyEventDefinition > m_vecAdditionalEnemyEvents; // offset 0x68, size 0x18, align 8
    CUtlVector< SurvivorsPowerUpID_t > m_vecAdditionalStartingPowerUps; // offset 0x80, size 0x18, align 8
    CUtlVector< float32 > m_vecOverrideImperiaEnrageHealthThresholds; // offset 0x98, size 0x18, align 8
};
