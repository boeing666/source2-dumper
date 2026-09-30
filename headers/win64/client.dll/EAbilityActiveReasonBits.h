#pragma once

enum EAbilityActiveReasonBits : uint32_t  // sizeof 0x4
{
    ENone = 0,
    EInCastDelay = 1,
    EChanneling = 2,
    EInPostCast = 4,
    EToggledOn = 8,
    EMovementControlActive = 16,
    EHasActiveProjectiles = 32,
    ERequestedBySubclass = 64,
    EAlwaysActive = 128,
    EFirst = 1,
    ELast = 128,
};
