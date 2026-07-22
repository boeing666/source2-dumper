#pragma once

enum EPingMinimapDrawCondition : uint32_t  // sizeof 0x4
{
    k_ePingMinimapDrawCondition_Always = 0,
    k_ePingMinimapDrawCondition_HaveHeroTarget = 1,
    k_ePingMinimapDrawCondition_HaveNonHeroTarget = 2,
};
