#pragma once

enum ELeapState_t : uint8_t  // sizeof 0x1
{
    ELeapState_None = 0,
    ELeapState_Startup = 1,
    ELeapState_BoostingUp = 2,
    ELeapState_CrashingDown = 3,
    ELeapState_Land = 4,
    ELeapState_CrashOnGroundTouch = 5,
};
