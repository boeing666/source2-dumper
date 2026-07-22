#pragma once

enum EAbilityRequirements_t : uint16_t  // sizeof 0x2
{
    ERequirementNone = 0,
    ERequirementChargedAbility = 1,
    ERequirementChannelledAbility = 2,
    ERequirementNonChargedULT = 4,
    ERequirementStreetBrawl = 8,
};
