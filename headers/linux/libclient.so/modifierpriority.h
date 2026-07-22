#pragma once

enum modifierpriority : uint32_t  // sizeof 0x4
{
    MODIFIER_PRIORITY_LOW = 0,
    MODIFIER_PRIORITY_NORMAL = 1,
    MODIFIER_PRIORITY_HIGH = 2,
    MODIFIER_PRIORITY_ULTRA = 3,
    MODIFIER_PRIORITY_SUPER_ULTRA = 4,
};
