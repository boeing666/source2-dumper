#pragma once

enum StatsUsageFlags_t : uint32_t  // sizeof 0x4
{
    None = 0,
    IntrinsicallyProvidedInModifier = 1,
    IntrinsicallyProvidedInAbility = 2,
    ConditionallyApplied = 4,
    ConditionallyEnemyApplied = 8,
};
