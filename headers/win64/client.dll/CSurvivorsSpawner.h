#pragma once

class CSurvivorsSpawner  // sizeof 0x178, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< SurvivorsUnitID_t > m_vecSpawnedUnitIDs; // offset 0x10, size 0x18, align 8
    char _pad_0028[0x8]; // offset 0x28
    SurvivorsEnemyID_t m_unEnemyID; // offset 0x30, size 0x4, align 255
    int32 m_nMinimumEnemyCount; // offset 0x34, size 0x4, align 4
    int32 m_nMaxSpawnCountPerInterval; // offset 0x38, size 0x4, align 4
    int32 m_nOverflowEnemySpawnCount; // offset 0x3C, size 0x4, align 4
    ESurvivorsEnemySpawnBehavior m_eSpawnBehavior; // offset 0x40, size 0x4, align 4
    float32 m_flFixedDirectionSpawnDistanceVariance; // offset 0x44, size 0x4, align 4
    Vector2D m_flSpawnOvalRadius; // offset 0x48, size 0x8, align 4
    CUtlString m_sSpawnInfoTargetName; // offset 0x50, size 0x8, align 8
    CUtlVector< int32 > m_vecOccupiedPositions; // offset 0x58, size 0x18, align 8
    float32 m_flPerpendicularWallSpacing; // offset 0x70, size 0x4, align 4
    VectorWS m_vSpawnerOrigin; // offset 0x74, size 0xC, align 4
    bool m_bSpawningComplete; // offset 0x80, size 0x1, align 1
    bool m_bIsPersistant; // offset 0x81, size 0x1, align 1
    bool m_bResetSpawnIntervalOnKill; // offset 0x82, size 0x1, align 1
    bool m_bIsActive; // offset 0x83, size 0x1, align 1
    float32 m_flDuration; // offset 0x84, size 0x4, align 4
    float32 m_flSpawnIntervalTimer; // offset 0x88, size 0x4, align 4
    float32 m_flSpawnInterval; // offset 0x8C, size 0x4, align 4
    float32 m_flSpawnChance; // offset 0x90, size 0x4, align 4
    ESurvivorsEnemySpawnPositionsLayer m_eSpawnPositionsLayer; // offset 0x94, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sSpawnParticle; // offset 0x98, size 0xE0, align 8
};
