#pragma once

enum VMixSendOperator_t : uint16_t  // sizeof 0x2
{
    NO_VOICES = -1,
    ALL_VOICES = 0,
    ROOM_VOICES = 1,
    FACING_VOICES = 2,
    MIXGROUP_VOICES = 3,
    NAMED_SEND = 4,
    INVERSE_NAMED_SENDS = 5,
    INVERSE_TOTAL_SEND = 6,
    ALL_MAX_SEND = 7,
    TRACK = 8,
};
