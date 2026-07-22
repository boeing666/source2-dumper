#pragma once

enum ParticleToolsState_t : uint32_t  // sizeof 0x4
{
    PARTICLE_TOOLS_STATE_ALWAYS_ON = -1,
    PARTICLE_TOOLS_STATE_TOOLS_ONLY = 0,
    PARTICLE_TOOLS_STATE_GAME_ONLY = 1,
};
