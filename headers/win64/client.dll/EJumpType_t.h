#pragma once

enum EJumpType_t : uint8_t  // sizeof 0x1
{
    EJumpType_Ground = 0,
    EJumpType_Air = 1,
    EJumpType_Wall = 2,
    EJumpType_DashJump = 3,
};
