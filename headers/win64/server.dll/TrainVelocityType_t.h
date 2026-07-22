#pragma once

enum TrainVelocityType_t : uint32_t  // sizeof 0x4
{
    TrainVelocity_Instantaneous = 0,
    TrainVelocity_LinearBlend = 1,
    TrainVelocity_EaseInEaseOut = 2,
};
