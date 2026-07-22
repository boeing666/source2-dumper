#pragma once

enum ENextAttackDelayReason_t : uint32_t  // sizeof 0x4
{
    EDelayReason_Reload = 0,
    EDelayReason_BetweenShots = 1,
    EDelayReason_Disarmed = 2,
    EDelayReason_Stunned = 3,
    EDelayReason_BebopSpinUp = 4,
    EDelayReasonCount = 5,
};
