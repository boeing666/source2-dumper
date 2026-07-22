#pragma once

enum PointTemplateOwnerSpawnGroupType_t : uint32_t  // sizeof 0x4
{
    INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP = 0,
    INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP = 1,
    INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP = 2,
};
