#pragma once

enum RadialGoalFlags_t : uint32_t  // sizeof 0x4
{
    eDefault = 0,
    eAllowGapsFromCenter = 1,
    eFailOnTooClose = 2,
    ePointArrivalDirectionTowardGoal = 4,
};
