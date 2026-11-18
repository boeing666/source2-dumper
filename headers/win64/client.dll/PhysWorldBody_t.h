#pragma once

struct PhysWorldBody_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_sSpawnGroup; // offset 0x0, size 0x8, align 8
    uint64 m_pBody; // offset 0x8, size 0x8, align 8
};
