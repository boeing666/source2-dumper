#pragma once

enum EntityIOTargetType_t : uint32_t  // sizeof 0x4
{
    ENTITY_IO_TARGET_INVALID = -1,
    ENTITY_IO_TARGET_ENTITYNAME = 2,
    ENTITY_IO_TARGET_EHANDLE = 6,
    ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 7,
};
