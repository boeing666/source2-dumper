#pragma once

struct ArtySpawnerDef_t : public ArtyGameObjectDef_t /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0xB0]; // offset 0x0
    float32 m_flInitialDelay; // offset 0xB0, size 0x4, align 4
    float32 m_flDelayBetween; // offset 0xB4, size 0x4, align 4
    int32 m_nNumToSpawn; // offset 0xB8, size 0x4, align 4
    EArtyTeam m_eSpawnedUnitTeam; // offset 0xBC, size 0x1, align 1
    char _pad_00BD[0x3]; // offset 0xBD
    CUtlString m_szGameObject; // offset 0xC0, size 0x8, align 8
    char _pad_00C8[0x8]; // offset 0xC8
};
