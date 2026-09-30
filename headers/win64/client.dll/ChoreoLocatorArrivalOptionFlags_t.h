#pragma once

enum ChoreoLocatorArrivalOptionFlags_t : uint16_t  // sizeof 0x2
{
    eLocatorArrivalOption_None = 0,
    eLocatorArrivalOption_DontStopAtGoal = 1,
    eLocatorArrivalOption_IgnoreArrivalFacing = 2,
    eLocatorArrivalOption_SmoothArrivalPath = 4,
};
