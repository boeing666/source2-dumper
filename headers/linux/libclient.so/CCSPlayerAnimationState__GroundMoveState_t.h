#pragma once

enum CCSPlayerAnimationState::GroundMoveState_t : uint8_t  // sizeof 0x1
{
    None = 0,
    Idle = 1,
    Start = 2,
    Move = 3,
    TurnOnSpot = 4,
    TurnOnSpotLoop = 5,
    PlantAndTurn = 6,
};
