#pragma once

enum CitadelArpeggiatorMode_t : uint32_t  // sizeof 0x4
{
    EArpMode_Default = 0,
    EArpMode_Up = 1,
    EArpMode_Down = 2,
    EArpMode_UpDown = 3,
    EArpMode_Random = 4,
    EArpMode_Count = 5,
};
