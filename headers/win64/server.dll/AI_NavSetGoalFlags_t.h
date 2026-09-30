#pragma once

enum AI_NavSetGoalFlags_t : uint32_t  // sizeof 0x4
{
    AISG_DEF_FLAGS = 0,
    AISG_QUEUE_GOAL = 1,
    AISG_QUEUED_GOAL_BEING_PROCESSED = 2,
};
