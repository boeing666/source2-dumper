#pragma once

enum CAI_InterestTarget::Type_t : uint32_t  // sizeof 0x4
{
    eDisabled = 0,
    eEntity = 1,
    ePosition = 2,
    eDirection = 3,
    ePath = 4,
};
