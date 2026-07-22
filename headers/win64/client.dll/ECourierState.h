#pragma once

enum ECourierState : uint32_t  // sizeof 0x4
{
    k_eIdle = 0,
    k_eAtShop = 1,
    k_eGoToShop = 2,
    k_eGoToUnit = 3,
    k_eManual = 4,
};
