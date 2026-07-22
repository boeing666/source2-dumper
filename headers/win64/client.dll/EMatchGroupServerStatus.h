#pragma once

enum EMatchGroupServerStatus : uint32_t  // sizeof 0x4
{
    k_EMatchGroupServerStatus_OK = 0,
    k_EMatchGroupServerStatus_LimitedAvailability = 1,
    k_EMatchGroupServerStatus_Offline = 2,
};
