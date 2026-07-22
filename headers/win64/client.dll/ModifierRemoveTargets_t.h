#pragma once

enum ModifierRemoveTargets_t : uint32_t  // sizeof 0x4
{
    MODIFIER_REMOVE_ALL = 0,
    MODIFIER_REMOVE_ENEMY = 1,
    MODIFIER_REMOVE_ALLY = 2,
    MODIFIER_REMOVE_INTRINSIC = 3,
};
