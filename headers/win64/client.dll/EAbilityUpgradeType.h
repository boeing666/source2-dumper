#pragma once

enum EAbilityUpgradeType : uint32_t  // sizeof 0x4
{
    EAddToBase = 0,
    EMultiplyBase = 1,
    EAddToScale = 2,
    EMultiplyScale = 3,
    EAbilityUpgradeTypeCount = 4,
};
