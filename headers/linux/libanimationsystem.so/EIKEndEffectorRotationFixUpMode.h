#pragma once

enum EIKEndEffectorRotationFixUpMode : uint32_t  // sizeof 0x4
{
    None = 0,
    MatchTargetOrientation = 1,
    LookAtTargetForward = 2,
    MaintainParentOrientation = 3,
    Count = 4,
};
