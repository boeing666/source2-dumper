#pragma once

enum SmartPropColorSelectionMode_t : uint32_t  // sizeof 0x4
{
    SPECIFIC_COLOR = 0,
    GRADIENT_RANDOM = 1,
    GRADIENT_RANDOM_STOP = 2,
    GRADIENT_LOCATION = 3,
};
