#pragma once

enum SndBeatEventType_t : uint32_t  // sizeof 0x4
{
    eSndBeatEventTypeInvalid = 0,
    eSndBeatEventTypeBeat = 1,
    eSndBeatEventTypeBar = 2,
    eSndBeatEventTypePhrase = 3,
    eSndBeatEventTypeLength = 4,
    eSndBeatEventTypeKeys = 5,
};
