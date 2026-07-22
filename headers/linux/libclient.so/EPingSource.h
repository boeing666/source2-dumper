#pragma once

enum EPingSource : uint32_t  // sizeof 0x4
{
    k_ePingSource_Default = 0,
    k_ePingSource_Warning = 1,
    k_ePingSource_Wheel = 2,
    k_ePingSource_System = 3,
};
