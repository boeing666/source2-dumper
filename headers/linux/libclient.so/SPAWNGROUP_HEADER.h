#pragma once

class SPAWNGROUP_HEADER  // sizeof 0x50, align 0x10 (client) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_sGroupName; // offset 0x0, size 0x8, align 8
    CUtlString m_sEntityLumpName; // offset 0x8, size 0x8, align 8
    matrix3x4a_t m_vecWorldOffset; // offset 0x10, size 0x30, align 16
    bool m_bClientSpawnGroup; // offset 0x40, size 0x1, align 1
    bool m_bSuppressAllEntities; // offset 0x41, size 0x1, align 1
    char _pad_0042[0xE]; // offset 0x42
};
