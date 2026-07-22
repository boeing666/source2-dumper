#pragma once

class CDOTACrateDropLevelDef  // sizeof 0x88, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    DOTACrateDropLevelDefID_t m_unID; // offset 0x8, size 0x4, align 255
    int32 m_nCratesForGameOver; // offset 0xC, size 0x4, align 4
    int32 m_nCratesForNextLevel; // offset 0x10, size 0x4, align 4
    float32 m_flCrateSpawnInterval; // offset 0x14, size 0x4, align 4
    float32 m_flHazardSpawnIntervalMin; // offset 0x18, size 0x4, align 4
    float32 m_flHazardSpawnIntervalMax; // offset 0x1C, size 0x4, align 4
    float32 m_flPowerupInterval; // offset 0x20, size 0x4, align 4
    float32 m_flPowerupChance; // offset 0x24, size 0x4, align 4
    int32 m_nMaxCratesOnLevel; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlVector< CDOTACrateDropTable > m_vecDropTableCrates; // offset 0x30, size 0x18, align 8
    CUtlVector< CDOTACrateDropTable > m_vecDropTableHazards; // offset 0x48, size 0x18, align 8
    CUtlVector< CDOTACrateDropTable > m_vecDropTablePowerups; // offset 0x60, size 0x18, align 8
    int32 m_nRotationChance; // offset 0x78, size 0x4, align 4
    int32 m_nRotationSpeedMin; // offset 0x7C, size 0x4, align 4
    int32 m_nRotationSpeedMax; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
};
