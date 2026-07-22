#pragma once

enum CNmRootMotionOverrideNode::OverrideFlags_t : uint8_t  // sizeof 0x1
{
    AllowMoveX = 0,
    AllowMoveY = 1,
    AllowMoveZ = 2,
    AllowFacingPitch = 3,
    ListenForEvents = 4,
};
