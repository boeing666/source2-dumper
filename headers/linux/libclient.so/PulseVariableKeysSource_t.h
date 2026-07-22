#pragma once

enum PulseVariableKeysSource_t : uint32_t  // sizeof 0x4
{
    PRIVATE = 0,
    CPP = 1,
    VMAP = 2,
    VMDL = 3,
    XML = 4,
    VDATA = 5,
    COUNT = 6,
};
