#pragma once

enum EViscousBowlingBallState_t : uint8_t  // sizeof 0x1
{
    EViscousBowlingBallState_None = 0,
    EViscousBowlingBallState_Rolling = 1,
    EViscousBowlingBallState_TransformFromBall = 2,
};
