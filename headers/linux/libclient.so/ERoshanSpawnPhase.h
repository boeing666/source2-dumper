#pragma once

enum ERoshanSpawnPhase : uint32_t  // sizeof 0x4
{
    ROSHAN_SPAWN_PHASE_ALIVE = 0,
    ROSHAN_SPAWN_PHASE_BASE_TIMER = 1,
    ROSHAN_SPAWN_PHASE_VARIABLE_TIMER = 2,
};
