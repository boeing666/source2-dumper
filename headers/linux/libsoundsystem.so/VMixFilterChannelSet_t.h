#pragma once

enum VMixFilterChannelSet_t : uint8_t  // sizeof 0x1
{
    FILTER_ALL_CHANNELS = 0,
    FILTER_LEFT_ONLY = 1,
    FILTER_RIGHT_ONLY = 2,
    FILTER_MID_ONLY = 3,
    FILTER_SIDE_ONLY = 4,
    FILTER_CHANNEL_SET_MAX = 5,
};
