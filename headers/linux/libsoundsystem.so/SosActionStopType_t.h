#pragma once

enum SosActionStopType_t : uint32_t  // sizeof 0x4
{
    SOS_STOPTYPE_NONE = 0,
    SOS_STOPTYPE_TIME = 1,
    SOS_STOPTYPE_OPVAR = 2,
};
