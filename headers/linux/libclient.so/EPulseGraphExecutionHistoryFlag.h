#pragma once

enum EPulseGraphExecutionHistoryFlag : uint32_t  // sizeof 0x4
{
    NO_FLAGS = 0,
    CURSOR_ADD_TAG = 1,
    CURSOR_REMOVE_TAG = 2,
    CURSOR_RETIRED = 4,
    REQUIREMENT_PASS = 8,
    REQUIREMENT_FAIL = 16,
};
