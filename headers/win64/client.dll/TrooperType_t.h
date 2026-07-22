#pragma once

enum TrooperType_t : uint32_t  // sizeof 0x4
{
    TROOPER_INVALID = 0,
    TROOPER_NORMAL = 1,
    TROOPER_MEDIC = 2,
    TROOPER_MELEE = 3,
    TROOPER_ZIPLINE_CONTAINER = 4,
};
