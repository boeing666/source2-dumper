#pragma once

enum EShareAbility : uint32_t  // sizeof 0x4
{
    ITEM_FULLY_SHAREABLE = 0,
    ITEM_PARTIALLY_SHAREABLE = 1,
    ITEM_NOT_SHAREABLE = 2,
};
