#pragma once

struct BreakableSpawnTimeDesc_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    float32 m_flInitialSpawnTime; // offset 0x0, size 0x4, align 4
    float32 m_flRespawnInterval; // offset 0x4, size 0x4, align 4
};
