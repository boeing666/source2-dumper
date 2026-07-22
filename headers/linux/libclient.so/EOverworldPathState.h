#pragma once

enum EOverworldPathState : uint32_t  // sizeof 0x4
{
    k_eOverworldPathState_Invalid = 0,
    k_eOverworldPathState_Incomplete = 1,
    k_eOverworldPathState_Complete = 2,
};
