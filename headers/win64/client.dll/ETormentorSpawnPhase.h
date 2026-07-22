#pragma once

enum ETormentorSpawnPhase : uint32_t  // sizeof 0x4
{
    TORMENTOR_SPAWN_PHASE_HAS_NOT_SPAWNED = 0,
    TORMENTOR_SPAWN_PHASE_ALIVE = 1,
    TORMENTOR_SPAWN_PHASE_RESPAWNING = 2,
};
