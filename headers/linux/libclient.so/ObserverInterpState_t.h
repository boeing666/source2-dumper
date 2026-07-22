#pragma once

enum ObserverInterpState_t : uint32_t  // sizeof 0x4
{
    OBSERVER_INTERP_NONE = 0,
    OBSERVER_INTERP_STARTING = 1,
    OBSERVER_INTERP_TRAVELING = 2,
    OBSERVER_INTERP_SETTLING = 3,
};
