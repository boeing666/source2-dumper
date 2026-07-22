#pragma once

enum ELaneSelection : uint32_t  // sizeof 0x4
{
    k_ELaneSelection_SAFELANE = 0,
    k_ELaneSelection_OFFLANE = 1,
    k_ELaneSelection_MIDLANE = 2,
    k_ELaneSelection_SUPPORT = 3,
    k_ELaneSelection_HARDSUPPORT = 4,
};
