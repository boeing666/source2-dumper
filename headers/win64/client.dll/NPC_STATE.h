#pragma once

enum NPC_STATE : uint32_t  // sizeof 0x4
{
    NPC_STATE_INVALID = -1,
    NPC_STATE_INIT = 0,
    NPC_STATE_IDLE = 1,
    NPC_STATE_ALERT = 2,
    NPC_STATE_COMBAT = 3,
    NPC_STATE_SCRIPT = 4,
    NPC_STATE_DEAD = 5,
    NPC_STATE_INERT = 6,
    NPC_STATE_SYNCHRONIZED_SECONDARY = 7,
    NUM_NPC_STATES = 8,
};
