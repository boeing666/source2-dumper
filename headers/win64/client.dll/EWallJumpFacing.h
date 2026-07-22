#pragma once

enum EWallJumpFacing : uint16_t  // sizeof 0x2
{
    NotOnWall = 0,
    WallToFront = 1,
    WallToRight = 2,
    WallToLeft = 3,
    WallToBack = 4,
};
