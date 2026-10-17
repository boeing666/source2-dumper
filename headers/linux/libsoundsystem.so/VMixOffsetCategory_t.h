#pragma once

enum VMixOffsetCategory_t : uint32_t  // sizeof 0x4
{
    NULL_POINTER = 0,
    HEAP_OFFSET = 1,
    INPUT_INDEX = 2,
    SUBMIX_INDEX = 3,
};
