#pragma once

enum GoalCategory_t : uint32_t  // sizeof 0x4
{
    CATEGORY_UNSET = 0,
    CATEGORY_NEUTRAL = 1,
    CATEGORY_OFFENSIVE = 2,
    CATEGORY_DEFENSIVE = 3,
    CATEGORY_DANGER_AVOID = 4,
};
