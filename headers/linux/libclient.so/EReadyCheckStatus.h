#pragma once

enum EReadyCheckStatus : uint32_t  // sizeof 0x4
{
    k_EReadyCheckStatus_Unknown = 0,
    k_EReadyCheckStatus_NotReady = 1,
    k_EReadyCheckStatus_Ready = 2,
};
