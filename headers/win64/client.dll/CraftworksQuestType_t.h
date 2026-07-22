#pragma once

enum CraftworksQuestType_t : uint32_t  // sizeof 0x4
{
    k_eCraftworksQuest_Invalid = 0,
    k_eCraftworksQuest_StatTracker = 1,
    k_eCraftworksQuest_GiveCommend = 2,
    k_eCraftworksQuest_ReceiveCommend = 3,
};
