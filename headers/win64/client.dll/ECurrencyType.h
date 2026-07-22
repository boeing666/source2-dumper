#pragma once

enum ECurrencyType : uint32_t  // sizeof 0x4
{
    ECurrencyInvalid = -1,
    EGold = 0,
    EAbilityPoints = 1,
    EAbilityUnlocks = 2,
    EDeathPenaltyGold = 3,
    EItemDraftRerolls = 4,
    EItemEnhancements = 5,
    ECurrencyCount = 6,
};
