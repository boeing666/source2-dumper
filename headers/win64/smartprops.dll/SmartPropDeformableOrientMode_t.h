#pragma once

enum SmartPropDeformableOrientMode_t : uint32_t  // sizeof 0x4
{
    NONE = 0,
    FORWARD_NORMAL = 1,
    UP_NORMAL = 2,
    BACKWARD_NORMAL = 3,
    MAINTAIN_OFFSET = 4,
};
