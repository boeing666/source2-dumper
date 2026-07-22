#pragma once

class CSurvivorsEnemyEventDefinition  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sSpawnerName; // offset 0x0, size 0x8, align 8
    int32 m_nMinimumEnemyCountOverride; // offset 0x8, size 0x4, align 4
    int32 m_nMaxSpawnCountPerIntervalOverride; // offset 0xC, size 0x4, align 4
    int32 m_nOverflowEnemySpawnCountOverride; // offset 0x10, size 0x4, align 4
    float32 m_flSpawnIntervalOverride; // offset 0x14, size 0x4, align 4
    float32 m_flStartTime; // offset 0x18, size 0x4, align 4
    float32 m_flEndTime; // offset 0x1C, size 0x4, align 4
};
