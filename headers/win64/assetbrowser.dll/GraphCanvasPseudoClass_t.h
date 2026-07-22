#pragma once

enum GraphCanvasPseudoClass_t : uint32_t  // sizeof 0x4
{
    INVALID = 0,
    FIRST_CHILD = 1,
    LAST_CHILD = 2,
    NTH_CHILD = 3,
    NTH_LAST_CHILD = 4,
    ONLY_CHILD = 5,
    HOVER_ANCESTOR = 6,
    HOVER_DESCENDANT = 7,
    HOVER_CUSTOM_A = 8,
    HOVER_CUSTOM_B = 9,
    HOVER_CUSTOM_C = 10,
    SELECTED = 11,
    HOVER_SELF = 12,
};
