#pragma once

enum NPCStatusEffectPriority_t : uint32_t  // sizeof 0x4
{
    STATUS_PRIORITY_NOT_USED = 0,
    STATUS_PRIORITY_LOW = 1,
    STATUS_PRIORITY_MEDIUM = 2,
    STATUS_PRIORITY_HIGH = 3,
    STATUS_PRIORITY_HIGHEST = 4,
};
