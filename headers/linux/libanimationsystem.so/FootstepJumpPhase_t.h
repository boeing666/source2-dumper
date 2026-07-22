#pragma once

enum FootstepJumpPhase_t : uint8_t  // sizeof 0x1
{
    Unknown = 0,
    NotJumping = 1,
    Jumping = 2,
    Landing = 4,
};
