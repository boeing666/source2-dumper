#pragma once

enum EntityDissolveType_t : uint32_t  // sizeof 0x4
{
    ENTITY_DISSOLVE_INVALID = -1,
    ENTITY_DISSOLVE_NORMAL = 0,
    ENTITY_DISSOLVE_ELECTRICAL = 1,
    ENTITY_DISSOLVE_ELECTRICAL_LIGHT = 2,
    ENTITY_DISSOLVE_CORE = 3,
};
