#pragma once

enum NavGoalPathfindingAlgorithm_t : uint32_t  // sizeof 0x4
{
    eStandard = 0,
    eSpecifiedWaypoints = 1,
    eMultiGoal = 2,
    eRadialGoal = 3,
    eDirectionalGoal = 4,
    eRandomGoal = 5,
    eWanderGoal = 6,
    eVectorGoal = 7,
    eStopGoal = 8,
};
