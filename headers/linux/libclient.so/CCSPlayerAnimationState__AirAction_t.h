#pragma once

enum CCSPlayerAnimationState::AirAction_t : uint8_t  // sizeof 0x1
{
    None = 0,
    Jump = 1,
    StartFall = 2,
    Land = 3,
};
