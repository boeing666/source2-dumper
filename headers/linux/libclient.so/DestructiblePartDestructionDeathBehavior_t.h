#pragma once

enum DestructiblePartDestructionDeathBehavior_t : uint32_t  // sizeof 0x4
{
    eDoNotKill = 0,
    eKill = 1,
    eGib = 2,
    eRemove = 3,
};
