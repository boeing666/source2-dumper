#pragma once

enum NmGraphValueType_t : uint8_t  // sizeof 0x1
{
    Unknown = 0,
    Bool = 1,
    ID = 2,
    Float = 3,
    Vector = 4,
    Target = 5,
    BoneMask = 6,
    Pose = 7,
    Special = 8,
};
