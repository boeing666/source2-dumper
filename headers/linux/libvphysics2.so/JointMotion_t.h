#pragma once

enum JointMotion_t : uint32_t  // sizeof 0x4
{
    JOINT_MOTION_FREE = 0,
    JOINT_MOTION_LOCKED = 1,
    JOINT_MOTION_COUNT = 2,
};
