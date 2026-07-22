#pragma once

class CSurvivorsSpawnerDefinition  // sizeof 0x148, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_sEnemyName; // offset 0x10, size 0x8, align 8
    CUtlString m_sEnemyDisplayName; // offset 0x18, size 0x8, align 8
    int32 m_nMinimumEnemyCount; // offset 0x20, size 0x4, align 4
    int32 m_nMaxSpawnCountPerInterval; // offset 0x24, size 0x4, align 4
    int32 m_nOverflowEnemySpawnCount; // offset 0x28, size 0x4, align 4
    float32 m_flSpawnInterval; // offset 0x2C, size 0x4, align 4
    ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // offset 0x30, size 0x4, align 4
    float32 m_flFixedDirectionSpawnDistanceVariance; // offset 0x34, size 0x4, align 4
    bool m_bIsPersistant; // offset 0x38, size 0x1, align 1
    bool m_bResetSpawnIntervalOnKill; // offset 0x39, size 0x1, align 1
    char _pad_003A[0x2]; // offset 0x3A
    float32 m_flSpawnChance; // offset 0x3C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sSpawnParticle; // offset 0x40, size 0xE0, align 8
    Vector2D m_flSpawnOvalRadius; // offset 0x120, size 0x8, align 4
    CUtlString m_sSpawnInfoTargetName; // offset 0x128, size 0x8, align 8
    CUtlString m_sMinimapIconClass; // offset 0x130, size 0x8, align 8
    float32 m_flPerpendicularWallSpacing; // offset 0x138, size 0x4, align 4
    bool m_bIgnoreDifficultySpawnMultiplier; // offset 0x13C, size 0x1, align 1
    char _pad_013D[0x7]; // offset 0x13D
    ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // offset 0x144, size 0x4, align 4
};
