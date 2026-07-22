#pragma once

enum IKChannelMode : uint32_t  // sizeof 0x4
{
    TwoBone = 0,
    TwoBone_Translate = 1,
    OneBone = 2,
    OneBone_Translate = 3,
};
