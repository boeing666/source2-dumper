#pragma once

enum EPlayerTrackedStatImpl : uint32_t  // sizeof 0x4
{
    k_ePlayerTrackedStatImpl_Invalid = 0,
    k_ePlayerTrackedStatImpl_Direct = 1,
    k_ePlayerTrackedStatImpl_Expression = 2,
};
