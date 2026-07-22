#pragma once

enum CCSPlayerAnimationState::MoveType_t : uint8_t  // sizeof 0x1
{
    None = 0,
    Ground = 1,
    Air = 2,
    Ladder = 3,
};
