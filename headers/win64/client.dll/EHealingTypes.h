#pragma once

enum EHealingTypes : uint16_t  // sizeof 0x2
{
    EHealTypeStandard = 0,
    EHealTypeBaseRegen = 1,
    EHealTypeInternal = 2,
    EHealTypeExternalRegen = 3,
    EHealTypeLifeSteal = 4,
};
