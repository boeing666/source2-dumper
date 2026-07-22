#pragma once

enum AbilityDependencyFlags : uint16_t  // sizeof 0x2
{
    None = 0,
    LinkImbues = 1,
    LinkUpgrades = 2,
    DisplayAsSubAbility = 4,
};
