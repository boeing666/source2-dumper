#pragma once

enum SubclassVDataChangeType_t : uint32_t  // sizeof 0x4
{
    SUBCLASS_VDATA_CREATED = 0,
    SUBCLASS_VDATA_SUBCLASS_CHANGED = 1,
    SUBCLASS_VDATA_RELOADED = 2,
};
