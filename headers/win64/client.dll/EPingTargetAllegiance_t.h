#pragma once

enum EPingTargetAllegiance_t : uint32_t  // sizeof 0x4
{
    k_ePingTargetAllegiance_Any = 0,
    k_ePingTargetAllegiance_Friendly = 1,
    k_ePingTargetAllegiance_Enemy = 2,
    k_ePingTargetAllegiance_Neutral = 3,
};
