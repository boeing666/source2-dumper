#pragma once

enum EntityDormancyType_t : uint32_t  // sizeof 0x4
{
    ENTITY_NOT_DORMANT = 0,
    ENTITY_DORMANT = 1,
    ENTITY_SUSPENDED = 2,
};
